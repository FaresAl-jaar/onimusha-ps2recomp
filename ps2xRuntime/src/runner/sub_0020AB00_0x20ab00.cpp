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

// Function: sub_0020AB00
// Address: 0x20ab00 - 0x20ab80
void sub_0020AB00_0x20ab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AB00_0x20ab00");
#endif

    switch (ctx->pc) {
        case 0x20ab1cu: goto label_20ab1c;
        case 0x20ab68u: goto label_20ab68;
        default: break;
    }

    ctx->pc = 0x20ab00u;

    // 0x20ab00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20ab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20ab04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20ab04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ab08: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x20ab08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x20ab0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20ab0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20ab10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20ab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20ab14: 0xc081ec8  jal         func_207B20
    ctx->pc = 0x20AB14u;
    SET_GPR_U32(ctx, 31, 0x20AB1Cu);
    ctx->pc = 0x20AB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB14u;
    // 0x20ab18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207B20u, 0x20AB14u, 0x20AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB1Cu;
label_20ab1c:
    // 0x20ab1c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x20ab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20ab20: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x20ab20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x20ab24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20ab24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ab28: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x20ab28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20ab2c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20AB2Cu;
    {
        const bool branch_taken_0x20ab2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ab2c) {
            ctx->pc = 0x20AB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AB2Cu;
            // 0x20ab30: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AB34u;
            goto label_20ab34;
        }
    }
    ctx->pc = 0x20AB34u;
label_20ab34:
    // 0x20ab34: 0x8e0202fc  lw          $v0, 0x2FC($s0)
    ctx->pc = 0x20ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 764)));
    // 0x20ab38: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x20ab38u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20ab3c: 0x1812  mflo        $v1
    ctx->pc = 0x20ab3cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x20ab40: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x20ab40u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20ab44: 0x1012  mflo        $v0
    ctx->pc = 0x20ab44u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x20ab48: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x20ab48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20ab4c: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20AB4Cu;
    {
        const bool branch_taken_0x20ab4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ab4c) {
            ctx->pc = 0x20AB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AB4Cu;
            // 0x20ab50: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AB74u;
            goto label_20ab74;
        }
    }
    ctx->pc = 0x20AB54u;
    // 0x20ab54: 0x8e0202e8  lw          $v0, 0x2E8($s0)
    ctx->pc = 0x20ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x20ab58: 0x54460006  bnel        $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x20AB58u;
    {
        const bool branch_taken_0x20ab58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x20ab58) {
            ctx->pc = 0x20AB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AB58u;
            // 0x20ab5c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AB74u;
            goto label_20ab74;
        }
    }
    ctx->pc = 0x20AB60u;
    // 0x20ab60: 0xc08288c  jal         func_20A230
    ctx->pc = 0x20AB60u;
    SET_GPR_U32(ctx, 31, 0x20AB68u);
    ctx->pc = 0x20AB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB60u;
    // 0x20ab64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A230u, 0x20AB60u, 0x20AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB68u;
label_20ab68:
    // 0x20ab68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20ab6c: 0xae0202e8  sw          $v0, 0x2E8($s0)
    ctx->pc = 0x20ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 2));
    // 0x20ab70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20ab70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20ab74:
    // 0x20ab74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20ab74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20ab78: 0x3e00008  jr          $ra
    ctx->pc = 0x20AB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB78u;
        // 0x20ab7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AB80u;
}
