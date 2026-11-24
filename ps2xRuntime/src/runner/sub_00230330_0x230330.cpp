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

// Function: sub_00230330
// Address: 0x230330 - 0x2303b0
void sub_00230330_0x230330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230330_0x230330");
#endif

    switch (ctx->pc) {
        case 0x23036cu: goto label_23036c;
        case 0x230374u: goto label_230374;
        case 0x230388u: goto label_230388;
        default: break;
    }

    ctx->pc = 0x230330u;

    // 0x230330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230334: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x230334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23033c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23033cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230340: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x230344: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x230344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x230348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23034c: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x23034cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x230350: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x230350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x230354: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x230354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
    // 0x230358: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x230358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x23035c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23035cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x230360: 0xae110040  sw          $s1, 0x40($s0)
    ctx->pc = 0x230360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 17));
    // 0x230364: 0xc08dd1c  jal         func_237470
    ctx->pc = 0x230364u;
    SET_GPR_U32(ctx, 31, 0x23036Cu);
    ctx->pc = 0x230368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230364u;
    // 0x230368: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237470u, 0x230364u, 0x23036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23036Cu;
label_23036c:
    // 0x23036c: 0xc08dd84  jal         func_237610
    ctx->pc = 0x23036Cu;
    SET_GPR_U32(ctx, 31, 0x230374u);
    ctx->pc = 0x230370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23036Cu;
    // 0x230370: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237610u, 0x23036Cu, 0x230374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230374u;
label_230374:
    // 0x230374: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x230374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x230378: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x230378u;
    {
        const bool branch_taken_0x230378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230378u;
        // 0x23037c: 0x1122c0  sll         $a0, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230378) {
            ctx->pc = 0x230390u;
            goto label_230390;
        }
    }
    ctx->pc = 0x230380u;
    // 0x230380: 0xc08dd62  jal         func_237588
    ctx->pc = 0x230380u;
    SET_GPR_U32(ctx, 31, 0x230388u);
    ctx->pc = 0x230384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230380u;
    // 0x230384: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237588u, 0x230380u, 0x230388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230388u;
label_230388:
    // 0x230388: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x230388u;
    {
        const bool branch_taken_0x230388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230388u;
        // 0x23038c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230388) {
            ctx->pc = 0x23039Cu;
            goto label_23039c;
        }
    }
    ctx->pc = 0x230390u;
label_230390:
    // 0x230390: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x230390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x230394: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x230394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230398: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x230398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_23039c:
    // 0x23039c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23039cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2303a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2303a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2303a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2303a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2303a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2303A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2303ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303A8u;
        // 0x2303ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2303A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2303B0u;
}
