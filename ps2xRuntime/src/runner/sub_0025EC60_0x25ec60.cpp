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

// Function: sub_0025EC60
// Address: 0x25ec60 - 0x25ecc8
void sub_0025EC60_0x25ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EC60_0x25ec60");
#endif

    switch (ctx->pc) {
        case 0x25ec74u: goto label_25ec74;
        case 0x25ec84u: goto label_25ec84;
        case 0x25ec9cu: goto label_25ec9c;
        case 0x25eca8u: goto label_25eca8;
        case 0x25ecb8u: goto label_25ecb8;
        default: break;
    }

    ctx->pc = 0x25ec60u;

    // 0x25ec60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ec64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25ec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25ec68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ec68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ec6c: 0xc097abc  jal         func_25EAF0
    ctx->pc = 0x25EC6Cu;
    SET_GPR_U32(ctx, 31, 0x25EC74u);
    ctx->pc = 0x25EC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC6Cu;
    // 0x25ec70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EAF0u, 0x25EC6Cu, 0x25EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC74u;
label_25ec74:
    // 0x25ec74: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x25ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x25ec78: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x25ec78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25ec7c: 0xc07ba50  jal         func_1EE940
    ctx->pc = 0x25EC7Cu;
    SET_GPR_U32(ctx, 31, 0x25EC84u);
    ctx->pc = 0x25EC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC7Cu;
    // 0x25ec80: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE940u, 0x25EC7Cu, 0x25EC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC84u;
label_25ec84:
    // 0x25ec84: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x25ec84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25ec88: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25ec88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25ec8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EC8Cu;
    {
        const bool branch_taken_0x25ec8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ec8c) {
            ctx->pc = 0x25ECA0u;
            goto label_25eca0;
        }
    }
    ctx->pc = 0x25EC94u;
    // 0x25ec94: 0xc07bc24  jal         func_1EF090
    ctx->pc = 0x25EC94u;
    SET_GPR_U32(ctx, 31, 0x25EC9Cu);
    ctx->pc = 0x25EC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC94u;
    // 0x25ec98: 0x8e0400d0  lw          $a0, 0xD0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF090u, 0x25EC94u, 0x25EC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC9Cu;
label_25ec9c:
    // 0x25ec9c: 0x0  nop
    ctx->pc = 0x25ec9cu;
    // NOP
label_25eca0:
    // 0x25eca0: 0xc07bc10  jal         func_1EF040
    ctx->pc = 0x25ECA0u;
    SET_GPR_U32(ctx, 31, 0x25ECA8u);
    ctx->pc = 0x25ECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ECA0u;
    // 0x25eca4: 0x8e0400d0  lw          $a0, 0xD0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF040u, 0x25ECA0u, 0x25ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECA8u;
label_25eca8:
    // 0x25eca8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25ECA8u;
    {
        const bool branch_taken_0x25eca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECA8u;
        // 0x25ecac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eca8) {
            ctx->pc = 0x25ECB8u;
            goto label_25ecb8;
        }
    }
    ctx->pc = 0x25ECB0u;
    // 0x25ecb0: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x25ECB0u;
    SET_GPR_U32(ctx, 31, 0x25ECB8u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x25ECB0u, 0x25ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECB8u;
label_25ecb8:
    // 0x25ecb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25ecb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ecbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ecbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ecc0: 0x3e00008  jr          $ra
    ctx->pc = 0x25ECC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECC0u;
        // 0x25ecc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ECC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25ECC8u;
}
