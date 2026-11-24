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

// Function: sub_00229190
// Address: 0x229190 - 0x229284
void sub_00229190_0x229190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229190_0x229190");
#endif

    switch (ctx->pc) {
        case 0x2291b0u: goto label_2291b0;
        case 0x2291c0u: goto label_2291c0;
        case 0x2291dcu: goto label_2291dc;
        case 0x2291f8u: goto label_2291f8;
        case 0x229208u: goto label_229208;
        case 0x229240u: goto label_229240;
        case 0x229254u: goto label_229254;
        default: break;
    }

    ctx->pc = 0x229190u;

    // 0x229190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x229190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x229194: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x229194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x229198: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x229198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22919c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22919cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2291a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2291a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2291a4: 0x8e1100c0  lw          $s1, 0xC0($s0)
    ctx->pc = 0x2291a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2291a8: 0xc08a368  jal         func_228DA0
    ctx->pc = 0x2291A8u;
    SET_GPR_U32(ctx, 31, 0x2291B0u);
    ctx->pc = 0x2291ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291A8u;
    // 0x2291ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228DA0u, 0x2291A8u, 0x2291B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291B0u;
label_2291b0:
    // 0x2291b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2291B0u;
    {
        const bool branch_taken_0x2291b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2291B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291B0u;
        // 0x2291b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291b0) {
            ctx->pc = 0x2291C0u;
            goto label_2291c0;
        }
    }
    ctx->pc = 0x2291B8u;
    // 0x2291b8: 0xc08a172  jal         func_2285C8
    ctx->pc = 0x2291B8u;
    SET_GPR_U32(ctx, 31, 0x2291C0u);
    ctx->pc = 0x2291BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291B8u;
    // 0x2291bc: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285C8u, 0x2291B8u, 0x2291C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291C0u;
label_2291c0:
    // 0x2291c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2291c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2291c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2291c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2291c8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2291C8u;
    {
        const bool branch_taken_0x2291c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2291c8) {
            ctx->pc = 0x2291CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2291C8u;
            // 0x2291cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2291E8u;
            goto label_2291e8;
        }
    }
    ctx->pc = 0x2291D0u;
    // 0x2291d0: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2291d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x2291d4: 0xc08a15c  jal         func_228570
    ctx->pc = 0x2291D4u;
    SET_GPR_U32(ctx, 31, 0x2291DCu);
    ctx->pc = 0x2291D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291D4u;
    // 0x2291d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228570u, 0x2291D4u, 0x2291DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291DCu;
label_2291dc:
    // 0x2291dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2291dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2291e0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2291E0u;
    {
        const bool branch_taken_0x2291e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2291E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291E0u;
        // 0x2291e4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291e0) {
            ctx->pc = 0x229270u;
            goto label_229270;
        }
    }
    ctx->pc = 0x2291E8u;
label_2291e8:
    // 0x2291e8: 0x54620022  bnel        $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2291E8u;
    {
        const bool branch_taken_0x2291e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2291e8) {
            ctx->pc = 0x2291ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2291E8u;
            // 0x2291ec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229274u;
            goto label_229274;
        }
    }
    ctx->pc = 0x2291F0u;
    // 0x2291f0: 0xc08a19a  jal         func_228668
    ctx->pc = 0x2291F0u;
    SET_GPR_U32(ctx, 31, 0x2291F8u);
    ctx->pc = 0x2291F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291F0u;
    // 0x2291f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228668u, 0x2291F0u, 0x2291F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291F8u;
label_2291f8:
    // 0x2291f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2291f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2291fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2291fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229200: 0xc08a374  jal         func_228DD0
    ctx->pc = 0x229200u;
    SET_GPR_U32(ctx, 31, 0x229208u);
    ctx->pc = 0x229204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229200u;
    // 0x229204: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228DD0u, 0x229200u, 0x229208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229208u;
label_229208:
    // 0x229208: 0x8e060088  lw          $a2, 0x88($s0)
    ctx->pc = 0x229208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x22920c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x22920cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x229210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x229210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229214: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x229214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229218: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x229218u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x22921c: 0x24450003  addiu       $a1, $v0, 0x3
    ctx->pc = 0x22921cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x229220: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x229220u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x229224: 0xae070094  sw          $a3, 0x94($s0)
    ctx->pc = 0x229224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 7));
    // 0x229228: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x229228u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x22922c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x22922cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x229230: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x229230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x229234: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x229234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x229238: 0xc08a368  jal         func_228DA0
    ctx->pc = 0x229238u;
    SET_GPR_U32(ctx, 31, 0x229240u);
    ctx->pc = 0x22923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229238u;
    // 0x22923c: 0xae060088  sw          $a2, 0x88($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228DA0u, 0x229238u, 0x229240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229240u;
label_229240:
    // 0x229240: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x229240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x229244: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x229244u;
    {
        const bool branch_taken_0x229244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x229248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229244u;
        // 0x229248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229244) {
            ctx->pc = 0x229270u;
            goto label_229270;
        }
    }
    ctx->pc = 0x22924Cu;
    // 0x22924c: 0xc08a172  jal         func_2285C8
    ctx->pc = 0x22924Cu;
    SET_GPR_U32(ctx, 31, 0x229254u);
    ctx->pc = 0x2285C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285C8u, 0x22924Cu, 0x229254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229254u;
label_229254:
    // 0x229254: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x229254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x229258: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x229258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22925c: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x22925cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x229260: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x229260u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x229264: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x229264u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x229268: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x229268u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x22926c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x22926cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_229270:
    // 0x229270: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x229270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_229274:
    // 0x229274: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x229274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x229278: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x229278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22927c: 0x3e00008  jr          $ra
    ctx->pc = 0x22927Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22927Cu;
        // 0x229280: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22927Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229284u;
}
