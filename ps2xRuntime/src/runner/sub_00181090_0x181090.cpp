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

// Function: sub_00181090
// Address: 0x181090 - 0x181100
void sub_00181090_0x181090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181090_0x181090");
#endif

    switch (ctx->pc) {
        case 0x1810a4u: goto label_1810a4;
        case 0x1810b0u: goto label_1810b0;
        default: break;
    }

    ctx->pc = 0x181090u;

    // 0x181090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18109c: 0xc0600c0  jal         func_180300
    ctx->pc = 0x18109Cu;
    SET_GPR_U32(ctx, 31, 0x1810A4u);
    ctx->pc = 0x1810A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18109Cu;
    // 0x1810a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180300u, 0x18109Cu, 0x1810A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1810A4u;
label_1810a4:
    // 0x1810a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1810a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1810a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1810a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1810ac: 0x0  nop
    ctx->pc = 0x1810acu;
    // NOP
label_1810b0:
    // 0x1810b0: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x1810b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x1810b4: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x1810b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x1810b8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1810b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1810bc: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x1810bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x1810c0: 0x2ca30040  sltiu       $v1, $a1, 0x40
    ctx->pc = 0x1810c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1810c4: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x1810c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x1810c8: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x1810c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x1810cc: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x1810ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x1810d0: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x1810d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x1810d4: 0xac8000ec  sw          $zero, 0xEC($a0)
    ctx->pc = 0x1810d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
    // 0x1810d8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1810D8u;
    {
        const bool branch_taken_0x1810d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1810DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810D8u;
        // 0x1810dc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1810d8) {
            ctx->pc = 0x1810B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1810b0;
        }
    }
    ctx->pc = 0x1810E0u;
    // 0x1810e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1810e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1810e4: 0xae0301d0  sw          $v1, 0x1D0($s0)
    ctx->pc = 0x1810e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 3));
    // 0x1810e8: 0xae0301d4  sw          $v1, 0x1D4($s0)
    ctx->pc = 0x1810e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
    // 0x1810ec: 0xa20001d8  sb          $zero, 0x1D8($s0)
    ctx->pc = 0x1810ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 472), (uint8_t)GPR_U32(ctx, 0));
    // 0x1810f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1810f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1810f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1810f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1810f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1810F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1810FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810F8u;
        // 0x1810fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1810F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181100u;
}
