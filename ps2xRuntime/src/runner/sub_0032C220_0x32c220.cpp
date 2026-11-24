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

// Function: sub_0032C220
// Address: 0x32c220 - 0x32c5c4
void sub_0032C220_0x32c220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C220_0x32c220");
#endif

    switch (ctx->pc) {
        case 0x32c264u: goto label_32c264;
        case 0x32c278u: goto label_32c278;
        case 0x32c284u: goto label_32c284;
        case 0x32c334u: goto label_32c334;
        case 0x32c344u: goto label_32c344;
        case 0x32c354u: goto label_32c354;
        case 0x32c364u: goto label_32c364;
        case 0x32c370u: goto label_32c370;
        case 0x32c378u: goto label_32c378;
        case 0x32c398u: goto label_32c398;
        case 0x32c3ccu: goto label_32c3cc;
        case 0x32c3f0u: goto label_32c3f0;
        case 0x32c3f8u: goto label_32c3f8;
        case 0x32c400u: goto label_32c400;
        case 0x32c410u: goto label_32c410;
        case 0x32c418u: goto label_32c418;
        case 0x32c578u: goto label_32c578;
        case 0x32c5b0u: goto label_32c5b0;
        default: break;
    }

    ctx->pc = 0x32c220u;

    // 0x32c220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32c220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32c224: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32c224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c228: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32c228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32c22c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32c22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32c230: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32c234: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32c234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c238: 0x80840001  lb          $a0, 0x1($a0)
    ctx->pc = 0x32c238u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x32c23c: 0x10830054  beq         $a0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x32C23Cu;
    {
        const bool branch_taken_0x32c23c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32c23c) {
            ctx->pc = 0x32C390u;
            goto label_32c390;
        }
    }
    ctx->pc = 0x32C244u;
    // 0x32c244: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32C244u;
    {
        const bool branch_taken_0x32c244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c244) {
            ctx->pc = 0x32C258u;
            goto label_32c258;
        }
    }
    ctx->pc = 0x32C24Cu;
    // 0x32c24c: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x32C24Cu;
    {
        const bool branch_taken_0x32c24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c24c) {
            ctx->pc = 0x32C5B0u;
            goto label_32c5b0;
        }
    }
    ctx->pc = 0x32C254u;
    // 0x32c254: 0x0  nop
    ctx->pc = 0x32c254u;
    // NOP
label_32c258:
    // 0x32c258: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32c258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32c25c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x32C25Cu;
    SET_GPR_U32(ctx, 31, 0x32C264u);
    ctx->pc = 0x32C260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C25Cu;
    // 0x32c260: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x32C25Cu, 0x32C264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C264u;
label_32c264:
    // 0x32c264: 0x144000d2  bnez        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x32C264u;
    {
        const bool branch_taken_0x32c264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C264u;
        // 0x32c268: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c264) {
            ctx->pc = 0x32C5B0u;
            goto label_32c5b0;
        }
    }
    ctx->pc = 0x32C26Cu;
    // 0x32c26c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32c26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c270: 0xc04c668  jal         func_1319A0
    ctx->pc = 0x32C270u;
    SET_GPR_U32(ctx, 31, 0x32C278u);
    ctx->pc = 0x32C274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C270u;
    // 0x32c274: 0x24845ab0  addiu       $a0, $a0, 0x5AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1319A0u, 0x32C270u, 0x32C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C278u;
label_32c278:
    // 0x32c278: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x32c278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x32c27c: 0xc052260  jal         func_148980
    ctx->pc = 0x32C27Cu;
    SET_GPR_U32(ctx, 31, 0x32C284u);
    ctx->pc = 0x32C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C27Cu;
    // 0x32c280: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148980u, 0x32C27Cu, 0x32C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C284u;
label_32c284:
    // 0x32c284: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c288: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x32c288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x32c28c: 0x8c2acec4  lw          $t2, -0x313C($at)
    ctx->pc = 0x32c28cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32c290: 0x3c0b0ff0  lui         $t3, 0xFF0
    ctx->pc = 0x32c290u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4080 << 16));
    // 0x32c294: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x32c294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x32c298: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x32c298u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x32c29c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32c29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32c2a0: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x32c2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x32c2a4: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x32c2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x32c2a8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x32c2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x32c2ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c2b0: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x32c2b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x32c2b4: 0x8c29cec0  lw          $t1, -0x3140($at)
    ctx->pc = 0x32c2b4u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x32c2b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c2bc: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x32c2bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x32c2c0: 0x8c28ceb8  lw          $t0, -0x3148($at)
    ctx->pc = 0x32c2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x32c2c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c2c8: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x32c2c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x32c2cc: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x32c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x32c2d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c2d4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x32c2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x32c2d8: 0xac2acec4  sw          $t2, -0x313C($at)
    ctx->pc = 0x32c2d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x32c2dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c2e0: 0xac29cec0  sw          $t1, -0x3140($at)
    ctx->pc = 0x32c2e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x32c2e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c2e8: 0xac27ceb8  sw          $a3, -0x3148($at)
    ctx->pc = 0x32c2e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x32c2ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c2f0: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x32c2f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x32c2f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c2f8: 0x8c27cebc  lw          $a3, -0x3144($at)
    ctx->pc = 0x32c2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x32c2fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c300: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x32c300u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x32c304: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x32c304u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x32c308: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c30c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32c30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32c310: 0xac27cebc  sw          $a3, -0x3144($at)
    ctx->pc = 0x32c310u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 7));
    // 0x32c314: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c318: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x32c318u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x32c31c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c320: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x32c320u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x32c324: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32c324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x32c328: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c32c: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x32C32Cu;
    SET_GPR_U32(ctx, 31, 0x32C334u);
    ctx->pc = 0x32C330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C32Cu;
    // 0x32c330: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x32C32Cu, 0x32C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C334u;
label_32c334:
    // 0x32c334: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x32c334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x32c338: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x32c338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x32c33c: 0xc04ca14  jal         func_132850
    ctx->pc = 0x32C33Cu;
    SET_GPR_U32(ctx, 31, 0x32C344u);
    ctx->pc = 0x32C340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C33Cu;
    // 0x32c340: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x32C33Cu, 0x32C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C344u;
label_32c344:
    // 0x32c344: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x32c344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x32c348: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x32c348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32c34c: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x32C34Cu;
    SET_GPR_U32(ctx, 31, 0x32C354u);
    ctx->pc = 0x32C350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C34Cu;
    // 0x32c350: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x32C34Cu, 0x32C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C354u;
label_32c354:
    // 0x32c354: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x32c354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x32c358: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x32c358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32c35c: 0xc04ca14  jal         func_132850
    ctx->pc = 0x32C35Cu;
    SET_GPR_U32(ctx, 31, 0x32C364u);
    ctx->pc = 0x32C360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C35Cu;
    // 0x32c360: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x32C35Cu, 0x32C364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C364u;
label_32c364:
    // 0x32c364: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x32c364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x32c368: 0xc054d98  jal         func_153660
    ctx->pc = 0x32C368u;
    SET_GPR_U32(ctx, 31, 0x32C370u);
    ctx->pc = 0x32C36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C368u;
    // 0x32c36c: 0x3c0501b2  lui         $a1, 0x1B2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153660u, 0x32C368u, 0x32C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C370u;
label_32c370:
    // 0x32c370: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x32C370u;
    SET_GPR_U32(ctx, 31, 0x32C378u);
    ctx->pc = 0x32C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C370u;
    // 0x32c374: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x32C370u, 0x32C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C378u;
label_32c378:
    // 0x32c378: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32c378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c37c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x32c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x32c380: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x32c380u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x32c384: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x32C384u;
    {
        const bool branch_taken_0x32c384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C384u;
        // 0x32c388: 0xa2000006  sb          $zero, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c384) {
            ctx->pc = 0x32C5B0u;
            goto label_32c5b0;
        }
    }
    ctx->pc = 0x32C38Cu;
    // 0x32c38c: 0x0  nop
    ctx->pc = 0x32c38cu;
    // NOP
label_32c390:
    // 0x32c390: 0xc05551c  jal         func_155470
    ctx->pc = 0x32C390u;
    SET_GPR_U32(ctx, 31, 0x32C398u);
    ctx->pc = 0x32C394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C390u;
    // 0x32c394: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x32C390u, 0x32C398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C398u;
label_32c398:
    // 0x32c398: 0x14400085  bnez        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x32C398u;
    {
        const bool branch_taken_0x32c398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c398) {
            ctx->pc = 0x32C5B0u;
            goto label_32c5b0;
        }
    }
    ctx->pc = 0x32C3A0u;
    // 0x32c3a0: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x32c3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x32c3a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c3a8: 0x9031fc8d  lbu         $s1, -0x373($at)
    ctx->pc = 0x32c3a8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x32c3ac: 0x2a210009  slti        $at, $s1, 0x9
    ctx->pc = 0x32c3acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x32c3b0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C3B0u;
    {
        const bool branch_taken_0x32c3b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c3b0) {
            ctx->pc = 0x32C3C0u;
            goto label_32c3c0;
        }
    }
    ctx->pc = 0x32C3B8u;
    // 0x32c3b8: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x32c3b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32c3bc: 0x0  nop
    ctx->pc = 0x32c3bcu;
    // NOP
label_32c3c0:
    // 0x32c3c0: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x32c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x32c3c4: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x32C3C4u;
    SET_GPR_U32(ctx, 31, 0x32C3CCu);
    ctx->pc = 0x32C3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C3C4u;
    // 0x32c3c8: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x32C3C4u, 0x32C3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C3CCu;
label_32c3cc:
    // 0x32c3cc: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x32c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x32c3d0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x32c3d4: 0x24429910  addiu       $v0, $v0, -0x66F0
    ctx->pc = 0x32c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940944));
    // 0x32c3d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32c3dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32c3e0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x32c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x32c3e4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x32c3e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32c3e8: 0xc052ec4  jal         func_14BB10
    ctx->pc = 0x32C3E8u;
    SET_GPR_U32(ctx, 31, 0x32C3F0u);
    ctx->pc = 0x32C3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C3E8u;
    // 0x32c3ec: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB10u, 0x32C3E8u, 0x32C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C3F0u;
label_32c3f0:
    // 0x32c3f0: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x32C3F0u;
    SET_GPR_U32(ctx, 31, 0x32C3F8u);
    ctx->pc = 0x32C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C3F0u;
    // 0x32c3f4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x32C3F0u, 0x32C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C3F8u;
label_32c3f8:
    // 0x32c3f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32C3F8u;
    {
        const bool branch_taken_0x32c3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c3f8) {
            ctx->pc = 0x32C420u;
            goto label_32c420;
        }
    }
    ctx->pc = 0x32C400u;
label_32c400:
    // 0x32c400: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x32c400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x32c404: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x32c404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x32c408: 0xc04c918  jal         func_132460
    ctx->pc = 0x32C408u;
    SET_GPR_U32(ctx, 31, 0x32C410u);
    ctx->pc = 0x32C40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C408u;
    // 0x32c40c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x32C408u, 0x32C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C410u;
label_32c410:
    // 0x32c410: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x32C410u;
    SET_GPR_U32(ctx, 31, 0x32C418u);
    ctx->pc = 0x32C414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C410u;
    // 0x32c414: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x32C410u, 0x32C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C418u;
label_32c418:
    // 0x32c418: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x32C418u;
    {
        const bool branch_taken_0x32c418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c418) {
            ctx->pc = 0x32C400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c400;
        }
    }
    ctx->pc = 0x32C420u;
label_32c420:
    // 0x32c420: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c424: 0x8c28ceb8  lw          $t0, -0x3148($at)
    ctx->pc = 0x32c424u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x32c428: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x32c428u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x32c42c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x32c42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x32c430: 0x260400a6  addiu       $a0, $s0, 0xA6
    ctx->pc = 0x32c430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 166));
    // 0x32c434: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c438: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x32c438u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x32c43c: 0x8c26cebc  lw          $a2, -0x3144($at)
    ctx->pc = 0x32c43cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x32c440: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c444: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x32c444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x32c448: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x32c448u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32c44c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c450: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x32c450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x32c454: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x32c454u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x32c458: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c45c: 0xac27ceb8  sw          $a3, -0x3148($at)
    ctx->pc = 0x32c45cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x32c460: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c464: 0xac25cebc  sw          $a1, -0x3144($at)
    ctx->pc = 0x32c464u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x32c468: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c46c: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x32c46cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x32c470: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c474: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x32c474u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32c478: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c47c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c480: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x32c480u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x32c484: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x32c484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x32c488: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c48c: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x32c48cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x32c490: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c494: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x32c494u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x32c498: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c49c: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x32c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32c4a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c4a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c4a8: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x32c4a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x32c4ac: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x32c4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x32c4b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c4b4: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x32c4b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x32c4b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c4bc: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x32c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x32c4c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c4c4: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x32c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32c4c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c4cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c4d0: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x32c4d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x32c4d4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x32c4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x32c4d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c4dc: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x32c4dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x32c4e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c4e4: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x32c4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x32c4e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c4ec: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x32c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32c4f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c4f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c4f8: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x32c4f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x32c4fc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x32c4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x32c500: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c504: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x32c504u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x32c508: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c50c: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x32c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x32c510: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c514: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x32c514u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32c518: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c51c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c520: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x32c520u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x32c524: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x32c524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x32c528: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c52c: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x32c52cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x32c530: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c534: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x32c534u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x32c538: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c53c: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x32c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32c540: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c544: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c548: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x32c548u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x32c54c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x32c54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x32c550: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c554: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x32c554u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x32c558: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c55c: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x32c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x32c560: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c564: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x32c564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32c568: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32c568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c56c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c570: 0xc0957bc  jal         func_255EF0
    ctx->pc = 0x32C570u;
    SET_GPR_U32(ctx, 31, 0x32C578u);
    ctx->pc = 0x32C574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C570u;
    // 0x32c574: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EF0u, 0x32C570u, 0x32C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C578u;
label_32c578:
    // 0x32c578: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x32c578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x32c57c: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x32c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x32c580: 0xa60200a6  sh          $v0, 0xA6($s0)
    ctx->pc = 0x32c580u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 166), (uint16_t)GPR_U32(ctx, 2));
    // 0x32c584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c588: 0xa60300a8  sh          $v1, 0xA8($s0)
    ctx->pc = 0x32c588u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 3));
    // 0x32c58c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c590: 0xa20200aa  sb          $v0, 0xAA($s0)
    ctx->pc = 0x32c590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 170), (uint8_t)GPR_U32(ctx, 2));
    // 0x32c594: 0x240301d0  addiu       $v1, $zero, 0x1D0
    ctx->pc = 0x32c594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x32c598: 0xa20000ad  sb          $zero, 0xAD($s0)
    ctx->pc = 0x32c598u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 173), (uint8_t)GPR_U32(ctx, 0));
    // 0x32c59c: 0x24020186  addiu       $v0, $zero, 0x186
    ctx->pc = 0x32c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
    // 0x32c5a0: 0xa20000af  sb          $zero, 0xAF($s0)
    ctx->pc = 0x32c5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 175), (uint8_t)GPR_U32(ctx, 0));
    // 0x32c5a4: 0xa60300b2  sh          $v1, 0xB2($s0)
    ctx->pc = 0x32c5a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 178), (uint16_t)GPR_U32(ctx, 3));
    // 0x32c5a8: 0xc0cb18c  jal         func_32C630
    ctx->pc = 0x32C5A8u;
    SET_GPR_U32(ctx, 31, 0x32C5B0u);
    ctx->pc = 0x32C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C5A8u;
    // 0x32c5ac: 0xa60200b4  sh          $v0, 0xB4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 180), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C630u, 0x32C5A8u, 0x32C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5B0u;
label_32c5b0:
    // 0x32c5b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32c5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c5b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32c5b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c5b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c5b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x32C5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C5BCu;
        // 0x32c5c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C5C4u;
}
