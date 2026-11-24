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

// Function: sub_00230198
// Address: 0x230198 - 0x230248
void sub_00230198_0x230198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230198_0x230198");
#endif

    switch (ctx->pc) {
        case 0x2301c0u: goto label_2301c0;
        case 0x2301e8u: goto label_2301e8;
        case 0x2301f0u: goto label_2301f0;
        case 0x230204u: goto label_230204;
        case 0x230218u: goto label_230218;
        case 0x230224u: goto label_230224;
        default: break;
    }

    ctx->pc = 0x230198u;

    // 0x230198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x230198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23019c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x23019cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2301a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2301a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2301a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2301a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2301a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2301a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2301ac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2301ACu;
    {
        const bool branch_taken_0x2301ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2301B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301ACu;
        // 0x2301b0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301ac) {
            ctx->pc = 0x2301C8u;
            goto label_2301c8;
        }
    }
    ctx->pc = 0x2301B4u;
    // 0x2301b4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2301b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2301b8: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x2301B8u;
    SET_GPR_U32(ctx, 31, 0x2301C0u);
    ctx->pc = 0x2301BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2301B8u;
    // 0x2301bc: 0x2484a5d0  addiu       $a0, $a0, -0x5A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x2301B8u, 0x2301C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2301C0u;
label_2301c0:
    // 0x2301c0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2301C0u;
    {
        const bool branch_taken_0x2301c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2301C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301C0u;
        // 0x2301c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301c0) {
            ctx->pc = 0x230238u;
            goto label_230238;
        }
    }
    ctx->pc = 0x2301C8u;
label_2301c8:
    // 0x2301c8: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x2301c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x2301cc: 0x3c08000f  lui         $t0, 0xF
    ctx->pc = 0x2301ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15 << 16));
    // 0x2301d0: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2301d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x2301d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2301d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2301d8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2301d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2301dc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2301dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2301e0: 0xc08dd1c  jal         func_237470
    ctx->pc = 0x2301E0u;
    SET_GPR_U32(ctx, 31, 0x2301E8u);
    ctx->pc = 0x2301E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2301E0u;
    // 0x2301e4: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237470u, 0x2301E0u, 0x2301E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2301E8u;
label_2301e8:
    // 0x2301e8: 0xc08dd84  jal         func_237610
    ctx->pc = 0x2301E8u;
    SET_GPR_U32(ctx, 31, 0x2301F0u);
    ctx->pc = 0x2301ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2301E8u;
    // 0x2301ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237610u, 0x2301E8u, 0x2301F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2301F0u;
label_2301f0:
    // 0x2301f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2301f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2301f4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2301F4u;
    {
        const bool branch_taken_0x2301f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2301f4) {
            ctx->pc = 0x230210u;
            goto label_230210;
        }
    }
    ctx->pc = 0x2301FCu;
    // 0x2301fc: 0xc08dd62  jal         func_237588
    ctx->pc = 0x2301FCu;
    SET_GPR_U32(ctx, 31, 0x230204u);
    ctx->pc = 0x230200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2301FCu;
    // 0x230200: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237588u, 0x2301FCu, 0x230204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230204u;
label_230204:
    // 0x230204: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x230204u;
    {
        const bool branch_taken_0x230204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230204u;
        // 0x230208: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230204) {
            ctx->pc = 0x230238u;
            goto label_230238;
        }
    }
    ctx->pc = 0x23020Cu;
    // 0x23020c: 0x0  nop
    ctx->pc = 0x23020cu;
    // NOP
label_230210:
    // 0x230210: 0xc08e0f8  jal         func_2383E0
    ctx->pc = 0x230210u;
    SET_GPR_U32(ctx, 31, 0x230218u);
    ctx->pc = 0x230214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230210u;
    // 0x230214: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2383E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2383E0u, 0x230210u, 0x230218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230218u;
label_230218:
    // 0x230218: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x230218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23021c: 0xc08e118  jal         func_238460
    ctx->pc = 0x23021Cu;
    SET_GPR_U32(ctx, 31, 0x230224u);
    ctx->pc = 0x230220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23021Cu;
    // 0x230220: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238460u, 0x23021Cu, 0x230224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230224u;
label_230224:
    // 0x230224: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x230224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x230228: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x230228u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23022c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23022cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230230: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x230230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x230234: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x230234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_230238:
    // 0x230238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23023c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23023cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230240: 0x3e00008  jr          $ra
    ctx->pc = 0x230240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230240u;
        // 0x230244: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230248u;
}
