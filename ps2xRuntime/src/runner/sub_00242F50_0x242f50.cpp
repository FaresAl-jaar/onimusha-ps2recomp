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

// Function: sub_00242F50
// Address: 0x242f50 - 0x2431a0
void sub_00242F50_0x242f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242F50_0x242f50");
#endif

    switch (ctx->pc) {
        case 0x242f50u: goto label_242f50;
        case 0x242f54u: goto label_242f54;
        case 0x242f58u: goto label_242f58;
        case 0x242f5cu: goto label_242f5c;
        case 0x242f60u: goto label_242f60;
        case 0x242f64u: goto label_242f64;
        case 0x242f68u: goto label_242f68;
        case 0x242f6cu: goto label_242f6c;
        case 0x242f70u: goto label_242f70;
        case 0x242f74u: goto label_242f74;
        case 0x242f78u: goto label_242f78;
        case 0x242f7cu: goto label_242f7c;
        case 0x242f80u: goto label_242f80;
        case 0x242f84u: goto label_242f84;
        case 0x242f88u: goto label_242f88;
        case 0x242f8cu: goto label_242f8c;
        case 0x242f90u: goto label_242f90;
        case 0x242f94u: goto label_242f94;
        case 0x242f98u: goto label_242f98;
        case 0x242f9cu: goto label_242f9c;
        case 0x242fa0u: goto label_242fa0;
        case 0x242fa4u: goto label_242fa4;
        case 0x242fa8u: goto label_242fa8;
        case 0x242facu: goto label_242fac;
        case 0x242fb0u: goto label_242fb0;
        case 0x242fb4u: goto label_242fb4;
        case 0x242fb8u: goto label_242fb8;
        case 0x242fbcu: goto label_242fbc;
        case 0x242fc0u: goto label_242fc0;
        case 0x242fc4u: goto label_242fc4;
        case 0x242fc8u: goto label_242fc8;
        case 0x242fccu: goto label_242fcc;
        case 0x242fd0u: goto label_242fd0;
        case 0x242fd4u: goto label_242fd4;
        case 0x242fd8u: goto label_242fd8;
        case 0x242fdcu: goto label_242fdc;
        case 0x242fe0u: goto label_242fe0;
        case 0x242fe4u: goto label_242fe4;
        case 0x242fe8u: goto label_242fe8;
        case 0x242fecu: goto label_242fec;
        case 0x242ff0u: goto label_242ff0;
        case 0x242ff4u: goto label_242ff4;
        case 0x242ff8u: goto label_242ff8;
        case 0x242ffcu: goto label_242ffc;
        case 0x243000u: goto label_243000;
        case 0x243004u: goto label_243004;
        case 0x243008u: goto label_243008;
        case 0x24300cu: goto label_24300c;
        case 0x243010u: goto label_243010;
        case 0x243014u: goto label_243014;
        case 0x243018u: goto label_243018;
        case 0x24301cu: goto label_24301c;
        case 0x243020u: goto label_243020;
        case 0x243024u: goto label_243024;
        case 0x243028u: goto label_243028;
        case 0x24302cu: goto label_24302c;
        case 0x243030u: goto label_243030;
        case 0x243034u: goto label_243034;
        case 0x243038u: goto label_243038;
        case 0x24303cu: goto label_24303c;
        case 0x243040u: goto label_243040;
        case 0x243044u: goto label_243044;
        case 0x243048u: goto label_243048;
        case 0x24304cu: goto label_24304c;
        case 0x243050u: goto label_243050;
        case 0x243054u: goto label_243054;
        case 0x243058u: goto label_243058;
        case 0x24305cu: goto label_24305c;
        case 0x243060u: goto label_243060;
        case 0x243064u: goto label_243064;
        case 0x243068u: goto label_243068;
        case 0x24306cu: goto label_24306c;
        case 0x243070u: goto label_243070;
        case 0x243074u: goto label_243074;
        case 0x243078u: goto label_243078;
        case 0x24307cu: goto label_24307c;
        case 0x243080u: goto label_243080;
        case 0x243084u: goto label_243084;
        case 0x243088u: goto label_243088;
        case 0x24308cu: goto label_24308c;
        case 0x243090u: goto label_243090;
        case 0x243094u: goto label_243094;
        case 0x243098u: goto label_243098;
        case 0x24309cu: goto label_24309c;
        case 0x2430a0u: goto label_2430a0;
        case 0x2430a4u: goto label_2430a4;
        case 0x2430a8u: goto label_2430a8;
        case 0x2430acu: goto label_2430ac;
        case 0x2430b0u: goto label_2430b0;
        case 0x2430b4u: goto label_2430b4;
        case 0x2430b8u: goto label_2430b8;
        case 0x2430bcu: goto label_2430bc;
        case 0x2430c0u: goto label_2430c0;
        case 0x2430c4u: goto label_2430c4;
        case 0x2430c8u: goto label_2430c8;
        case 0x2430ccu: goto label_2430cc;
        case 0x2430d0u: goto label_2430d0;
        case 0x2430d4u: goto label_2430d4;
        case 0x2430d8u: goto label_2430d8;
        case 0x2430dcu: goto label_2430dc;
        case 0x2430e0u: goto label_2430e0;
        case 0x2430e4u: goto label_2430e4;
        case 0x2430e8u: goto label_2430e8;
        case 0x2430ecu: goto label_2430ec;
        case 0x2430f0u: goto label_2430f0;
        case 0x2430f4u: goto label_2430f4;
        case 0x2430f8u: goto label_2430f8;
        case 0x2430fcu: goto label_2430fc;
        case 0x243100u: goto label_243100;
        case 0x243104u: goto label_243104;
        case 0x243108u: goto label_243108;
        case 0x24310cu: goto label_24310c;
        case 0x243110u: goto label_243110;
        case 0x243114u: goto label_243114;
        case 0x243118u: goto label_243118;
        case 0x24311cu: goto label_24311c;
        case 0x243120u: goto label_243120;
        case 0x243124u: goto label_243124;
        case 0x243128u: goto label_243128;
        case 0x24312cu: goto label_24312c;
        case 0x243130u: goto label_243130;
        case 0x243134u: goto label_243134;
        case 0x243138u: goto label_243138;
        case 0x24313cu: goto label_24313c;
        case 0x243140u: goto label_243140;
        case 0x243144u: goto label_243144;
        case 0x243148u: goto label_243148;
        case 0x24314cu: goto label_24314c;
        case 0x243150u: goto label_243150;
        case 0x243154u: goto label_243154;
        case 0x243158u: goto label_243158;
        case 0x24315cu: goto label_24315c;
        case 0x243160u: goto label_243160;
        case 0x243164u: goto label_243164;
        case 0x243168u: goto label_243168;
        case 0x24316cu: goto label_24316c;
        case 0x243170u: goto label_243170;
        case 0x243174u: goto label_243174;
        case 0x243178u: goto label_243178;
        case 0x24317cu: goto label_24317c;
        case 0x243180u: goto label_243180;
        case 0x243184u: goto label_243184;
        case 0x243188u: goto label_243188;
        case 0x24318cu: goto label_24318c;
        case 0x243190u: goto label_243190;
        case 0x243194u: goto label_243194;
        case 0x243198u: goto label_243198;
        case 0x24319cu: goto label_24319c;
        default: break;
    }

    ctx->pc = 0x242f50u;

label_242f50:
    // 0x242f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x242f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_242f54:
    // 0x242f54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242f58:
    // 0x242f58: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x242f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_242f5c:
    // 0x242f5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242f60:
    // 0x242f60: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x242f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_242f64:
    // 0x242f64: 0x26140014  addiu       $s4, $s0, 0x14
    ctx->pc = 0x242f64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_242f68:
    // 0x242f68: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x242f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_242f6c:
    // 0x242f6c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x242f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_242f70:
    // 0x242f70: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x242f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_242f74:
    // 0x242f74: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x242f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_242f78:
    // 0x242f78: 0x8211000b  lb          $s1, 0xB($s0)
    ctx->pc = 0x242f78u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
label_242f7c:
    // 0x242f7c: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x242f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_242f80:
    // 0x242f80: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_242f84:
    if (ctx->pc == 0x242F84u) {
        ctx->pc = 0x242F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F80u;
        // 0x242f84: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F88u;
        goto label_242f88;
    }
    ctx->pc = 0x242F80u;
    {
        const bool branch_taken_0x242f80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x242F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F80u;
        // 0x242f84: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f80) {
            ctx->pc = 0x242FB0u;
            goto label_242fb0;
        }
    }
    ctx->pc = 0x242F88u;
label_242f88:
    // 0x242f88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x242f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_242f8c:
    // 0x242f8c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x242f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_242f90:
    // 0x242f90: 0x40f809  jalr        $v0
label_242f94:
    if (ctx->pc == 0x242F94u) {
        ctx->pc = 0x242F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F90u;
        // 0x242f94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F98u;
        goto label_242f98;
    }
    ctx->pc = 0x242F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x242F98u);
        ctx->pc = 0x242F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F90u;
        // 0x242f94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242F90u, 0x242F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242F98u;
label_242f98:
    // 0x242f98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_242f9c:
    if (ctx->pc == 0x242F9Cu) {
        ctx->pc = 0x242FA0u;
        goto label_242fa0;
    }
    ctx->pc = 0x242F98u;
    {
        const bool branch_taken_0x242f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242f98) {
            ctx->pc = 0x242FB0u;
            goto label_242fb0;
        }
    }
    ctx->pc = 0x242FA0u;
label_242fa0:
    // 0x242fa0: 0xc08fb02  jal         func_23EC08
label_242fa4:
    if (ctx->pc == 0x242FA4u) {
        ctx->pc = 0x242FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FA0u;
        // 0x242fa4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242FA8u;
        goto label_242fa8;
    }
    ctx->pc = 0x242FA0u;
    SET_GPR_U32(ctx, 31, 0x242FA8u);
    ctx->pc = 0x242FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242FA0u;
    // 0x242fa4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC08u, 0x242FA0u, 0x242FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242FA8u;
label_242fa8:
    // 0x242fa8: 0x50510021  beql        $v0, $s1, . + 4 + (0x21 << 2)
label_242fac:
    if (ctx->pc == 0x242FACu) {
        ctx->pc = 0x242FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FA8u;
        // 0x242fac: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242FB0u;
        goto label_242fb0;
    }
    ctx->pc = 0x242FA8u;
    {
        const bool branch_taken_0x242fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x242fa8) {
            ctx->pc = 0x242FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242FA8u;
            // 0x242fac: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243030u;
            goto label_243030;
        }
    }
    ctx->pc = 0x242FB0u;
label_242fb0:
    // 0x242fb0: 0xc090ca8  jal         func_2432A0
label_242fb4:
    if (ctx->pc == 0x242FB4u) {
        ctx->pc = 0x242FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FB0u;
        // 0x242fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242FB8u;
        goto label_242fb8;
    }
    ctx->pc = 0x242FB0u;
    SET_GPR_U32(ctx, 31, 0x242FB8u);
    ctx->pc = 0x242FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242FB0u;
    // 0x242fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2432A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2432A0u, 0x242FB0u, 0x242FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242FB8u;
label_242fb8:
    // 0x242fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242fbc:
    // 0x242fbc: 0xc090ca2  jal         func_243288
label_242fc0:
    if (ctx->pc == 0x242FC0u) {
        ctx->pc = 0x242FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FBCu;
        // 0x242fc0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242FC4u;
        goto label_242fc4;
    }
    ctx->pc = 0x242FBCu;
    SET_GPR_U32(ctx, 31, 0x242FC4u);
    ctx->pc = 0x242FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242FBCu;
    // 0x242fc0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243288u, 0x242FBCu, 0x242FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242FC4u;
label_242fc4:
    // 0x242fc4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x242fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_242fc8:
    // 0x242fc8: 0x24450007  addiu       $a1, $v0, 0x7
    ctx->pc = 0x242fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_242fcc:
    // 0x242fcc: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x242fccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_242fd0:
    // 0x242fd0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x242fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_242fd4:
    // 0x242fd4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x242fd4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_242fd8:
    // 0x242fd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242fdc:
    // 0x242fdc: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x242fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_242fe0:
    // 0x242fe0: 0x60f809  jalr        $v1
label_242fe4:
    if (ctx->pc == 0x242FE4u) {
        ctx->pc = 0x242FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FE0u;
        // 0x242fe4: 0x288c3  sra         $s1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242FE8u;
        goto label_242fe8;
    }
    ctx->pc = 0x242FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x242FE8u);
        ctx->pc = 0x242FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FE0u;
        // 0x242fe4: 0x288c3  sra         $s1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242FE0u, 0x242FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242FE8u;
label_242fe8:
    // 0x242fe8: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
label_242fec:
    if (ctx->pc == 0x242FECu) {
        ctx->pc = 0x242FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FE8u;
        // 0x242fec: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242FF0u;
        goto label_242ff0;
    }
    ctx->pc = 0x242FE8u;
    {
        const bool branch_taken_0x242fe8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x242fe8) {
            ctx->pc = 0x242FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242FE8u;
            // 0x242fec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x242FF0u;
            goto label_242ff0;
        }
    }
    ctx->pc = 0x242FF0u;
label_242ff0:
    // 0x242ff0: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x242ff0u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_242ff4:
    // 0x242ff4: 0x1012  mflo        $v0
    ctx->pc = 0x242ff4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_242ff8:
    // 0x242ff8: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x242ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_242ffc:
    // 0x242ffc: 0x54400061  bnel        $v0, $zero, . + 4 + (0x61 << 2)
label_243000:
    if (ctx->pc == 0x243000u) {
        ctx->pc = 0x243000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FFCu;
        // 0x243000: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243004u;
        goto label_243004;
    }
    ctx->pc = 0x242FFCu;
    {
        const bool branch_taken_0x242ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242ffc) {
            ctx->pc = 0x243000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242FFCu;
            // 0x243000: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243184u;
            goto label_243184;
        }
    }
    ctx->pc = 0x243004u;
label_243004:
    // 0x243004: 0xc08fd7c  jal         func_23F5F0
label_243008:
    if (ctx->pc == 0x243008u) {
        ctx->pc = 0x243008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243004u;
        // 0x243008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24300Cu;
        goto label_24300c;
    }
    ctx->pc = 0x243004u;
    SET_GPR_U32(ctx, 31, 0x24300Cu);
    ctx->pc = 0x243008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243004u;
    // 0x243008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F5F0u, 0x243004u, 0x24300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24300Cu;
label_24300c:
    // 0x24300c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_243010:
    if (ctx->pc == 0x243010u) {
        ctx->pc = 0x243010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24300Cu;
        // 0x243010: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243014u;
        goto label_243014;
    }
    ctx->pc = 0x24300Cu;
    {
        const bool branch_taken_0x24300c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24300c) {
            ctx->pc = 0x243010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24300Cu;
            // 0x243010: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24304Cu;
            goto label_24304c;
        }
    }
    ctx->pc = 0x243014u;
label_243014:
    // 0x243014: 0xc08fd44  jal         func_23F510
label_243018:
    if (ctx->pc == 0x243018u) {
        ctx->pc = 0x243018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243014u;
        // 0x243018: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24301Cu;
        goto label_24301c;
    }
    ctx->pc = 0x243014u;
    SET_GPR_U32(ctx, 31, 0x24301Cu);
    ctx->pc = 0x243018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243014u;
    // 0x243018: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F510u, 0x243014u, 0x24301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24301Cu;
label_24301c:
    // 0x24301c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24301cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243020:
    // 0x243020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243024:
    // 0x243024: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_243028:
    if (ctx->pc == 0x243028u) {
        ctx->pc = 0x243028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243024u;
        // 0x243028: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24302Cu;
        goto label_24302c;
    }
    ctx->pc = 0x243024u;
    {
        const bool branch_taken_0x243024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x243028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243024u;
        // 0x243028: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243024) {
            ctx->pc = 0x243040u;
            goto label_243040;
        }
    }
    ctx->pc = 0x24302Cu;
label_24302c:
    // 0x24302c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x24302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_243030:
    // 0x243030: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x243030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_243034:
    // 0x243034: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x243034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
label_243038:
    // 0x243038: 0x10000051  b           . + 4 + (0x51 << 2)
label_24303c:
    if (ctx->pc == 0x24303Cu) {
        ctx->pc = 0x24303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243038u;
        // 0x24303c: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243040u;
        goto label_243040;
    }
    ctx->pc = 0x243038u;
    {
        const bool branch_taken_0x243038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243038u;
        // 0x24303c: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243038) {
            ctx->pc = 0x243180u;
            goto label_243180;
        }
    }
    ctx->pc = 0x243040u;
label_243040:
    // 0x243040: 0x50620050  beql        $v1, $v0, . + 4 + (0x50 << 2)
label_243044:
    if (ctx->pc == 0x243044u) {
        ctx->pc = 0x243044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243040u;
        // 0x243044: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243048u;
        goto label_243048;
    }
    ctx->pc = 0x243040u;
    {
        const bool branch_taken_0x243040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x243040) {
            ctx->pc = 0x243044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243040u;
            // 0x243044: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243184u;
            goto label_243184;
        }
    }
    ctx->pc = 0x243048u;
label_243048:
    // 0x243048: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x243048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_24304c:
    // 0x24304c: 0x2510018  mult        $zero, $s2, $s1
    ctx->pc = 0x24304cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_243050:
    // 0x243050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x243050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243054:
    // 0x243054: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x243054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_243058:
    // 0x243058: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x243058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_24305c:
    // 0x24305c: 0x3012  mflo        $a2
    ctx->pc = 0x24305cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_243060:
    // 0x243060: 0x60f809  jalr        $v1
label_243064:
    if (ctx->pc == 0x243064u) {
        ctx->pc = 0x243064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243060u;
        // 0x243064: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243068u;
        goto label_243068;
    }
    ctx->pc = 0x243060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x243068u);
        ctx->pc = 0x243064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243060u;
        // 0x243064: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243060u, 0x243068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243068u;
label_243068:
    // 0x243068: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x243068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_24306c:
    // 0x24306c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x24306cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_243070:
    // 0x243070: 0x10520009  beq         $v0, $s2, . + 4 + (0x9 << 2)
label_243074:
    if (ctx->pc == 0x243074u) {
        ctx->pc = 0x243074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243070u;
        // 0x243074: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243078u;
        goto label_243078;
    }
    ctx->pc = 0x243070u;
    {
        const bool branch_taken_0x243070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x243074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243070u;
        // 0x243074: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243070) {
            ctx->pc = 0x243098u;
            goto label_243098;
        }
    }
    ctx->pc = 0x243078u;
label_243078:
    // 0x243078: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x243078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_24307c:
    // 0x24307c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24307cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243080:
    // 0x243080: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x243080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_243084:
    // 0x243084: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x243084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_243088:
    // 0x243088: 0x40f809  jalr        $v0
label_24308c:
    if (ctx->pc == 0x24308Cu) {
        ctx->pc = 0x24308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243088u;
        // 0x24308c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243090u;
        goto label_243090;
    }
    ctx->pc = 0x243088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243090u);
        ctx->pc = 0x24308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243088u;
        // 0x24308c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243088u, 0x243090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243090u;
label_243090:
    // 0x243090: 0x1000003c  b           . + 4 + (0x3C << 2)
label_243094:
    if (ctx->pc == 0x243094u) {
        ctx->pc = 0x243094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243090u;
        // 0x243094: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243098u;
        goto label_243098;
    }
    ctx->pc = 0x243090u;
    {
        const bool branch_taken_0x243090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243090u;
        // 0x243094: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243090) {
            ctx->pc = 0x243184u;
            goto label_243184;
        }
    }
    ctx->pc = 0x243098u;
label_243098:
    // 0x243098: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x243098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24309c:
    // 0x24309c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24309cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2430a0:
    // 0x2430a0: 0xc08fd80  jal         func_23F600
label_2430a4:
    if (ctx->pc == 0x2430A4u) {
        ctx->pc = 0x2430A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430A0u;
        // 0x2430a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2430A8u;
        goto label_2430a8;
    }
    ctx->pc = 0x2430A0u;
    SET_GPR_U32(ctx, 31, 0x2430A8u);
    ctx->pc = 0x2430A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2430A0u;
    // 0x2430a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F600u, 0x2430A0u, 0x2430A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2430A8u;
label_2430a8:
    // 0x2430a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2430a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2430ac:
    // 0x2430ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2430acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2430b0:
    // 0x2430b0: 0x2510018  mult        $zero, $s2, $s1
    ctx->pc = 0x2430b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2430b4:
    // 0x2430b4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2430b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2430b8:
    // 0x2430b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2430b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2430bc:
    // 0x2430bc: 0x2812  mflo        $a1
    ctx->pc = 0x2430bcu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_2430c0:
    // 0x2430c0: 0xc094854  jal         func_252150
label_2430c4:
    if (ctx->pc == 0x2430C4u) {
        ctx->pc = 0x2430C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430C0u;
        // 0x2430c4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2430C8u;
        goto label_2430c8;
    }
    ctx->pc = 0x2430C0u;
    SET_GPR_U32(ctx, 31, 0x2430C8u);
    ctx->pc = 0x2430C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2430C0u;
    // 0x2430c4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x2430C0u, 0x2430C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2430C8u;
label_2430c8:
    // 0x2430c8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2430c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2430cc:
    // 0x2430cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2430d0:
    if (ctx->pc == 0x2430D0u) {
        ctx->pc = 0x2430D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430CCu;
        // 0x2430d0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2430D4u;
        goto label_2430d4;
    }
    ctx->pc = 0x2430CCu;
    {
        const bool branch_taken_0x2430cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2430D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430CCu;
        // 0x2430d0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430cc) {
            ctx->pc = 0x2430E4u;
            goto label_2430e4;
        }
    }
    ctx->pc = 0x2430D4u;
label_2430d4:
    // 0x2430d4: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x2430d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_2430d8:
    // 0x2430d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2430d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2430dc:
    // 0x2430dc: 0x40f809  jalr        $v0
label_2430e0:
    if (ctx->pc == 0x2430E0u) {
        ctx->pc = 0x2430E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430DCu;
        // 0x2430e0: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2430E4u;
        goto label_2430e4;
    }
    ctx->pc = 0x2430DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2430E4u);
        ctx->pc = 0x2430E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430DCu;
        // 0x2430e0: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2430DCu, 0x2430E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2430E4u;
label_2430e4:
    // 0x2430e4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2430e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2430e8:
    // 0x2430e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2430e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2430ec:
    // 0x2430ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2430ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2430f0:
    // 0x2430f0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2430f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2430f4:
    // 0x2430f4: 0x40f809  jalr        $v0
label_2430f8:
    if (ctx->pc == 0x2430F8u) {
        ctx->pc = 0x2430F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430F4u;
        // 0x2430f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2430FCu;
        goto label_2430fc;
    }
    ctx->pc = 0x2430F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2430FCu);
        ctx->pc = 0x2430F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430F4u;
        // 0x2430f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2430F4u, 0x2430FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2430FCu;
label_2430fc:
    // 0x2430fc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2430fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_243100:
    // 0x243100: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x243100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243104:
    // 0x243104: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x243104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_243108:
    // 0x243108: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x243108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_24310c:
    // 0x24310c: 0x60f809  jalr        $v1
label_243110:
    if (ctx->pc == 0x243110u) {
        ctx->pc = 0x243110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24310Cu;
        // 0x243110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243114u;
        goto label_243114;
    }
    ctx->pc = 0x24310Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x243114u);
        ctx->pc = 0x243110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24310Cu;
        // 0x243110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24310Cu, 0x243114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243114u;
label_243114:
    // 0x243114: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x243114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_243118:
    // 0x243118: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x243118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24311c:
    // 0x24311c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24311cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_243120:
    // 0x243120: 0xc08fb00  jal         func_23EC00
label_243124:
    if (ctx->pc == 0x243124u) {
        ctx->pc = 0x243124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243120u;
        // 0x243124: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243128u;
        goto label_243128;
    }
    ctx->pc = 0x243120u;
    SET_GPR_U32(ctx, 31, 0x243128u);
    ctx->pc = 0x243124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243120u;
    // 0x243124: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC00u, 0x243120u, 0x243128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243128u;
label_243128:
    // 0x243128: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x243128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_24312c:
    // 0x24312c: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x24312cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_243130:
    // 0x243130: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x243130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
label_243134:
    // 0x243134: 0x8e060034  lw          $a2, 0x34($s0)
    ctx->pc = 0x243134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_243138:
    // 0x243138: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x243138u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_24313c:
    // 0x24313c: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x24313cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_243140:
    // 0x243140: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x243140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_243144:
    // 0x243144: 0xd21021  addu        $v0, $a2, $s2
    ctx->pc = 0x243144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_243148:
    // 0x243148: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x243148u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_24314c:
    // 0x24314c: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x24314cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_243150:
    // 0x243150: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x243150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
label_243154:
    // 0x243154: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x243154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
label_243158:
    // 0x243158: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
label_24315c:
    if (ctx->pc == 0x24315Cu) {
        ctx->pc = 0x24315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243158u;
        // 0x24315c: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243160u;
        goto label_243160;
    }
    ctx->pc = 0x243158u;
    {
        const bool branch_taken_0x243158 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x24315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243158u;
        // 0x24315c: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243158) {
            ctx->pc = 0x243180u;
            goto label_243180;
        }
    }
    ctx->pc = 0x243160u;
label_243160:
    // 0x243160: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x243160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_243164:
    // 0x243164: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_243168:
    if (ctx->pc == 0x243168u) {
        ctx->pc = 0x243168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243164u;
        // 0x243168: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24316Cu;
        goto label_24316c;
    }
    ctx->pc = 0x243164u;
    {
        const bool branch_taken_0x243164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243164) {
            ctx->pc = 0x243168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243164u;
            // 0x243168: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243184u;
            goto label_243184;
        }
    }
    ctx->pc = 0x24316Cu;
label_24316c:
    // 0x24316c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x24316cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_243170:
    // 0x243170: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_243174:
    if (ctx->pc == 0x243174u) {
        ctx->pc = 0x243174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243170u;
        // 0x243174: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243178u;
        goto label_243178;
    }
    ctx->pc = 0x243170u;
    {
        const bool branch_taken_0x243170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243170) {
            ctx->pc = 0x243174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243170u;
            // 0x243174: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243184u;
            goto label_243184;
        }
    }
    ctx->pc = 0x243178u;
label_243178:
    // 0x243178: 0x40f809  jalr        $v0
label_24317c:
    if (ctx->pc == 0x24317Cu) {
        ctx->pc = 0x24317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243178u;
        // 0x24317c: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243180u;
        goto label_243180;
    }
    ctx->pc = 0x243178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243180u);
        ctx->pc = 0x24317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243178u;
        // 0x24317c: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243178u, 0x243180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243180u;
label_243180:
    // 0x243180: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x243180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_243184:
    // 0x243184: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x243184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_243188:
    // 0x243188: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x243188u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24318c:
    // 0x24318c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x24318cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_243190:
    // 0x243190: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x243190u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_243194:
    // 0x243194: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x243194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_243198:
    // 0x243198: 0x3e00008  jr          $ra
label_24319c:
    if (ctx->pc == 0x24319Cu) {
        ctx->pc = 0x24319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243198u;
        // 0x24319c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2431A0u;
        goto label_fallthrough_0x243198;
    }
    ctx->pc = 0x243198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243198u;
        // 0x24319c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x243198:
    ctx->pc = 0x2431A0u;
}
