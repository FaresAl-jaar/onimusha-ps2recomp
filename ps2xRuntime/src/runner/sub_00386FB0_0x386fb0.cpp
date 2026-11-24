#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00386FB0
// Address: 0x386fb0 - 0x387030
void sub_00386FB0_0x386fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386FB0_0x386fb0");
#endif

    switch (ctx->pc) {
        case 0x386fd8u: goto label_386fd8;
        default: break;
    }

    ctx->pc = 0x386fb0u;

    // 0x386fb0: 0x80a6000a  lb          $a2, 0xA($a1)
    ctx->pc = 0x386fb0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x386fb4: 0x80a80005  lb          $t0, 0x5($a1)
    ctx->pc = 0x386fb4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x386fb8: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x386fb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x386fbc: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x386FBCu;
    {
        const bool branch_taken_0x386fbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x386FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386FBCu;
        // 0x386fc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386fbc) {
            ctx->pc = 0x387020u;
            goto label_387020;
        }
    }
    ctx->pc = 0x386FC4u;
    // 0x386fc4: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x386fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x386fc8: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x386fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x386fcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x386fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x386fd0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x386fd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x386fd4: 0x0  nop
    ctx->pc = 0x386fd4u;
    // NOP
label_386fd8:
    // 0x386fd8: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x386fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x386fdc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x386fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x386fe0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x386fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x386fe4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x386fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x386fe8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x386fe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x386fec: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x386FECu;
    {
        const bool branch_taken_0x386fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x386FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386FECu;
        // 0x386ff0: 0x8163c  dsll32      $v0, $t0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386fec) {
            ctx->pc = 0x387000u;
            goto label_387000;
        }
    }
    ctx->pc = 0x386FF4u;
    // 0x386ff4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x386FF4u;
    {
        const bool branch_taken_0x386ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386FF4u;
        // 0x386ff8: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ff4) {
            ctx->pc = 0x387028u;
            goto label_387028;
        }
    }
    ctx->pc = 0x386FFCu;
    // 0x386ffc: 0x0  nop
    ctx->pc = 0x386ffcu;
    // NOP
label_387000:
    // 0x387000: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x387000u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x387004: 0x103001a  div         $zero, $t0, $v1
    ctx->pc = 0x387004u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x387008: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x387008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x38700c: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x38700cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x387010: 0x4010  mfhi        $t0
    ctx->pc = 0x387010u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x387014: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x387014u;
    {
        const bool branch_taken_0x387014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x387014) {
            ctx->pc = 0x386FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386fd8;
        }
    }
    ctx->pc = 0x38701Cu;
    // 0x38701c: 0x0  nop
    ctx->pc = 0x38701cu;
    // NOP
label_387020:
    // 0x387020: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x387020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x387024: 0x0  nop
    ctx->pc = 0x387024u;
    // NOP
label_387028:
    // 0x387028: 0x3e00008  jr          $ra
    ctx->pc = 0x387028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387030u;
}
