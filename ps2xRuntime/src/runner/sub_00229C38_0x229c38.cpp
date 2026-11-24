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

// Function: sub_00229C38
// Address: 0x229c38 - 0x229c9c
void sub_00229C38_0x229c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229C38_0x229c38");
#endif

    switch (ctx->pc) {
        case 0x229c38u: goto label_229c38;
        case 0x229c3cu: goto label_229c3c;
        case 0x229c40u: goto label_229c40;
        case 0x229c44u: goto label_229c44;
        case 0x229c48u: goto label_229c48;
        case 0x229c4cu: goto label_229c4c;
        case 0x229c50u: goto label_229c50;
        case 0x229c54u: goto label_229c54;
        case 0x229c58u: goto label_229c58;
        case 0x229c5cu: goto label_229c5c;
        case 0x229c60u: goto label_229c60;
        case 0x229c64u: goto label_229c64;
        case 0x229c68u: goto label_229c68;
        case 0x229c6cu: goto label_229c6c;
        case 0x229c70u: goto label_229c70;
        case 0x229c74u: goto label_229c74;
        case 0x229c78u: goto label_229c78;
        case 0x229c7cu: goto label_229c7c;
        case 0x229c80u: goto label_229c80;
        case 0x229c84u: goto label_229c84;
        case 0x229c88u: goto label_229c88;
        case 0x229c8cu: goto label_229c8c;
        case 0x229c90u: goto label_229c90;
        case 0x229c94u: goto label_229c94;
        case 0x229c98u: goto label_229c98;
        default: break;
    }

    ctx->pc = 0x229c38u;

label_229c38:
    // 0x229c38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x229c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_229c3c:
    // 0x229c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x229c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_229c40:
    // 0x229c40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x229c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_229c44:
    // 0x229c44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x229c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_229c48:
    // 0x229c48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x229c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_229c4c:
    // 0x229c4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x229c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_229c50:
    // 0x229c50: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x229c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_229c54:
    // 0x229c54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_229c58:
    if (ctx->pc == 0x229C58u) {
        ctx->pc = 0x229C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C54u;
        // 0x229c58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C5Cu;
        goto label_229c5c;
    }
    ctx->pc = 0x229C54u;
    {
        const bool branch_taken_0x229c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C54u;
        // 0x229c58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c54) {
            ctx->pc = 0x229C6Cu;
            goto label_229c6c;
        }
    }
    ctx->pc = 0x229C5Cu;
label_229c5c:
    // 0x229c5c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x229c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_229c60:
    // 0x229c60: 0x8c43b0d4  lw          $v1, -0x4F2C($v0)
    ctx->pc = 0x229c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947028)));
label_229c64:
    // 0x229c64: 0x60f809  jalr        $v1
label_229c68:
    if (ctx->pc == 0x229C68u) {
        ctx->pc = 0x229C6Cu;
        goto label_229c6c;
    }
    ctx->pc = 0x229C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x229C6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229C64u, 0x229C6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229C6Cu;
label_229c6c:
    // 0x229c6c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x229c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_229c70:
    // 0x229c70: 0xae3000b8  sw          $s0, 0xB8($s1)
    ctx->pc = 0x229c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 16));
label_229c74:
    // 0x229c74: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x229c74u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_229c78:
    // 0x229c78: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_229c7c:
    if (ctx->pc == 0x229C7Cu) {
        ctx->pc = 0x229C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C78u;
        // 0x229c7c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C80u;
        goto label_229c80;
    }
    ctx->pc = 0x229C78u;
    {
        const bool branch_taken_0x229c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229c78) {
            ctx->pc = 0x229C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229C78u;
            // 0x229c7c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x229C80u;
            goto label_229c80;
        }
    }
    ctx->pc = 0x229C80u;
label_229c80:
    // 0x229c80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_229c84:
    // 0x229c84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x229c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_229c88:
    // 0x229c88: 0x1812  mflo        $v1
    ctx->pc = 0x229c88u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_229c8c:
    // 0x229c8c: 0xae2300bc  sw          $v1, 0xBC($s1)
    ctx->pc = 0x229c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
label_229c90:
    // 0x229c90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x229c90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_229c94:
    // 0x229c94: 0x3e00008  jr          $ra
label_229c98:
    if (ctx->pc == 0x229C98u) {
        ctx->pc = 0x229C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C94u;
        // 0x229c98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C9Cu;
        goto label_fallthrough_0x229c94;
    }
    ctx->pc = 0x229C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C94u;
        // 0x229c98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x229c94:
    ctx->pc = 0x229C9Cu;
}
