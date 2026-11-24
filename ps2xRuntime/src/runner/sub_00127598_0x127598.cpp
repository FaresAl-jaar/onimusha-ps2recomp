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

// Function: sub_00127598
// Address: 0x127598 - 0x127618
void sub_00127598_0x127598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127598_0x127598");
#endif

    switch (ctx->pc) {
        case 0x1275d8u: goto label_1275d8;
        case 0x1275f8u: goto label_1275f8;
        default: break;
    }

    ctx->pc = 0x127598u;

    // 0x127598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x127598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12759c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12759cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1275a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1275a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1275a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1275a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1275a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1275a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1275acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1275b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1275b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1275b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275b8: 0x948f000c  lhu         $t7, 0xC($a0)
    ctx->pc = 0x1275b8u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1275bc: 0x31ef0100  andi        $t7, $t7, 0x100
    ctx->pc = 0x1275bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)256);
    // 0x1275c0: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1275C0u;
    {
        const bool branch_taken_0x1275c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1275C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275C0u;
        // 0x1275c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1275c0) {
            ctx->pc = 0x1275D8u;
            goto label_1275d8;
        }
    }
    ctx->pc = 0x1275C8u;
    // 0x1275c8: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x1275c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1275cc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1275ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1275d0: 0xc0491ee  jal         func_1247B8
    ctx->pc = 0x1275D0u;
    SET_GPR_U32(ctx, 31, 0x1275D8u);
    ctx->pc = 0x1275D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1275D0u;
    // 0x1275d4: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1247B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1247B8u, 0x1275D0u, 0x1275D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1275D8u;
label_1275d8:
    // 0x1275d8: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x1275d8u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1275dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1275dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275e0: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x1275e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1275e4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1275e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275e8: 0x31efefff  andi        $t7, $t7, 0xEFFF
    ctx->pc = 0x1275e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)61439);
    // 0x1275ec: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1275ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1275f0: 0xc04b03c  jal         func_12C0F0
    ctx->pc = 0x1275F0u;
    SET_GPR_U32(ctx, 31, 0x1275F8u);
    ctx->pc = 0x1275F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1275F0u;
    // 0x1275f4: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F0u, 0x1275F0u, 0x1275F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1275F8u;
label_1275f8:
    // 0x1275f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1275f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1275fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1275fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127600: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127604: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x127604u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x127608: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x127608u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12760c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12760cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127610: 0x3e00008  jr          $ra
    ctx->pc = 0x127610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127610u;
        // 0x127614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127618u;
}
