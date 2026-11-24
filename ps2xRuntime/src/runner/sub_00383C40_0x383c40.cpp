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

// Function: sub_00383C40
// Address: 0x383c40 - 0x383ce8
void sub_00383C40_0x383c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383C40_0x383c40");
#endif

    switch (ctx->pc) {
        case 0x383c80u: goto label_383c80;
        case 0x383cb4u: goto label_383cb4;
        default: break;
    }

    ctx->pc = 0x383c40u;

    // 0x383c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x383c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x383c44: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x383c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x383c48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x383c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x383c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x383c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x383c50: 0xa0201950  sb          $zero, 0x1950($at)
    ctx->pc = 0x383c50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x921950u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x921950u, _value); } while (0);
    // 0x383c54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x383c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383c58: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x383c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x383c5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x383c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383c60: 0xa0201b50  sb          $zero, 0x1B50($at)
    ctx->pc = 0x383c60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x921B50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x921B50u, _value); } while (0);
    // 0x383c64: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x383c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x383c68: 0xa0201d50  sb          $zero, 0x1D50($at)
    ctx->pc = 0x383c68u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x921D50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x921D50u, _value); } while (0);
    // 0x383c6c: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x383c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x383c70: 0xa0201f50  sb          $zero, 0x1F50($at)
    ctx->pc = 0x383c70u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x921F50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x921F50u, _value); } while (0);
    // 0x383c74: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x383c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x383c78: 0xc0d25d0  jal         func_349740
    ctx->pc = 0x383C78u;
    SET_GPR_U32(ctx, 31, 0x383C80u);
    ctx->pc = 0x383C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383C78u;
    // 0x383c7c: 0xa0202150  sb          $zero, 0x2150($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 8528), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349740u, 0x383C78u, 0x383C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383C80u;
label_383c80:
    // 0x383c80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x383c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x383c84: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x383c84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x383c88: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x383C88u;
    {
        const bool branch_taken_0x383c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x383C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C88u;
        // 0x383c8c: 0x21a40  sll         $v1, $v0, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c88) {
            ctx->pc = 0x383CA8u;
            goto label_383ca8;
        }
    }
    ctx->pc = 0x383C90u;
    // 0x383c90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x383c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x383c94: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x383c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x383c98: 0x24421950  addiu       $v0, $v0, 0x1950
    ctx->pc = 0x383c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6480));
    // 0x383c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x383c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x383ca0: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x383ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x383ca4: 0x0  nop
    ctx->pc = 0x383ca4u;
    // NOP
label_383ca8:
    // 0x383ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x383ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383cac: 0xc0d25d0  jal         func_349740
    ctx->pc = 0x383CACu;
    SET_GPR_U32(ctx, 31, 0x383CB4u);
    ctx->pc = 0x383CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383CACu;
    // 0x383cb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349740u, 0x383CACu, 0x383CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383CB4u;
label_383cb4:
    // 0x383cb4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x383cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x383cb8: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x383cb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x383cbc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x383CBCu;
    {
        const bool branch_taken_0x383cbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x383CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CBCu;
        // 0x383cc0: 0x32240  sll         $a0, $v1, 9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383cbc) {
            ctx->pc = 0x383CD8u;
            goto label_383cd8;
        }
    }
    ctx->pc = 0x383CC4u;
    // 0x383cc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x383cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x383cc8: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x383cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x383ccc: 0x24631950  addiu       $v1, $v1, 0x1950
    ctx->pc = 0x383cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6480));
    // 0x383cd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x383cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x383cd4: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x383cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_383cd8:
    // 0x383cd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x383cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383cdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x383cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x383CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CE0u;
        // 0x383ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383CE8u;
}
