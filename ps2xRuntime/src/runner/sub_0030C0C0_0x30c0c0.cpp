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

// Function: sub_0030C0C0
// Address: 0x30c0c0 - 0x30c168
void sub_0030C0C0_0x30c0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C0C0_0x30c0c0");
#endif

    switch (ctx->pc) {
        case 0x30c0f8u: goto label_30c0f8;
        default: break;
    }

    ctx->pc = 0x30c0c0u;

    // 0x30c0c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30c0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30c0c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30c0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30c0c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30c0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30c0cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30c0d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x30c0d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c0d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c0d8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x30c0d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c0dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30c0e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C0E0u;
    {
        const bool branch_taken_0x30c0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C0E0u;
        // 0x30c0e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c0e0) {
            ctx->pc = 0x30C0F0u;
            goto label_30c0f0;
        }
    }
    ctx->pc = 0x30C0E8u;
    // 0x30c0e8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x30C0E8u;
    {
        const bool branch_taken_0x30c0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C0E8u;
        // 0x30c0ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c0e8) {
            ctx->pc = 0x30C150u;
            goto label_30c150;
        }
    }
    ctx->pc = 0x30C0F0u;
label_30c0f0:
    // 0x30c0f0: 0xc0c3084  jal         func_30C210
    ctx->pc = 0x30C0F0u;
    SET_GPR_U32(ctx, 31, 0x30C0F8u);
    ctx->pc = 0x30C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C210u, 0x30C0F0u, 0x30C0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C0F8u;
label_30c0f8:
    // 0x30c0f8: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x30c0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c0fc: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x30c0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x30c100: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x30c100u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x30c104: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x30c104u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x30c108: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x30c108u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c10c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30c110: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x30c110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x30c114: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x30c114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x30c118: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30C118u;
    {
        const bool branch_taken_0x30c118 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C118u;
        // 0x30c11c: 0x9042003c  lbu         $v0, 0x3C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c118) {
            ctx->pc = 0x30C150u;
            goto label_30c150;
        }
    }
    ctx->pc = 0x30C120u;
    // 0x30c120: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x30c120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30c124: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x30c124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30c128: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30c128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30c12c: 0x286100fc  slti        $at, $v1, 0xFC
    ctx->pc = 0x30c12cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)252) ? 1 : 0);
    // 0x30c130: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30c130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30c134: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x30c134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x30c138: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x30c138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x30c13c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C13Cu;
    {
        const bool branch_taken_0x30c13c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C13Cu;
        // 0x30c140: 0x2484003c  addiu       $a0, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c13c) {
            ctx->pc = 0x30C150u;
            goto label_30c150;
        }
    }
    ctx->pc = 0x30C144u;
    // 0x30c144: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x30c144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x30c148: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x30c148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30c14c: 0x0  nop
    ctx->pc = 0x30c14cu;
    // NOP
label_30c150:
    // 0x30c150: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30c150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c154: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30c154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c158: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c15c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c15cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c160: 0x3e00008  jr          $ra
    ctx->pc = 0x30C160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C160u;
        // 0x30c164: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C168u;
}
