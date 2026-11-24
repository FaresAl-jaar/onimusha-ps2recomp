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

// Function: sub_00291670
// Address: 0x291670 - 0x2916f0
void sub_00291670_0x291670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291670_0x291670");
#endif

    switch (ctx->pc) {
        case 0x2916c8u: goto label_2916c8;
        default: break;
    }

    ctx->pc = 0x291670u;

    // 0x291670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x291674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x291674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x291678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29167c: 0x94832acc  lhu         $v1, 0x2ACC($a0)
    ctx->pc = 0x29167cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10956)));
    // 0x291680: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x291680u;
    {
        const bool branch_taken_0x291680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x291684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291680u;
        // 0x291684: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291680) {
            ctx->pc = 0x2916E0u;
            goto label_2916e0;
        }
    }
    ctx->pc = 0x291688u;
    // 0x291688: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x291688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29168c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x29168cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x291690: 0x24640100  addiu       $a0, $v1, 0x100
    ctx->pc = 0x291690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x291694: 0x3086001f  andi        $a2, $a0, 0x1F
    ctx->pc = 0x291694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x291698: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x291698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x29169c: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x29169cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2916a0: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x2916a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x2916a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2916a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2916a8: 0xc52806  srlv        $a1, $a1, $a2
    ctx->pc = 0x2916a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x2916ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2916acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2916b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2916b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2916b4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2916b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2916b8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2916B8u;
    {
        const bool branch_taken_0x2916b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2916BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916B8u;
        // 0x2916bc: 0x27848560  addiu       $a0, $gp, -0x7AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916b8) {
            ctx->pc = 0x2916E0u;
            goto label_2916e0;
        }
    }
    ctx->pc = 0x2916C0u;
    // 0x2916c0: 0xc053b28  jal         func_14ECA0
    ctx->pc = 0x2916C0u;
    SET_GPR_U32(ctx, 31, 0x2916C8u);
    ctx->pc = 0x2916C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2916C0u;
    // 0x2916c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECA0u, 0x2916C0u, 0x2916C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2916C8u;
label_2916c8:
    // 0x2916c8: 0x96040030  lhu         $a0, 0x30($s0)
    ctx->pc = 0x2916c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2916cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2916ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2916d0: 0x3084fffd  andi        $a0, $a0, 0xFFFD
    ctx->pc = 0x2916d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65533);
    // 0x2916d4: 0xa6040030  sh          $a0, 0x30($s0)
    ctx->pc = 0x2916d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x2916d8: 0xa203011c  sb          $v1, 0x11C($s0)
    ctx->pc = 0x2916d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x2916dc: 0x0  nop
    ctx->pc = 0x2916dcu;
    // NOP
label_2916e0:
    // 0x2916e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2916e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2916e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2916e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2916e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2916E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2916ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916E8u;
        // 0x2916ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2916E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2916F0u;
}
