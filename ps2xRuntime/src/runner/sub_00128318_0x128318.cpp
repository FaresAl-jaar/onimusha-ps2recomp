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

// Function: sub_00128318
// Address: 0x128318 - 0x129140
void sub_00128318_0x128318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128318_0x128318");
#endif

    switch (ctx->pc) {
        case 0x128360u: goto label_128360;
        case 0x1283acu: goto label_1283ac;
        case 0x1283b0u: goto label_1283b0;
        case 0x1283d0u: goto label_1283d0;
        case 0x128400u: goto label_128400;
        case 0x128424u: goto label_128424;
        case 0x128480u: goto label_128480;
        case 0x128498u: goto label_128498;
        case 0x1284e4u: goto label_1284e4;
        case 0x128524u: goto label_128524;
        case 0x128550u: goto label_128550;
        case 0x12855cu: goto label_12855c;
        case 0x128590u: goto label_128590;
        case 0x1285b0u: goto label_1285b0;
        case 0x128630u: goto label_128630;
        case 0x12868cu: goto label_12868c;
        case 0x1286e8u: goto label_1286e8;
        case 0x128730u: goto label_128730;
        case 0x12875cu: goto label_12875c;
        case 0x128784u: goto label_128784;
        case 0x128794u: goto label_128794;
        case 0x128798u: goto label_128798;
        case 0x1287a0u: goto label_1287a0;
        case 0x1287d8u: goto label_1287d8;
        case 0x1287f4u: goto label_1287f4;
        case 0x1287f8u: goto label_1287f8;
        case 0x12880cu: goto label_12880c;
        case 0x128810u: goto label_128810;
        case 0x128818u: goto label_128818;
        case 0x128824u: goto label_128824;
        case 0x128830u: goto label_128830;
        case 0x12883cu: goto label_12883c;
        case 0x128848u: goto label_128848;
        case 0x128870u: goto label_128870;
        case 0x128888u: goto label_128888;
        case 0x1288e0u: goto label_1288e0;
        case 0x128920u: goto label_128920;
        case 0x128924u: goto label_128924;
        case 0x128938u: goto label_128938;
        case 0x128948u: goto label_128948;
        case 0x128954u: goto label_128954;
        case 0x128974u: goto label_128974;
        case 0x128988u: goto label_128988;
        case 0x128998u: goto label_128998;
        case 0x1289b4u: goto label_1289b4;
        case 0x128a28u: goto label_128a28;
        case 0x128a3cu: goto label_128a3c;
        case 0x128a4cu: goto label_128a4c;
        case 0x128a64u: goto label_128a64;
        case 0x128a7cu: goto label_128a7c;
        case 0x128a94u: goto label_128a94;
        case 0x128aacu: goto label_128aac;
        case 0x128ac0u: goto label_128ac0;
        case 0x128ad8u: goto label_128ad8;
        case 0x128b08u: goto label_128b08;
        case 0x128b18u: goto label_128b18;
        case 0x128b20u: goto label_128b20;
        case 0x128bacu: goto label_128bac;
        case 0x128bccu: goto label_128bcc;
        case 0x128bd8u: goto label_128bd8;
        case 0x128be8u: goto label_128be8;
        case 0x128bf0u: goto label_128bf0;
        case 0x128c14u: goto label_128c14;
        case 0x128c20u: goto label_128c20;
        case 0x128c50u: goto label_128c50;
        case 0x128c64u: goto label_128c64;
        case 0x128c80u: goto label_128c80;
        case 0x128cc8u: goto label_128cc8;
        case 0x128cd4u: goto label_128cd4;
        case 0x128ce0u: goto label_128ce0;
        case 0x128d30u: goto label_128d30;
        case 0x128d38u: goto label_128d38;
        case 0x128d44u: goto label_128d44;
        case 0x128d50u: goto label_128d50;
        case 0x128d5cu: goto label_128d5c;
        case 0x128d80u: goto label_128d80;
        case 0x128da8u: goto label_128da8;
        case 0x128db0u: goto label_128db0;
        case 0x128dbcu: goto label_128dbc;
        case 0x128decu: goto label_128dec;
        case 0x128dfcu: goto label_128dfc;
        case 0x128e04u: goto label_128e04;
        case 0x128e40u: goto label_128e40;
        case 0x128e54u: goto label_128e54;
        case 0x128e5cu: goto label_128e5c;
        case 0x128e64u: goto label_128e64;
        case 0x128e78u: goto label_128e78;
        case 0x128e84u: goto label_128e84;
        case 0x128e90u: goto label_128e90;
        case 0x128e9cu: goto label_128e9c;
        case 0x128edcu: goto label_128edc;
        case 0x128eecu: goto label_128eec;
        case 0x128ef8u: goto label_128ef8;
        case 0x128f0cu: goto label_128f0c;
        case 0x128f24u: goto label_128f24;
        case 0x128f3cu: goto label_128f3c;
        case 0x128f50u: goto label_128f50;
        case 0x128fb8u: goto label_128fb8;
        case 0x128ff0u: goto label_128ff0;
        case 0x129008u: goto label_129008;
        case 0x12904cu: goto label_12904c;
        case 0x12905cu: goto label_12905c;
        case 0x129070u: goto label_129070;
        case 0x12907cu: goto label_12907c;
        case 0x129088u: goto label_129088;
        case 0x1290a8u: goto label_1290a8;
        case 0x1290b4u: goto label_1290b4;
        case 0x1290c0u: goto label_1290c0;
        case 0x129100u: goto label_129100;
        case 0x129138u: goto label_129138;
        default: break;
    }

    ctx->pc = 0x128318u;

    // 0x128318: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x128318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12831c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12831cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128320: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x128320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x128324: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x128324u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128328: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x128328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x12832c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x12832cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x128330: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x128330u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128334: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x128334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x128338: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x128338u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12833c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x12833cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x128340: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x128340u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128344: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x128344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x128348: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x128348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x12834c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x12834cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x128350: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x128350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x128354: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x128354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x128358: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x128358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x12835c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x12835cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_128360:
    // 0x128360: 0x93cc0000  lbu         $t4, 0x0($fp)
    ctx->pc = 0x128360u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x128364: 0xc7600  sll         $t6, $t4, 24
    ctx->pc = 0x128364u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x128368: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x128368u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x12836c: 0x2dcf002e  sltiu       $t7, $t6, 0x2E
    ctx->pc = 0x12836cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x128370: 0x11e00023  beqz        $t7, . + 4 + (0x23 << 2)
    ctx->pc = 0x128370u;
    {
        const bool branch_taken_0x128370 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128370u;
        // 0x128374: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128370) {
            ctx->pc = 0x128400u;
            goto label_128400;
        }
    }
    ctx->pc = 0x128378u;
    // 0x128378: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x128378u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x12837c: 0x25ce3d70  addiu       $t6, $t6, 0x3D70
    ctx->pc = 0x12837cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 15728));
    // 0x128380: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x128380u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x128384: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x128384u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x128388: 0x1a00008  jr          $t5
    ctx->pc = 0x128388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x128390u: goto label_128390;
            case 0x128398u: goto label_128398;
            case 0x1283A8u: goto label_1283a8;
            case 0x128400u: goto label_128400;
            case 0x129138u: goto label_129138;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128388u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x128390u;
label_128390:
    // 0x128390: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x128390u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128394: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x128394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
label_128398:
    // 0x128398: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x128398u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12839c: 0x93cc0000  lbu         $t4, 0x0($fp)
    ctx->pc = 0x12839cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1283a0: 0x15800018  bnez        $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x1283A0u;
    {
        const bool branch_taken_0x1283a0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1283A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283A0u;
        // 0x1283a4: 0xc7600  sll         $t6, $t4, 24 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283a0) {
            ctx->pc = 0x128404u;
            goto label_128404;
        }
    }
    ctx->pc = 0x1283A8u;
label_1283a8:
    // 0x1283a8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1283a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1283ac:
    // 0x1283ac: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x1283acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1283b0:
    // 0x1283b0: 0x55800001  bnel        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1283B0u;
    {
        const bool branch_taken_0x1283b0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x1283b0) {
            ctx->pc = 0x1283B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1283B0u;
            // 0x1283b4: 0xad9e0000  sw          $fp, 0x0($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1283B8u;
            goto label_1283b8;
        }
    }
    ctx->pc = 0x1283B8u;
label_1283b8:
    // 0x1283b8: 0x8fad0010  lw          $t5, 0x10($sp)
    ctx->pc = 0x1283b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1283bc: 0x11a00004  beqz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1283BCu;
    {
        const bool branch_taken_0x1283bc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1283C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283BCu;
        // 0x1283c0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283bc) {
            ctx->pc = 0x1283D0u;
            goto label_1283d0;
        }
    }
    ctx->pc = 0x1283C4u;
    // 0x1283c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1283c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283c8: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x1283C8u;
    SET_GPR_U32(ctx, 31, 0x1283D0u);
    ctx->pc = 0x1283CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1283C8u;
    // 0x1283cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x1283C8u, 0x1283D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1283D0u;
label_1283d0:
    // 0x1283d0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1283d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1283d4: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1283d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1283d8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1283d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1283dc: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1283dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1283e0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1283e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1283e4: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x1283e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1283e8: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1283e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1283ec: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x1283ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1283f0: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1283f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1283f4: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1283f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1283f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1283F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1283FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283F8u;
        // 0x1283fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1283F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128400u;
label_128400:
    // 0x128400: 0xc7600  sll         $t6, $t4, 24
    ctx->pc = 0x128400u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_128404:
    // 0x128404: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x128404u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x128408: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x128408u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x12840c: 0x15cf000f  bne         $t6, $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x12840Cu;
    {
        const bool branch_taken_0x12840c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x128410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12840Cu;
        // 0x128410: 0xc2600  sll         $a0, $t4, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12840c) {
            ctx->pc = 0x12844Cu;
            goto label_12844c;
        }
    }
    ctx->pc = 0x128414u;
    // 0x128414: 0x3c0782d  daddu       $t7, $fp, $zero
    ctx->pc = 0x128414u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128418: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x128418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12841c: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x12841cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x128420: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x128420u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_128424:
    // 0x128424: 0x91ec0000  lbu         $t4, 0x0($t7)
    ctx->pc = 0x128424u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x128428: 0xc6e00  sll         $t5, $t4, 24
    ctx->pc = 0x128428u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x12842c: 0xd6e03  sra         $t5, $t5, 24
    ctx->pc = 0x12842cu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 24));
    // 0x128430: 0x0  nop
    ctx->pc = 0x128430u;
    // NOP
    // 0x128434: 0x0  nop
    ctx->pc = 0x128434u;
    // NOP
    // 0x128438: 0x51aefffa  beql        $t5, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x128438u;
    {
        const bool branch_taken_0x128438 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 14));
        if (branch_taken_0x128438) {
            ctx->pc = 0x12843Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128438u;
            // 0x12843c: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128424;
        }
    }
    ctx->pc = 0x128440u;
    // 0x128440: 0x11a0ffda  beqz        $t5, . + 4 + (-0x26 << 2)
    ctx->pc = 0x128440u;
    {
        const bool branch_taken_0x128440 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x128444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128440u;
        // 0x128444: 0x1e0f02d  daddu       $fp, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128440) {
            ctx->pc = 0x1283ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1283ac;
        }
    }
    ctx->pc = 0x128448u;
    // 0x128448: 0xc2600  sll         $a0, $t4, 24
    ctx->pc = 0x128448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_12844c:
    // 0x12844c: 0xafbe0020  sw          $fp, 0x20($sp)
    ctx->pc = 0x12844cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
    // 0x128450: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x128450u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x128454: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x128454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x128458: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x128458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12845c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x12845cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128460: 0x288f0030  slti        $t7, $a0, 0x30
    ctx->pc = 0x128460u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x128464: 0x15e00014  bnez        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x128464u;
    {
        const bool branch_taken_0x128464 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x128468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128464u;
        // 0x128468: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128464) {
            ctx->pc = 0x1284B8u;
            goto label_1284b8;
        }
    }
    ctx->pc = 0x12846Cu;
    // 0x12846c: 0x288f003a  slti        $t7, $a0, 0x3A
    ctx->pc = 0x12846cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x128470: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x128470u;
    {
        const bool branch_taken_0x128470 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128470u;
        // 0x128474: 0x240f002e  addiu       $t7, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128470) {
            ctx->pc = 0x1284BCu;
            goto label_1284bc;
        }
    }
    ctx->pc = 0x128478u;
    // 0x128478: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x128478u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12847c: 0x2a4f0009  slti        $t7, $s2, 0x9
    ctx->pc = 0x12847cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_128480:
    // 0x128480: 0x11e00325  beqz        $t7, . + 4 + (0x325 << 2)
    ctx->pc = 0x128480u;
    {
        const bool branch_taken_0x128480 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128480u;
        // 0x128484: 0x8fac0030  lw          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128480) {
            ctx->pc = 0x129118u;
            goto label_129118;
        }
    }
    ctx->pc = 0x128488u;
    // 0x128488: 0x18e7818  mult        $t7, $t4, $t6
    ctx->pc = 0x128488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x12848c: 0x1e47821  addu        $t7, $t7, $a0
    ctx->pc = 0x12848cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x128490: 0x25efffd0  addiu       $t7, $t7, -0x30
    ctx->pc = 0x128490u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967248));
    // 0x128494: 0xafaf0030  sw          $t7, 0x30($sp)
    ctx->pc = 0x128494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 15));
label_128498:
    // 0x128498: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x128498u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12849c: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x12849cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1284a0: 0x288f0030  slti        $t7, $a0, 0x30
    ctx->pc = 0x1284a0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1284a4: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1284A4u;
    {
        const bool branch_taken_0x1284a4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1284A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284A4u;
        // 0x1284a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284a4) {
            ctx->pc = 0x1284B8u;
            goto label_1284b8;
        }
    }
    ctx->pc = 0x1284ACu;
    // 0x1284ac: 0x288f003a  slti        $t7, $a0, 0x3A
    ctx->pc = 0x1284acu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x1284b0: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1284B0u;
    {
        const bool branch_taken_0x1284b0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1284B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284B0u;
        // 0x1284b4: 0x2a4f0009  slti        $t7, $s2, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284b0) {
            ctx->pc = 0x128480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128480;
        }
    }
    ctx->pc = 0x1284B8u;
label_1284b8:
    // 0x1284b8: 0x240f002e  addiu       $t7, $zero, 0x2E
    ctx->pc = 0x1284b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_1284bc:
    // 0x1284bc: 0x148f003b  bne         $a0, $t7, . + 4 + (0x3B << 2)
    ctx->pc = 0x1284BCu;
    {
        const bool branch_taken_0x1284bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x1284C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284BCu;
        // 0x1284c0: 0xafb2000c  sw          $s2, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284bc) {
            ctx->pc = 0x1285ACu;
            goto label_1285ac;
        }
    }
    ctx->pc = 0x1284C4u;
    // 0x1284c4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1284c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1284c8: 0x1640030d  bnez        $s2, . + 4 + (0x30D << 2)
    ctx->pc = 0x1284C8u;
    {
        const bool branch_taken_0x1284c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1284CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284C8u;
        // 0x1284cc: 0x83c40000  lb          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284c8) {
            ctx->pc = 0x129100u;
            goto label_129100;
        }
    }
    ctx->pc = 0x1284D0u;
    // 0x1284d0: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x1284d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1284d4: 0x148f000c  bne         $a0, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x1284D4u;
    {
        const bool branch_taken_0x1284d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x1284D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284D4u;
        // 0x1284d8: 0x248fffcf  addiu       $t7, $a0, -0x31 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284d4) {
            ctx->pc = 0x128508u;
            goto label_128508;
        }
    }
    ctx->pc = 0x1284DCu;
    // 0x1284dc: 0x3c0782d  daddu       $t7, $fp, $zero
    ctx->pc = 0x1284dcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284e0: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x1284e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1284e4:
    // 0x1284e4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1284e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1284e8: 0x81e40000  lb          $a0, 0x0($t7)
    ctx->pc = 0x1284e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1284ec: 0x0  nop
    ctx->pc = 0x1284ecu;
    // NOP
    // 0x1284f0: 0x0  nop
    ctx->pc = 0x1284f0u;
    // NOP
    // 0x1284f4: 0x0  nop
    ctx->pc = 0x1284f4u;
    // NOP
    // 0x1284f8: 0x108efffa  beq         $a0, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1284F8u;
    {
        const bool branch_taken_0x1284f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 14));
        ctx->pc = 0x1284FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284F8u;
        // 0x1284fc: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284f8) {
            ctx->pc = 0x1284E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1284e4;
        }
    }
    ctx->pc = 0x128500u;
    // 0x128500: 0x1e0f02d  daddu       $fp, $t7, $zero
    ctx->pc = 0x128500u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128504: 0x248fffcf  addiu       $t7, $a0, -0x31
    ctx->pc = 0x128504u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_128508:
    // 0x128508: 0x2def0009  sltiu       $t7, $t7, 0x9
    ctx->pc = 0x128508u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x12850c: 0x11e00028  beqz        $t7, . + 4 + (0x28 << 2)
    ctx->pc = 0x12850Cu;
    {
        const bool branch_taken_0x12850c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12850Cu;
        // 0x128510: 0x240f0065  addiu       $t7, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12850c) {
            ctx->pc = 0x1285B0u;
            goto label_1285b0;
        }
    }
    ctx->pc = 0x128514u;
    // 0x128514: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x128514u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128518: 0xafbe0020  sw          $fp, 0x20($sp)
    ctx->pc = 0x128518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
    // 0x12851c: 0x248bffd0  addiu       $t3, $a0, -0x30
    ctx->pc = 0x12851cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x128520: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x128520u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128524:
    // 0x128524: 0x1160001b  beqz        $t3, . + 4 + (0x1B << 2)
    ctx->pc = 0x128524u;
    {
        const bool branch_taken_0x128524 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x128528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128524u;
        // 0x128528: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128524) {
            ctx->pc = 0x128594u;
            goto label_128594;
        }
    }
    ctx->pc = 0x12852Cu;
    // 0x12852c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12852cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128530: 0x4a782a  slt         $t7, $v0, $t2
    ctx->pc = 0x128530u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x128534: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x128534u;
    {
        const bool branch_taken_0x128534 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128534u;
        // 0x128538: 0x1aa6821  addu        $t5, $t5, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128534) {
            ctx->pc = 0x128570u;
            goto label_128570;
        }
    }
    ctx->pc = 0x12853Cu;
    // 0x12853c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x12853cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128540: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x128540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128544: 0x254cffff  addiu       $t4, $t2, -0x1
    ctx->pc = 0x128544u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x128548: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x128548u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12854c: 0x28ef0009  slti        $t7, $a3, 0x9
    ctx->pc = 0x12854cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
label_128550:
    // 0x128550: 0x11e002e5  beqz        $t7, . + 4 + (0x2E5 << 2)
    ctx->pc = 0x128550u;
    {
        const bool branch_taken_0x128550 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128550u;
        // 0x128554: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128550) {
            ctx->pc = 0x1290E8u;
            goto label_1290e8;
        }
    }
    ctx->pc = 0x128558u;
    // 0x128558: 0x8e2018  mult        $a0, $a0, $t6
    ctx->pc = 0x128558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_12855c:
    // 0x12855c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x12855cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x128560: 0x1580fffb  bnez        $t4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x128560u;
    {
        const bool branch_taken_0x128560 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x128564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128560u;
        // 0x128564: 0x28ef0009  slti        $t7, $a3, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128560) {
            ctx->pc = 0x128550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128550;
        }
    }
    ctx->pc = 0x128568u;
    // 0x128568: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x128568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x12856c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x12856cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_128570:
    // 0x128570: 0x2a4f0009  slti        $t7, $s2, 0x9
    ctx->pc = 0x128570u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x128574: 0x11e002d5  beqz        $t7, . + 4 + (0x2D5 << 2)
    ctx->pc = 0x128574u;
    {
        const bool branch_taken_0x128574 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128574u;
        // 0x128578: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128574) {
            ctx->pc = 0x1290CCu;
            goto label_1290cc;
        }
    }
    ctx->pc = 0x12857Cu;
    // 0x12857c: 0x8fae0030  lw          $t6, 0x30($sp)
    ctx->pc = 0x12857cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128580: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x128580u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x128584: 0x1cf7818  mult        $t7, $t6, $t7
    ctx->pc = 0x128584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x128588: 0x1eb7821  addu        $t7, $t7, $t3
    ctx->pc = 0x128588u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x12858c: 0xafaf0030  sw          $t7, 0x30($sp)
    ctx->pc = 0x12858cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 15));
label_128590:
    // 0x128590: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x128590u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128594:
    // 0x128594: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x128594u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x128598: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x128598u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12859c: 0x248fffd0  addiu       $t7, $a0, -0x30
    ctx->pc = 0x12859cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x1285a0: 0x2dee000a  sltiu       $t6, $t7, 0xA
    ctx->pc = 0x1285a0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1285a4: 0x15c0ffdf  bnez        $t6, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1285A4u;
    {
        const bool branch_taken_0x1285a4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1285A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285A4u;
        // 0x1285a8: 0x1e0582d  daddu       $t3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285a4) {
            ctx->pc = 0x128524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128524;
        }
    }
    ctx->pc = 0x1285ACu;
label_1285ac:
    // 0x1285ac: 0x240f0065  addiu       $t7, $zero, 0x65
    ctx->pc = 0x1285acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_1285b0:
    // 0x1285b0: 0x108f0004  beq         $a0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1285B0u;
    {
        const bool branch_taken_0x1285b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1285B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285B0u;
        // 0x1285b4: 0xffa00018  sd          $zero, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285b0) {
            ctx->pc = 0x1285C4u;
            goto label_1285c4;
        }
    }
    ctx->pc = 0x1285B8u;
    // 0x1285b8: 0x240f0045  addiu       $t7, $zero, 0x45
    ctx->pc = 0x1285b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1285bc: 0x148f004a  bne         $a0, $t7, . + 4 + (0x4A << 2)
    ctx->pc = 0x1285BCu;
    {
        const bool branch_taken_0x1285bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        if (branch_taken_0x1285bc) {
            ctx->pc = 0x1286E8u;
            goto label_1286e8;
        }
    }
    ctx->pc = 0x1285C4u;
label_1285c4:
    // 0x1285c4: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1285C4u;
    {
        const bool branch_taken_0x1285c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1285c4) {
            ctx->pc = 0x1285C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1285C4u;
            // 0x1285c8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1285E0u;
            goto label_1285e0;
        }
    }
    ctx->pc = 0x1285CCu;
    // 0x1285cc: 0x55400004  bnel        $t2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1285CCu;
    {
        const bool branch_taken_0x1285cc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1285cc) {
            ctx->pc = 0x1285D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1285CCu;
            // 0x1285d0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1285E0u;
            goto label_1285e0;
        }
    }
    ctx->pc = 0x1285D4u;
    // 0x1285d4: 0x5120ff75  beql        $t1, $zero, . + 4 + (-0x8B << 2)
    ctx->pc = 0x1285D4u;
    {
        const bool branch_taken_0x1285d4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1285d4) {
            ctx->pc = 0x1285D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1285D4u;
            // 0x1285d8: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1283ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1283ac;
        }
    }
    ctx->pc = 0x1285DCu;
    // 0x1285dc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1285dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1285e0:
    // 0x1285e0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1285e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1285e4: 0x240f002b  addiu       $t7, $zero, 0x2B
    ctx->pc = 0x1285e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1285e8: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x1285e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1285ec: 0x108f0005  beq         $a0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1285ECu;
    {
        const bool branch_taken_0x1285ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1285F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285ECu;
        // 0x1285f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285ec) {
            ctx->pc = 0x128604u;
            goto label_128604;
        }
    }
    ctx->pc = 0x1285F4u;
    // 0x1285f4: 0x240f002d  addiu       $t7, $zero, 0x2D
    ctx->pc = 0x1285f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1285f8: 0x148f0005  bne         $a0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1285F8u;
    {
        const bool branch_taken_0x1285f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x1285FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285F8u;
        // 0x1285fc: 0x248fffd0  addiu       $t7, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285f8) {
            ctx->pc = 0x128610u;
            goto label_128610;
        }
    }
    ctx->pc = 0x128600u;
    // 0x128600: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x128600u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128604:
    // 0x128604: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x128604u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x128608: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x128608u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12860c: 0x248fffd0  addiu       $t7, $a0, -0x30
    ctx->pc = 0x12860cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_128610:
    // 0x128610: 0x2def000a  sltiu       $t7, $t7, 0xA
    ctx->pc = 0x128610u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x128614: 0x11e002ab  beqz        $t7, . + 4 + (0x2AB << 2)
    ctx->pc = 0x128614u;
    {
        const bool branch_taken_0x128614 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128614u;
        // 0x128618: 0x240f0030  addiu       $t7, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128614) {
            ctx->pc = 0x1290C4u;
            goto label_1290c4;
        }
    }
    ctx->pc = 0x12861Cu;
    // 0x12861c: 0x148f000d  bne         $a0, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x12861Cu;
    {
        const bool branch_taken_0x12861c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x128620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12861Cu;
        // 0x128620: 0x248fffcf  addiu       $t7, $a0, -0x31 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12861c) {
            ctx->pc = 0x128654u;
            goto label_128654;
        }
    }
    ctx->pc = 0x128624u;
    // 0x128624: 0x3c0782d  daddu       $t7, $fp, $zero
    ctx->pc = 0x128624u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128628: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x128628u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12862c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12862cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_128630:
    // 0x128630: 0x81e40000  lb          $a0, 0x0($t7)
    ctx->pc = 0x128630u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x128634: 0x0  nop
    ctx->pc = 0x128634u;
    // NOP
    // 0x128638: 0x0  nop
    ctx->pc = 0x128638u;
    // NOP
    // 0x12863c: 0x0  nop
    ctx->pc = 0x12863cu;
    // NOP
    // 0x128640: 0x0  nop
    ctx->pc = 0x128640u;
    // NOP
    // 0x128644: 0x508efffa  beql        $a0, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x128644u;
    {
        const bool branch_taken_0x128644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 14));
        if (branch_taken_0x128644) {
            ctx->pc = 0x128648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128644u;
            // 0x128648: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128630;
        }
    }
    ctx->pc = 0x12864Cu;
    // 0x12864c: 0x1e0f02d  daddu       $fp, $t7, $zero
    ctx->pc = 0x12864cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128650: 0x248fffcf  addiu       $t7, $a0, -0x31
    ctx->pc = 0x128650u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_128654:
    // 0x128654: 0x2def0009  sltiu       $t7, $t7, 0x9
    ctx->pc = 0x128654u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x128658: 0x11e00298  beqz        $t7, . + 4 + (0x298 << 2)
    ctx->pc = 0x128658u;
    {
        const bool branch_taken_0x128658 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128658u;
        // 0x12865c: 0x3c0602d  daddu       $t4, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128658) {
            ctx->pc = 0x1290BCu;
            goto label_1290bc;
        }
    }
    ctx->pc = 0x128660u;
    // 0x128660: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x128660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x128664: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x128664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x128668: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x128668u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12866c: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x12866cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x128670: 0x288f0030  slti        $t7, $a0, 0x30
    ctx->pc = 0x128670u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x128674: 0x15e00013  bnez        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x128674u;
    {
        const bool branch_taken_0x128674 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x128678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128674u;
        // 0x128678: 0x3cc7823  subu        $t7, $fp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128674) {
            ctx->pc = 0x1286C4u;
            goto label_1286c4;
        }
    }
    ctx->pc = 0x12867Cu;
    // 0x12867c: 0x288f003a  slti        $t7, $a0, 0x3A
    ctx->pc = 0x12867cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x128680: 0x11e00010  beqz        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x128680u;
    {
        const bool branch_taken_0x128680 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128680u;
        // 0x128684: 0x3cc7823  subu        $t7, $fp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128680) {
            ctx->pc = 0x1286C4u;
            goto label_1286c4;
        }
    }
    ctx->pc = 0x128688u;
    // 0x128688: 0xdfae0018  ld          $t6, 0x18($sp)
    ctx->pc = 0x128688u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12868c:
    // 0x12868c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12868cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x128690: 0xe78b8  dsll        $t7, $t6, 2
    ctx->pc = 0x128690u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) << 2);
    // 0x128694: 0x1ee782d  daddu       $t7, $t7, $t6
    ctx->pc = 0x128694u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 14));
    // 0x128698: 0xf7878  dsll        $t7, $t7, 1
    ctx->pc = 0x128698u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 1);
    // 0x12869c: 0x8f782d  daddu       $t7, $a0, $t7
    ctx->pc = 0x12869cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 15));
    // 0x1286a0: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x1286a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1286a4: 0x65efffd0  daddiu      $t7, $t7, -0x30
    ctx->pc = 0x1286a4u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 15) + (int64_t)(int32_t)4294967248);
    // 0x1286a8: 0x288e0030  slti        $t6, $a0, 0x30
    ctx->pc = 0x1286a8u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1286ac: 0x15c00004  bnez        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1286ACu;
    {
        const bool branch_taken_0x1286ac = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1286B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286ACu;
        // 0x1286b0: 0xffaf0018  sd          $t7, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286ac) {
            ctx->pc = 0x1286C0u;
            goto label_1286c0;
        }
    }
    ctx->pc = 0x1286B4u;
    // 0x1286b4: 0x288f003a  slti        $t7, $a0, 0x3A
    ctx->pc = 0x1286b4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x1286b8: 0x15e0fff4  bnez        $t7, . + 4 + (-0xC << 2)
    ctx->pc = 0x1286B8u;
    {
        const bool branch_taken_0x1286b8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1286BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286B8u;
        // 0x1286bc: 0xdfae0018  ld          $t6, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286b8) {
            ctx->pc = 0x12868Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12868c;
        }
    }
    ctx->pc = 0x1286C0u;
label_1286c0:
    // 0x1286c0: 0x3cc7823  subu        $t7, $fp, $t4
    ctx->pc = 0x1286c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
label_1286c4:
    // 0x1286c4: 0x3c0e0098  lui         $t6, 0x98
    ctx->pc = 0x1286c4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)152 << 16));
    // 0x1286c8: 0xdfac0018  ld          $t4, 0x18($sp)
    ctx->pc = 0x1286c8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1286cc: 0x29ef0009  slti        $t7, $t7, 0x9
    ctx->pc = 0x1286ccu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1286d0: 0x35ce967f  ori         $t6, $t6, 0x967F
    ctx->pc = 0x1286d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)38527);
    // 0x1286d4: 0x1cf600a  movz        $t4, $t6, $t7
    ctx->pc = 0x1286d4u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 14));
    // 0x1286d8: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1286D8u;
    {
        const bool branch_taken_0x1286d8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286D8u;
        // 0x1286dc: 0xffac0018  sd          $t4, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286d8) {
            ctx->pc = 0x1286E8u;
            goto label_1286e8;
        }
    }
    ctx->pc = 0x1286E0u;
    // 0x1286e0: 0xc602f  dsubu       $t4, $zero, $t4
    ctx->pc = 0x1286e0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 12));
    // 0x1286e4: 0xffac0018  sd          $t4, 0x18($sp)
    ctx->pc = 0x1286e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 12));
label_1286e8:
    // 0x1286e8: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1286E8u;
    {
        const bool branch_taken_0x1286e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1286ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286E8u;
        // 0x1286ec: 0xdfae0018  ld          $t6, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286e8) {
            ctx->pc = 0x128708u;
            goto label_128708;
        }
    }
    ctx->pc = 0x1286F0u;
    // 0x1286f0: 0x1540ff2f  bnez        $t2, . + 4 + (-0xD1 << 2)
    ctx->pc = 0x1286F0u;
    {
        const bool branch_taken_0x1286f0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1286F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286F0u;
        // 0x1286f4: 0x8fac0008  lw          $t4, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286f0) {
            ctx->pc = 0x1283B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1283b0;
        }
    }
    ctx->pc = 0x1286F8u;
    // 0x1286f8: 0x1520ff2d  bnez        $t1, . + 4 + (-0xD3 << 2)
    ctx->pc = 0x1286F8u;
    {
        const bool branch_taken_0x1286f8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1286f8) {
            ctx->pc = 0x1283B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1283b0;
        }
    }
    ctx->pc = 0x128700u;
    // 0x128700: 0x1000ff2b  b           . + 4 + (-0xD5 << 2)
    ctx->pc = 0x128700u;
    {
        const bool branch_taken_0x128700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128700u;
        // 0x128704: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128700) {
            ctx->pc = 0x1283B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1283b0;
        }
    }
    ctx->pc = 0x128708u;
label_128708:
    // 0x128708: 0x2a4f0011  slti        $t7, $s2, 0x11
    ctx->pc = 0x128708u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12870c: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x12870cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x128710: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x128710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128714: 0x1cd702f  dsubu       $t6, $t6, $t5
    ctx->pc = 0x128714u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) - GPR_U64(ctx, 13));
    // 0x128718: 0x24f980b  movn        $s3, $s2, $t7
    ctx->pc = 0x128718u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 18));
    // 0x12871c: 0xe603c  dsll32      $t4, $t6, 0
    ctx->pc = 0x12871cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) << (32 + 0));
    // 0x128720: 0xffae0018  sd          $t6, 0x18($sp)
    ctx->pc = 0x128720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 14));
    // 0x128724: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x128724u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x128728: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x128728u;
    SET_GPR_U32(ctx, 31, 0x128730u);
    ctx->pc = 0x12872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128728u;
    // 0x12872c: 0xafac0054  sw          $t4, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x128728u, 0x128730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128730u;
label_128730:
    // 0x128730: 0x8fad000c  lw          $t5, 0xC($sp)
    ctx->pc = 0x128730u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x128734: 0x8fae000c  lw          $t6, 0xC($sp)
    ctx->pc = 0x128734u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x128738: 0x8fb00054  lw          $s0, 0x54($sp)
    ctx->pc = 0x128738u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12873c: 0x24e680a  movz        $t5, $s2, $t6
    ctx->pc = 0x12873cu;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 18));
    // 0x128740: 0x8faf0030  lw          $t7, 0x30($sp)
    ctx->pc = 0x128740u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128744: 0x5e10005  bgez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x128744u;
    {
        const bool branch_taken_0x128744 = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x128748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128744u;
        // 0x128748: 0xafad000c  sw          $t5, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128744) {
            ctx->pc = 0x12875Cu;
            goto label_12875c;
        }
    }
    ctx->pc = 0x12874Cu;
    // 0x12874c: 0x2405041f  addiu       $a1, $zero, 0x41F
    ctx->pc = 0x12874cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
    // 0x128750: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128754: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x128754u;
    SET_GPR_U32(ctx, 31, 0x12875Cu);
    ctx->pc = 0x128758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128754u;
    // 0x128758: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x128754u, 0x12875Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12875Cu;
label_12875c:
    // 0x12875c: 0x2a6f000a  slti        $t7, $s3, 0xA
    ctx->pc = 0x12875cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x128760: 0x15e00010  bnez        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x128760u;
    {
        const bool branch_taken_0x128760 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x128764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128760u;
        // 0x128764: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128760) {
            ctx->pc = 0x1287A4u;
            goto label_1287a4;
        }
    }
    ctx->pc = 0x128768u;
    // 0x128768: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x128768u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x12876c: 0x1378c0  sll         $t7, $s3, 3
    ctx->pc = 0x12876cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x128770: 0x25ce3c40  addiu       $t6, $t6, 0x3C40
    ctx->pc = 0x128770u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 15424));
    // 0x128774: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128778: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x128778u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12877c: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x12877Cu;
    SET_GPR_U32(ctx, 31, 0x128784u);
    ctx->pc = 0x128780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12877Cu;
    // 0x128780: 0xdde4ffb8  ld          $a0, -0x48($t7) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 4294967224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x12877Cu, 0x128784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128784u;
label_128784:
    // 0x128784: 0x6200244  bltz        $s1, . + 4 + (0x244 << 2)
    ctx->pc = 0x128784u;
    {
        const bool branch_taken_0x128784 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x128788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128784u;
        // 0x128788: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128784) {
            ctx->pc = 0x129098u;
            goto label_129098;
        }
    }
    ctx->pc = 0x12878Cu;
    // 0x12878c: 0xc04b0ac  jal         func_12C2B0
    ctx->pc = 0x12878Cu;
    SET_GPR_U32(ctx, 31, 0x128794u);
    ctx->pc = 0x128790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12878Cu;
    // 0x128790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C2B0u, 0x12878Cu, 0x128794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128794u;
label_128794:
    // 0x128794: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x128794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_128798:
    // 0x128798: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x128798u;
    SET_GPR_U32(ctx, 31, 0x1287A0u);
    ctx->pc = 0x12879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128798u;
    // 0x12879c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x128798u, 0x1287A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1287A0u;
label_1287a0:
    // 0x1287a0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1287a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1287a4:
    // 0x1287a4: 0x2537823  subu        $t7, $s2, $s3
    ctx->pc = 0x1287a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1287a8: 0x20f8021  addu        $s0, $s0, $t7
    ctx->pc = 0x1287a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    // 0x1287ac: 0x1a0001f6  blez        $s0, . + 4 + (0x1F6 << 2)
    ctx->pc = 0x1287ACu;
    {
        const bool branch_taken_0x1287ac = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x1287B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287ACu;
        // 0x1287b0: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287ac) {
            ctx->pc = 0x128F88u;
            goto label_128f88;
        }
    }
    ctx->pc = 0x1287B4u;
    // 0x1287b4: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x1287b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x1287b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1287B8u;
    {
        const bool branch_taken_0x1287b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287B8u;
        // 0x1287bc: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287b8) {
            ctx->pc = 0x1287DCu;
            goto label_1287dc;
        }
    }
    ctx->pc = 0x1287C0u;
    // 0x1287c0: 0x270c0  sll         $t6, $v0, 3
    ctx->pc = 0x1287c0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1287c4: 0x25ef3c40  addiu       $t7, $t7, 0x3C40
    ctx->pc = 0x1287c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15424));
    // 0x1287c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1287c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287cc: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1287ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1287d0: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x1287D0u;
    SET_GPR_U32(ctx, 31, 0x1287D8u);
    ctx->pc = 0x1287D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1287D0u;
    // 0x1287d4: 0xddc40000  ld          $a0, 0x0($t6) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x1287D0u, 0x1287D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1287D8u;
label_1287d8:
    // 0x1287d8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1287d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1287dc:
    // 0x1287dc: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x1287dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1287e0: 0x20f8024  and         $s0, $s0, $t7
    ctx->pc = 0x1287e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 15));
    // 0x1287e4: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1287E4u;
    {
        const bool branch_taken_0x1287e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287E4u;
        // 0x1287e8: 0x2a0f0135  slti        $t7, $s0, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)309) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287e4) {
            ctx->pc = 0x128920u;
            goto label_128920;
        }
    }
    ctx->pc = 0x1287ECu;
    // 0x1287ec: 0x55e00018  bnel        $t7, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1287ECu;
    {
        const bool branch_taken_0x1287ec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1287ec) {
            ctx->pc = 0x1287F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1287ECu;
            // 0x1287f0: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128850u;
            goto label_128850;
        }
    }
    ctx->pc = 0x1287F4u;
label_1287f4:
    // 0x1287f4: 0x240f0022  addiu       $t7, $zero, 0x22
    ctx->pc = 0x1287f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1287f8:
    // 0x1287f8: 0x8fac0050  lw          $t4, 0x50($sp)
    ctx->pc = 0x1287f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1287fc: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x1287fcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x128800: 0xaecf0000  sw          $t7, 0x0($s6)
    ctx->pc = 0x128800u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 15));
    // 0x128804: 0x1180fee9  beqz        $t4, . + 4 + (-0x117 << 2)
    ctx->pc = 0x128804u;
    {
        const bool branch_taken_0x128804 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x128808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128804u;
        // 0x128808: 0xddd535d8  ld          $s5, 0x35D8($t6) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 14), 13784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128804) {
            ctx->pc = 0x1283ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1283ac;
        }
    }
    ctx->pc = 0x12880Cu;
label_12880c:
    // 0x12880c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12880cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128810:
    // 0x128810: 0xc049616  jal         func_125858
    ctx->pc = 0x128810u;
    SET_GPR_U32(ctx, 31, 0x128818u);
    ctx->pc = 0x128814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128810u;
    // 0x128814: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x128810u, 0x128818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128818u;
label_128818:
    // 0x128818: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x128818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12881c: 0xc049616  jal         func_125858
    ctx->pc = 0x12881Cu;
    SET_GPR_U32(ctx, 31, 0x128824u);
    ctx->pc = 0x128820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12881Cu;
    // 0x128820: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x12881Cu, 0x128824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128824u;
label_128824:
    // 0x128824: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x128824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128828: 0xc049616  jal         func_125858
    ctx->pc = 0x128828u;
    SET_GPR_U32(ctx, 31, 0x128830u);
    ctx->pc = 0x12882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128828u;
    // 0x12882c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x128828u, 0x128830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128830u;
label_128830:
    // 0x128830: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x128830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x128834: 0xc049616  jal         func_125858
    ctx->pc = 0x128834u;
    SET_GPR_U32(ctx, 31, 0x12883Cu);
    ctx->pc = 0x128838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128834u;
    // 0x128838: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x128834u, 0x12883Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12883Cu;
label_12883c:
    // 0x12883c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128840: 0xc049616  jal         func_125858
    ctx->pc = 0x128840u;
    SET_GPR_U32(ctx, 31, 0x128848u);
    ctx->pc = 0x128844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128840u;
    // 0x128844: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x128840u, 0x128848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128848u;
label_128848:
    // 0x128848: 0x1000fed9  b           . + 4 + (-0x127 << 2)
    ctx->pc = 0x128848u;
    {
        const bool branch_taken_0x128848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128848u;
        // 0x12884c: 0x8fac0008  lw          $t4, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128848) {
            ctx->pc = 0x1283B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1283b0;
        }
    }
    ctx->pc = 0x128850u;
label_128850:
    // 0x128850: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x128850u;
    {
        const bool branch_taken_0x128850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x128854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128850u;
        // 0x128854: 0x2a0f0002  slti        $t7, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128850) {
            ctx->pc = 0x128920u;
            goto label_128920;
        }
    }
    ctx->pc = 0x128858u;
    // 0x128858: 0x15e00012  bnez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x128858u;
    {
        const bool branch_taken_0x128858 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128858u;
        // 0x12885c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128858) {
            ctx->pc = 0x1288A4u;
            goto label_1288a4;
        }
    }
    ctx->pc = 0x128860u;
    // 0x128860: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x128860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128864: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x128864u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x128868: 0x180982d  daddu       $s3, $t4, $zero
    ctx->pc = 0x128868u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12886c: 0x25f03d08  addiu       $s0, $t7, 0x3D08
    ctx->pc = 0x12886cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 15624));
label_128870:
    // 0x128870: 0x322f0001  andi        $t7, $s1, 0x1
    ctx->pc = 0x128870u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x128874: 0x51e00006  beql        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x128874u;
    {
        const bool branch_taken_0x128874 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x128874) {
            ctx->pc = 0x128878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128874u;
            // 0x128878: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128890u;
            goto label_128890;
        }
    }
    ctx->pc = 0x12887Cu;
    // 0x12887c: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x12887cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x128880: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x128880u;
    SET_GPR_U32(ctx, 31, 0x128888u);
    ctx->pc = 0x128884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128880u;
    // 0x128884: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x128880u, 0x128888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128888u;
label_128888:
    // 0x128888: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x128888u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12888c: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x12888cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
label_128890:
    // 0x128890: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x128890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x128894: 0x2a2f0002  slti        $t7, $s1, 0x2
    ctx->pc = 0x128894u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x128898: 0x11e0fff5  beqz        $t7, . + 4 + (-0xB << 2)
    ctx->pc = 0x128898u;
    {
        const bool branch_taken_0x128898 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128898u;
        // 0x12889c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128898) {
            ctx->pc = 0x128870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128870;
        }
    }
    ctx->pc = 0x1288A0u;
    // 0x1288a0: 0x260602d  daddu       $t4, $s3, $zero
    ctx->pc = 0x1288a0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1288a4:
    // 0x1288a4: 0x3c0efcb0  lui         $t6, 0xFCB0
    ctx->pc = 0x1288a4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64688 << 16));
    // 0x1288a8: 0x15683f  dsra32      $t5, $s5, 0
    ctx->pc = 0x1288a8u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x1288ac: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x1288acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x1288b0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1288b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1288b4: 0x25ef3d08  addiu       $t7, $t7, 0x3D08
    ctx->pc = 0x1288b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15624));
    // 0x1288b8: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x1288b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1288bc: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x1288bcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x1288c0: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1288c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1288c4: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x1288c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x1288c8: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x1288c8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1288cc: 0x2b0a824  and         $s5, $s5, $s0
    ctx->pc = 0x1288ccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 16));
    // 0x1288d0: 0xdd840000  ld          $a0, 0x0($t4)
    ctx->pc = 0x1288d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1288d4: 0x2ada825  or          $s5, $s5, $t5
    ctx->pc = 0x1288d4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 13));
    // 0x1288d8: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x1288D8u;
    SET_GPR_U32(ctx, 31, 0x1288E0u);
    ctx->pc = 0x1288DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1288D8u;
    // 0x1288dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x1288D8u, 0x1288E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288E0u;
label_1288e0:
    // 0x1288e0: 0x2683f  dsra32      $t5, $v0, 0
    ctx->pc = 0x1288e0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1288e4: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x1288e4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x1288e8: 0x1ae8824  and         $s1, $t5, $t6
    ctx->pc = 0x1288e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
    // 0x1288ec: 0x3c0f7ca0  lui         $t7, 0x7CA0
    ctx->pc = 0x1288ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)31904 << 16));
    // 0x1288f0: 0x1f1782b  sltu        $t7, $t7, $s1
    ctx->pc = 0x1288f0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1288f4: 0x15e0ffc0  bnez        $t7, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1288F4u;
    {
        const bool branch_taken_0x1288f4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1288F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288F4u;
        // 0x1288f8: 0x240f0022  addiu       $t7, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1288f4) {
            ctx->pc = 0x1287F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1287f8;
        }
    }
    ctx->pc = 0x1288FCu;
    // 0x1288fc: 0x3c0f7c90  lui         $t7, 0x7C90
    ctx->pc = 0x1288fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)31888 << 16));
    // 0x128900: 0x1f1782b  sltu        $t7, $t7, $s1
    ctx->pc = 0x128900u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x128904: 0x11e0019a  beqz        $t7, . + 4 + (0x19A << 2)
    ctx->pc = 0x128904u;
    {
        const bool branch_taken_0x128904 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128904u;
        // 0x128908: 0x3c0f7fef  lui         $t7, 0x7FEF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32751 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128904) {
            ctx->pc = 0x128F70u;
            goto label_128f70;
        }
    }
    ctx->pc = 0x12890Cu;
    // 0x12890c: 0x50a824  and         $s5, $v0, $s0
    ctx->pc = 0x12890cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x128910: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x128910u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x128914: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x128914u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x128918: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x128918u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x12891c: 0x2b0a825  or          $s5, $s5, $s0
    ctx->pc = 0x12891cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 16));
label_128920:
    // 0x128920: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x128920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_128924:
    // 0x128924: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x128924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128928: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x128928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12892c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12892cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128930: 0xc049664  jal         func_125990
    ctx->pc = 0x128930u;
    SET_GPR_U32(ctx, 31, 0x128938u);
    ctx->pc = 0x128934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128930u;
    // 0x128934: 0x8fa80030  lw          $t0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125990u, 0x128930u, 0x128938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128938u;
label_128938:
    // 0x128938: 0x244e000c  addiu       $t6, $v0, 0xC
    ctx->pc = 0x128938u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x12893c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x12893cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x128940: 0xafae0058  sw          $t6, 0x58($sp)
    ctx->pc = 0x128940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 14));
    // 0x128944: 0x8faf0050  lw          $t7, 0x50($sp)
    ctx->pc = 0x128944u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_128948:
    // 0x128948: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x128948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12894c: 0xc0495ec  jal         func_1257B0
    ctx->pc = 0x12894Cu;
    SET_GPR_U32(ctx, 31, 0x128954u);
    ctx->pc = 0x128950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12894Cu;
    // 0x128950: 0x8de50004  lw          $a1, 0x4($t7) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1257B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1257B0u, 0x12894Cu, 0x128954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128954u;
label_128954:
    // 0x128954: 0x8fac0050  lw          $t4, 0x50($sp)
    ctx->pc = 0x128954u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x128958: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x128958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x12895c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x12895cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x128960: 0x8d860010  lw          $a2, 0x10($t4)
    ctx->pc = 0x128960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x128964: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x128964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x128968: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x128968u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12896c: 0xc049522  jal         func_125488
    ctx->pc = 0x12896Cu;
    SET_GPR_U32(ctx, 31, 0x128974u);
    ctx->pc = 0x128970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12896Cu;
    // 0x128970: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x12896Cu, 0x128974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128974u;
label_128974:
    // 0x128974: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x128974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128978: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x128978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12897c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x12897cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128980: 0xc049936  jal         func_1264D8
    ctx->pc = 0x128980u;
    SET_GPR_U32(ctx, 31, 0x128988u);
    ctx->pc = 0x128984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128980u;
    // 0x128984: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1264D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1264D8u, 0x128980u, 0x128988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128988u;
label_128988:
    // 0x128988: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x128988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x12898c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12898cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128990: 0xc049700  jal         func_125C00
    ctx->pc = 0x128990u;
    SET_GPR_U32(ctx, 31, 0x128998u);
    ctx->pc = 0x128994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128990u;
    // 0x128994: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C00u, 0x128990u, 0x128998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128998u;
label_128998:
    // 0x128998: 0xdfad0018  ld          $t5, 0x18($sp)
    ctx->pc = 0x128998u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12899c: 0x5a0016e  bltz        $t5, . + 4 + (0x16E << 2)
    ctx->pc = 0x12899Cu;
    {
        const bool branch_taken_0x12899c = (GPR_S64(ctx, 13) < 0);
        ctx->pc = 0x1289A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12899Cu;
        // 0x1289a0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12899c) {
            ctx->pc = 0x128F58u;
            goto label_128f58;
        }
    }
    ctx->pc = 0x1289A4u;
    // 0x1289a4: 0x8fb10054  lw          $s1, 0x54($sp)
    ctx->pc = 0x1289a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1289a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1289a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1289acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289b0: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1289b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1289b4:
    // 0x1289b4: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x1289b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1289b8: 0x5e20002  bltzl       $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x1289B8u;
    {
        const bool branch_taken_0x1289b8 = (GPR_S64(ctx, 15) < 0);
        if (branch_taken_0x1289b8) {
            ctx->pc = 0x1289BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1289B8u;
            // 0x1289bc: 0x22f8823  subu        $s1, $s1, $t7 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1289C4u;
            goto label_1289c4;
        }
    }
    ctx->pc = 0x1289C0u;
    // 0x1289c0: 0x24f9021  addu        $s2, $s2, $t7
    ctx->pc = 0x1289c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
label_1289c4:
    // 0x1289c4: 0x8fad0004  lw          $t5, 0x4($sp)
    ctx->pc = 0x1289c4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1289c8: 0x25ec0433  addiu       $t4, $t7, 0x433
    ctx->pc = 0x1289c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 1075));
    // 0x1289cc: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1289ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1289d0: 0x25e2ffff  addiu       $v0, $t7, -0x1
    ctx->pc = 0x1289d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x1289d4: 0x284efc02  slti        $t6, $v0, -0x3FE
    ctx->pc = 0x1289d4u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x1289d8: 0x15c00003  bnez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1289D8u;
    {
        const bool branch_taken_0x1289d8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1289DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289D8u;
        // 0x1289dc: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289d8) {
            ctx->pc = 0x1289E8u;
            goto label_1289e8;
        }
    }
    ctx->pc = 0x1289E0u;
    // 0x1289e0: 0x240f0036  addiu       $t7, $zero, 0x36
    ctx->pc = 0x1289e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1289e4: 0x1ed6023  subu        $t4, $t7, $t5
    ctx->pc = 0x1289e4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
label_1289e8:
    // 0x1289e8: 0x22c1021  addu        $v0, $s1, $t4
    ctx->pc = 0x1289e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 12)));
    // 0x1289ec: 0x24c9021  addu        $s2, $s2, $t4
    ctx->pc = 0x1289ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 12)));
    // 0x1289f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1289f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289f4: 0x242782a  slt         $t7, $s2, $v0
    ctx->pc = 0x1289f4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1289f8: 0x24f100b  movn        $v0, $s2, $t7
    ctx->pc = 0x1289f8u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x1289fc: 0x262702a  slt         $t6, $s3, $v0
    ctx->pc = 0x1289fcu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x128a00: 0x26e100b  movn        $v0, $s3, $t6
    ctx->pc = 0x128a00u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 19));
    // 0x128a04: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x128A04u;
    {
        const bool branch_taken_0x128a04 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x128a04) {
            ctx->pc = 0x128A18u;
            goto label_128a18;
        }
    }
    ctx->pc = 0x128A0Cu;
    // 0x128a0c: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x128a0cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x128a10: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x128a10u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x128a14: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x128a14u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_128a18:
    // 0x128a18: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x128A18u;
    {
        const bool branch_taken_0x128a18 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x128A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A18u;
        // 0x128a1c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a18) {
            ctx->pc = 0x128A50u;
            goto label_128a50;
        }
    }
    ctx->pc = 0x128A20u;
    // 0x128a20: 0xc049790  jal         func_125E40
    ctx->pc = 0x128A20u;
    SET_GPR_U32(ctx, 31, 0x128A28u);
    ctx->pc = 0x128A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A20u;
    // 0x128a24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E40u, 0x128A20u, 0x128A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A28u;
label_128a28:
    // 0x128a28: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x128a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128a2c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x128a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a34: 0xc04970e  jal         func_125C38
    ctx->pc = 0x128A34u;
    SET_GPR_U32(ctx, 31, 0x128A3Cu);
    ctx->pc = 0x128A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A34u;
    // 0x128a38: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C38u, 0x128A34u, 0x128A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A3Cu;
label_128a3c:
    // 0x128a3c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x128a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128a40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x128a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a44: 0xc049616  jal         func_125858
    ctx->pc = 0x128A44u;
    SET_GPR_U32(ctx, 31, 0x128A4Cu);
    ctx->pc = 0x128A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A44u;
    // 0x128a48: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x128A44u, 0x128A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A4Cu;
label_128a4c:
    // 0x128a4c: 0xafb00048  sw          $s0, 0x48($sp)
    ctx->pc = 0x128a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
label_128a50:
    // 0x128a50: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x128A50u;
    {
        const bool branch_taken_0x128a50 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x128A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A50u;
        // 0x128a54: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a50) {
            ctx->pc = 0x128A68u;
            goto label_128a68;
        }
    }
    ctx->pc = 0x128A58u;
    // 0x128a58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x128a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a5c: 0xc0497d2  jal         func_125F48
    ctx->pc = 0x128A5Cu;
    SET_GPR_U32(ctx, 31, 0x128A64u);
    ctx->pc = 0x128A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A5Cu;
    // 0x128a60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F48u, 0x128A5Cu, 0x128A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A64u;
label_128a64:
    // 0x128a64: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x128a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_128a68:
    // 0x128a68: 0x1a800005  blez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x128A68u;
    {
        const bool branch_taken_0x128a68 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x128A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A68u;
        // 0x128a6c: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a68) {
            ctx->pc = 0x128A80u;
            goto label_128a80;
        }
    }
    ctx->pc = 0x128A70u;
    // 0x128a70: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x128a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a74: 0xc049790  jal         func_125E40
    ctx->pc = 0x128A74u;
    SET_GPR_U32(ctx, 31, 0x128A7Cu);
    ctx->pc = 0x128A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A74u;
    // 0x128a78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E40u, 0x128A74u, 0x128A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A7Cu;
label_128a7c:
    // 0x128a7c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x128a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_128a80:
    // 0x128a80: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x128A80u;
    {
        const bool branch_taken_0x128a80 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x128A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A80u;
        // 0x128a84: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a80) {
            ctx->pc = 0x128A98u;
            goto label_128a98;
        }
    }
    ctx->pc = 0x128A88u;
    // 0x128a88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x128a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a8c: 0xc0497d2  jal         func_125F48
    ctx->pc = 0x128A8Cu;
    SET_GPR_U32(ctx, 31, 0x128A94u);
    ctx->pc = 0x128A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A8Cu;
    // 0x128a90: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F48u, 0x128A8Cu, 0x128A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A94u;
label_128a94:
    // 0x128a94: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x128a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_128a98:
    // 0x128a98: 0x1a600005  blez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x128A98u;
    {
        const bool branch_taken_0x128a98 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x128A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A98u;
        // 0x128a9c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a98) {
            ctx->pc = 0x128AB0u;
            goto label_128ab0;
        }
    }
    ctx->pc = 0x128AA0u;
    // 0x128aa0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x128aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128aa4: 0xc0497d2  jal         func_125F48
    ctx->pc = 0x128AA4u;
    SET_GPR_U32(ctx, 31, 0x128AACu);
    ctx->pc = 0x128AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128AA4u;
    // 0x128aa8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F48u, 0x128AA4u, 0x128AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AACu;
label_128aac:
    // 0x128aac: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x128aacu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_128ab0:
    // 0x128ab0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x128ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128ab4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x128ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ab8: 0xc049844  jal         func_126110
    ctx->pc = 0x128AB8u;
    SET_GPR_U32(ctx, 31, 0x128AC0u);
    ctx->pc = 0x128ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128AB8u;
    // 0x128abc: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126110u, 0x128AB8u, 0x128AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AC0u;
label_128ac0:
    // 0x128ac0: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x128ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x128ac4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x128ac4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128acc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x128accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ad0: 0xc04982a  jal         func_1260A8
    ctx->pc = 0x128AD0u;
    SET_GPR_U32(ctx, 31, 0x128AD8u);
    ctx->pc = 0x128AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128AD0u;
    // 0x128ad4: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A8u, 0x128AD0u, 0x128AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AD8u;
label_128ad8:
    // 0x128ad8: 0x441001f  bgez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x128AD8u;
    {
        const bool branch_taken_0x128ad8 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x128ad8) {
            ctx->pc = 0x128B58u;
            goto label_128b58;
        }
    }
    ctx->pc = 0x128AE0u;
    // 0x128ae0: 0x1640ff4a  bnez        $s2, . + 4 + (-0xB6 << 2)
    ctx->pc = 0x128AE0u;
    {
        const bool branch_taken_0x128ae0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x128AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AE0u;
        // 0x128ae4: 0x240ff000  addiu       $t7, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ae0) {
            ctx->pc = 0x12880Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12880c;
        }
    }
    ctx->pc = 0x128AE8u;
    // 0x128ae8: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x128ae8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x128aec: 0x2af7824  and         $t7, $s5, $t7
    ctx->pc = 0x128aecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) & GPR_U64(ctx, 15));
    // 0x128af0: 0x55e0ff47  bnel        $t7, $zero, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x128AF0u;
    {
        const bool branch_taken_0x128af0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x128af0) {
            ctx->pc = 0x128AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128AF0u;
            // 0x128af4: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128810;
        }
    }
    ctx->pc = 0x128AF8u;
    // 0x128af8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x128af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128afc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x128afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b00: 0xc0497d2  jal         func_125F48
    ctx->pc = 0x128B00u;
    SET_GPR_U32(ctx, 31, 0x128B08u);
    ctx->pc = 0x128B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B00u;
    // 0x128b04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F48u, 0x128B00u, 0x128B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B08u;
label_128b08:
    // 0x128b08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x128b08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b10: 0xc04982a  jal         func_1260A8
    ctx->pc = 0x128B10u;
    SET_GPR_U32(ctx, 31, 0x128B18u);
    ctx->pc = 0x128B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B10u;
    // 0x128b14: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A8u, 0x128B10u, 0x128B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B18u;
label_128b18:
    // 0x128b18: 0x1840ff3c  blez        $v0, . + 4 + (-0xC4 << 2)
    ctx->pc = 0x128B18u;
    {
        const bool branch_taken_0x128b18 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x128B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B18u;
        // 0x128b1c: 0x15703f  dsra32      $t6, $s5, 0 (Delay Slot)
        SET_GPR_S64(ctx, 14, GPR_S64(ctx, 21) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b18) {
            ctx->pc = 0x12880Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12880c;
        }
    }
    ctx->pc = 0x128B20u;
label_128b20:
    // 0x128b20: 0x3c0f7ff0  lui         $t7, 0x7FF0
    ctx->pc = 0x128b20u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32752 << 16));
    // 0x128b24: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x128b24u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x128b28: 0x3c0dfff0  lui         $t5, 0xFFF0
    ctx->pc = 0x128b28u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65520 << 16));
    // 0x128b2c: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x128b2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x128b30: 0x3c0f000f  lui         $t7, 0xF
    ctx->pc = 0x128b30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)15 << 16));
    // 0x128b34: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x128b34u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x128b38: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x128b38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128b3c: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x128b3cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x128b40: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x128b40u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x128b44: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x128b44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x128b48: 0x2ada824  and         $s5, $s5, $t5
    ctx->pc = 0x128b48u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 13));
    // 0x128b4c: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x128b4cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x128b50: 0x1000ff2e  b           . + 4 + (-0xD2 << 2)
    ctx->pc = 0x128B50u;
    {
        const bool branch_taken_0x128b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B50u;
        // 0x128b54: 0x2ada825  or          $s5, $s5, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b50) {
            ctx->pc = 0x12880Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12880c;
        }
    }
    ctx->pc = 0x128B58u;
label_128b58:
    // 0x128b58: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x128B58u;
    {
        const bool branch_taken_0x128b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B58u;
        // 0x128b5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b58) {
            ctx->pc = 0x128C48u;
            goto label_128c48;
        }
    }
    ctx->pc = 0x128B60u;
    // 0x128b60: 0x12400031  beqz        $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x128B60u;
    {
        const bool branch_taken_0x128b60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B60u;
        // 0x128b64: 0x240ef000  addiu       $t6, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b60) {
            ctx->pc = 0x128C28u;
            goto label_128c28;
        }
    }
    ctx->pc = 0x128B68u;
    // 0x128b68: 0xe733a  dsrl        $t6, $t6, 12
    ctx->pc = 0x128b68u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 12);
    // 0x128b6c: 0x2ae7824  and         $t7, $s5, $t6
    ctx->pc = 0x128b6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) & GPR_U64(ctx, 14));
    // 0x128b70: 0x15ee000e  bne         $t7, $t6, . + 4 + (0xE << 2)
    ctx->pc = 0x128B70u;
    {
        const bool branch_taken_0x128b70 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x128B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B70u;
        // 0x128b74: 0x15783c  dsll32      $t7, $s5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b70) {
            ctx->pc = 0x128BACu;
            goto label_128bac;
        }
    }
    ctx->pc = 0x128B78u;
    // 0x128b78: 0x15783f  dsra32      $t7, $s5, 0
    ctx->pc = 0x128b78u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x128b7c: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x128b7cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x128b80: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x128b80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x128b84: 0x3c0d0010  lui         $t5, 0x10
    ctx->pc = 0x128b84u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16 << 16));
    // 0x128b88: 0x1ed782d  daddu       $t7, $t7, $t5
    ctx->pc = 0x128b88u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 13));
    // 0x128b8c: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x128b8cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x128b90: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x128b90u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x128b94: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x128b94u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x128b98: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x128b98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128b9c: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x128b9cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x128ba0: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x128ba0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x128ba4: 0x1000ff19  b           . + 4 + (-0xE7 << 2)
    ctx->pc = 0x128BA4u;
    {
        const bool branch_taken_0x128ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BA4u;
        // 0x128ba8: 0x2aea824  and         $s5, $s5, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ba4) {
            ctx->pc = 0x12880Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12880c;
        }
    }
    ctx->pc = 0x128BACu;
label_128bac:
    // 0x128bac: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x128bacu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x128bb0: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x128bb0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x128bb4: 0x11e0ff16  beqz        $t7, . + 4 + (-0xEA << 2)
    ctx->pc = 0x128BB4u;
    {
        const bool branch_taken_0x128bb4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BB4u;
        // 0x128bb8: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bb4) {
            ctx->pc = 0x128810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128810;
        }
    }
    ctx->pc = 0x128BBCu;
    // 0x128bbc: 0x16400013  bnez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x128BBCu;
    {
        const bool branch_taken_0x128bbc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x128bbc) {
            ctx->pc = 0x128C0Cu;
            goto label_128c0c;
        }
    }
    ctx->pc = 0x128BC4u;
    // 0x128bc4: 0xc0498a4  jal         func_126290
    ctx->pc = 0x128BC4u;
    SET_GPR_U32(ctx, 31, 0x128BCCu);
    ctx->pc = 0x128BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128BC4u;
    // 0x128bc8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126290u, 0x128BC4u, 0x128BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128BCCu;
label_128bcc:
    // 0x128bcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x128bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bd0: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x128BD0u;
    SET_GPR_U32(ctx, 31, 0x128BD8u);
    ctx->pc = 0x128BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128BD0u;
    // 0x128bd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x128BD0u, 0x128BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128BD8u;
label_128bd8:
    // 0x128bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x128bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128be0: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x128BE0u;
    SET_GPR_U32(ctx, 31, 0x128BE8u);
    ctx->pc = 0x128BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128BE0u;
    // 0x128be4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x128BE0u, 0x128BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128BE8u;
label_128be8:
    // 0x128be8: 0x1440ff09  bnez        $v0, . + 4 + (-0xF7 << 2)
    ctx->pc = 0x128BE8u;
    {
        const bool branch_taken_0x128be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BE8u;
        // 0x128bec: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128be8) {
            ctx->pc = 0x128810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128810;
        }
    }
    ctx->pc = 0x128BF0u;
label_128bf0:
    // 0x128bf0: 0x240f0022  addiu       $t7, $zero, 0x22
    ctx->pc = 0x128bf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x128bf4: 0x8fad0050  lw          $t5, 0x50($sp)
    ctx->pc = 0x128bf4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x128bf8: 0xaecf0000  sw          $t7, 0x0($s6)
    ctx->pc = 0x128bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 15));
    // 0x128bfc: 0x11a0fdeb  beqz        $t5, . + 4 + (-0x215 << 2)
    ctx->pc = 0x128BFCu;
    {
        const bool branch_taken_0x128bfc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BFCu;
        // 0x128c00: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bfc) {
            ctx->pc = 0x1283ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1283ac;
        }
    }
    ctx->pc = 0x128C04u;
    // 0x128c04: 0x1000ff02  b           . + 4 + (-0xFE << 2)
    ctx->pc = 0x128C04u;
    {
        const bool branch_taken_0x128c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C04u;
        // 0x128c08: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c04) {
            ctx->pc = 0x128810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128810;
        }
    }
    ctx->pc = 0x128C0Cu;
label_128c0c:
    // 0x128c0c: 0xc0498a4  jal         func_126290
    ctx->pc = 0x128C0Cu;
    SET_GPR_U32(ctx, 31, 0x128C14u);
    ctx->pc = 0x128C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C0Cu;
    // 0x128c10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126290u, 0x128C0Cu, 0x128C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C14u;
label_128c14:
    // 0x128c14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x128c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c18: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x128C18u;
    SET_GPR_U32(ctx, 31, 0x128C20u);
    ctx->pc = 0x128C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C18u;
    // 0x128c1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x128C18u, 0x128C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C20u;
label_128c20:
    // 0x128c20: 0x1000fefa  b           . + 4 + (-0x106 << 2)
    ctx->pc = 0x128C20u;
    {
        const bool branch_taken_0x128c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C20u;
        // 0x128c24: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c20) {
            ctx->pc = 0x12880Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12880c;
        }
    }
    ctx->pc = 0x128C28u;
label_128c28:
    // 0x128c28: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x128c28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x128c2c: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x128c2cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x128c30: 0x2af7824  and         $t7, $s5, $t7
    ctx->pc = 0x128c30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) & GPR_U64(ctx, 15));
    // 0x128c34: 0x15e0ffdd  bnez        $t7, . + 4 + (-0x23 << 2)
    ctx->pc = 0x128C34u;
    {
        const bool branch_taken_0x128c34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x128C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C34u;
        // 0x128c38: 0x15783c  dsll32      $t7, $s5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c34) {
            ctx->pc = 0x128BACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128bac;
        }
    }
    ctx->pc = 0x128C3Cu;
    // 0x128c3c: 0x1000ffb8  b           . + 4 + (-0x48 << 2)
    ctx->pc = 0x128C3Cu;
    {
        const bool branch_taken_0x128c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C3Cu;
        // 0x128c40: 0x15703f  dsra32      $t6, $s5, 0 (Delay Slot)
        SET_GPR_S64(ctx, 14, GPR_S64(ctx, 21) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c3c) {
            ctx->pc = 0x128B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128b20;
        }
    }
    ctx->pc = 0x128C44u;
    // 0x128c44: 0x0  nop
    ctx->pc = 0x128c44u;
    // NOP
label_128c48:
    // 0x128c48: 0xc049994  jal         func_126650
    ctx->pc = 0x128C48u;
    SET_GPR_U32(ctx, 31, 0x128C50u);
    ctx->pc = 0x128C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C48u;
    // 0x128c4c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126650u, 0x128C48u, 0x128C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C50u;
label_128c50:
    // 0x128c50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128c54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x128c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c5c: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x128C5Cu;
    SET_GPR_U32(ctx, 31, 0x128C64u);
    ctx->pc = 0x128C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C5Cu;
    // 0x128c60: 0x52fbc  dsll32      $a1, $a1, 30 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x128C5Cu, 0x128C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C64u;
label_128c64:
    // 0x128c64: 0x5c4000ac  bgtzl       $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x128C64u;
    {
        const bool branch_taken_0x128c64 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x128c64) {
            ctx->pc = 0x128C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128C64u;
            // 0x128c68: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128F18u;
            goto label_128f18;
        }
    }
    ctx->pc = 0x128C6Cu;
    // 0x128c6c: 0x1240008d  beqz        $s2, . + 4 + (0x8D << 2)
    ctx->pc = 0x128C6Cu;
    {
        const bool branch_taken_0x128c6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C6Cu;
        // 0x128c70: 0x240ff000  addiu       $t7, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c6c) {
            ctx->pc = 0x128EA4u;
            goto label_128ea4;
        }
    }
    ctx->pc = 0x128C74u;
    // 0x128c74: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x128c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x128c78: 0x10853c  dsll32      $s0, $s0, 20
    ctx->pc = 0x128c78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 20));
    // 0x128c7c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x128c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_128c80:
    // 0x128c80: 0x15703f  dsra32      $t6, $s5, 0
    ctx->pc = 0x128c80u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x128c84: 0x3c137ff0  lui         $s3, 0x7FF0
    ctx->pc = 0x128c84u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32752 << 16));
    // 0x128c88: 0x1d37824  and         $t7, $t6, $s3
    ctx->pc = 0x128c88u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 19));
    // 0x128c8c: 0xafaf0030  sw          $t7, 0x30($sp)
    ctx->pc = 0x128c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 15));
    // 0x128c90: 0x8fac0030  lw          $t4, 0x30($sp)
    ctx->pc = 0x128c90u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128c94: 0x3c0f7fe0  lui         $t7, 0x7FE0
    ctx->pc = 0x128c94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32736 << 16));
    // 0x128c98: 0x158f0063  bne         $t4, $t7, . + 4 + (0x63 << 2)
    ctx->pc = 0x128C98u;
    {
        const bool branch_taken_0x128c98 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 15));
        ctx->pc = 0x128C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C98u;
        // 0x128c9c: 0x3c0f0340  lui         $t7, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)832 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c98) {
            ctx->pc = 0x128E28u;
            goto label_128e28;
        }
    }
    ctx->pc = 0x128CA0u;
    // 0x128ca0: 0x3c0ffcb0  lui         $t7, 0xFCB0
    ctx->pc = 0x128ca0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64688 << 16));
    // 0x128ca4: 0xffb50040  sd          $s5, 0x40($sp)
    ctx->pc = 0x128ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 21));
    // 0x128ca8: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x128ca8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x128cac: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x128cacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128cb0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x128cb0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x128cb4: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x128cb4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x128cb8: 0x2aea824  and         $s5, $s5, $t6
    ctx->pc = 0x128cb8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 14));
    // 0x128cbc: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x128cbcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x128cc0: 0xc0498a4  jal         func_126290
    ctx->pc = 0x128CC0u;
    SET_GPR_U32(ctx, 31, 0x128CC8u);
    ctx->pc = 0x128CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128CC0u;
    // 0x128cc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126290u, 0x128CC0u, 0x128CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128CC8u;
label_128cc8:
    // 0x128cc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ccc: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x128CCCu;
    SET_GPR_U32(ctx, 31, 0x128CD4u);
    ctx->pc = 0x128CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128CCCu;
    // 0x128cd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x128CCCu, 0x128CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128CD4u;
label_128cd4:
    // 0x128cd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cd8: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x128CD8u;
    SET_GPR_U32(ctx, 31, 0x128CE0u);
    ctx->pc = 0x128CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128CD8u;
    // 0x128cdc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x128CD8u, 0x128CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128CE0u;
label_128ce0:
    // 0x128ce0: 0x3c0f7c9f  lui         $t7, 0x7C9F
    ctx->pc = 0x128ce0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)31903 << 16));
    // 0x128ce4: 0x2683f  dsra32      $t5, $v0, 0
    ctx->pc = 0x128ce4u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x128ce8: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x128ce8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x128cec: 0x1b37024  and         $t6, $t5, $s3
    ctx->pc = 0x128cecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & GPR_U64(ctx, 19));
    // 0x128cf0: 0x1ee782b  sltu        $t7, $t7, $t6
    ctx->pc = 0x128cf0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x128cf4: 0x11e0001b  beqz        $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x128CF4u;
    {
        const bool branch_taken_0x128cf4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128CF4u;
        // 0x128cf8: 0x240ff801  addiu       $t7, $zero, -0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965249));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128cf4) {
            ctx->pc = 0x128D64u;
            goto label_128d64;
        }
    }
    ctx->pc = 0x128CFCu;
    // 0x128cfc: 0xdfac0040  ld          $t4, 0x40($sp)
    ctx->pc = 0x128cfcu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x128d00: 0xf7d3c  dsll32      $t7, $t7, 20
    ctx->pc = 0x128d00u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 20));
    // 0x128d04: 0xf7827  nor         $t7, $zero, $t7
    ctx->pc = 0x128d04u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 15)));
    // 0x128d08: 0x118ffeba  beq         $t4, $t7, . + 4 + (-0x146 << 2)
    ctx->pc = 0x128D08u;
    {
        const bool branch_taken_0x128d08 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 15));
        ctx->pc = 0x128D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D08u;
        // 0x128d0c: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d08) {
            ctx->pc = 0x1287F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1287f4;
        }
    }
    ctx->pc = 0x128D10u;
    // 0x128d10: 0x3c0f7fef  lui         $t7, 0x7FEF
    ctx->pc = 0x128d10u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32751 << 16));
    // 0x128d14: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x128d14u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x128d18: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x128d18u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x128d1c: 0x4da824  and         $s5, $v0, $t5
    ctx->pc = 0x128d1cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x128d20: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x128d20u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x128d24: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x128d24u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x128d28: 0x2ada825  or          $s5, $s5, $t5
    ctx->pc = 0x128d28u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 13));
    // 0x128d2c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x128d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128d30:
    // 0x128d30: 0xc049616  jal         func_125858
    ctx->pc = 0x128D30u;
    SET_GPR_U32(ctx, 31, 0x128D38u);
    ctx->pc = 0x128D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D30u;
    // 0x128d34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x128D30u, 0x128D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D38u;
label_128d38:
    // 0x128d38: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x128d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x128d3c: 0xc049616  jal         func_125858
    ctx->pc = 0x128D3Cu;
    SET_GPR_U32(ctx, 31, 0x128D44u);
    ctx->pc = 0x128D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D3Cu;
    // 0x128d40: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x128D3Cu, 0x128D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D44u;
label_128d44:
    // 0x128d44: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x128d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d48: 0xc049616  jal         func_125858
    ctx->pc = 0x128D48u;
    SET_GPR_U32(ctx, 31, 0x128D50u);
    ctx->pc = 0x128D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D48u;
    // 0x128d4c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x128D48u, 0x128D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D50u;
label_128d50:
    // 0x128d50: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x128d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d54: 0xc049616  jal         func_125858
    ctx->pc = 0x128D54u;
    SET_GPR_U32(ctx, 31, 0x128D5Cu);
    ctx->pc = 0x128D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D54u;
    // 0x128d58: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x128D54u, 0x128D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D5Cu;
label_128d5c:
    // 0x128d5c: 0x1000fefa  b           . + 4 + (-0x106 << 2)
    ctx->pc = 0x128D5Cu;
    {
        const bool branch_taken_0x128d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D5Cu;
        // 0x128d60: 0x8faf0050  lw          $t7, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d5c) {
            ctx->pc = 0x128948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128948;
        }
    }
    ctx->pc = 0x128D64u;
label_128d64:
    // 0x128d64: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x128d64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128d68: 0x3c0f0350  lui         $t7, 0x350
    ctx->pc = 0x128d68u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)848 << 16));
    // 0x128d6c: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x128d6cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x128d70: 0x1af7821  addu        $t7, $t5, $t7
    ctx->pc = 0x128d70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x128d74: 0x4ea824  and         $s5, $v0, $t6
    ctx->pc = 0x128d74u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x128d78: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x128d78u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x128d7c: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x128d7cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
label_128d80:
    // 0x128d80: 0x8fad0030  lw          $t5, 0x30($sp)
    ctx->pc = 0x128d80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128d84: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x128d84u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x128d88: 0xd783c  dsll32      $t7, $t5, 0
    ctx->pc = 0x128d88u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) << (32 + 0));
    // 0x128d8c: 0x15683f  dsra32      $t5, $s5, 0
    ctx->pc = 0x128d8cu;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x128d90: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x128d90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x128d94: 0x1ae8824  and         $s1, $t5, $t6
    ctx->pc = 0x128d94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
    // 0x128d98: 0x15f1ffe5  bne         $t7, $s1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x128D98u;
    {
        const bool branch_taken_0x128d98 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 17));
        ctx->pc = 0x128D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D98u;
        // 0x128d9c: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d98) {
            ctx->pc = 0x128D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128d30;
        }
    }
    ctx->pc = 0x128DA0u;
    // 0x128da0: 0xc04b144  jal         func_12C510
    ctx->pc = 0x128DA0u;
    SET_GPR_U32(ctx, 31, 0x128DA8u);
    ctx->pc = 0x128DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DA0u;
    // 0x128da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C510u, 0x128DA0u, 0x128DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DA8u;
label_128da8:
    // 0x128da8: 0xc04b0ac  jal         func_12C2B0
    ctx->pc = 0x128DA8u;
    SET_GPR_U32(ctx, 31, 0x128DB0u);
    ctx->pc = 0x128DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DA8u;
    // 0x128dac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C2B0u, 0x128DA8u, 0x128DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DB0u;
label_128db0:
    // 0x128db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128db4: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x128DB4u;
    SET_GPR_U32(ctx, 31, 0x128DBCu);
    ctx->pc = 0x128DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DB4u;
    // 0x128db8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x128DB4u, 0x128DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DBCu;
label_128dbc:
    // 0x128dbc: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x128DBCu;
    {
        const bool branch_taken_0x128dbc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x128DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DBCu;
        // 0x128dc0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dbc) {
            ctx->pc = 0x128DD8u;
            goto label_128dd8;
        }
    }
    ctx->pc = 0x128DC4u;
    // 0x128dc4: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x128dc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x128dc8: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x128dc8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x128dcc: 0x2af7824  and         $t7, $s5, $t7
    ctx->pc = 0x128dccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) & GPR_U64(ctx, 15));
    // 0x128dd0: 0x11e00011  beqz        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x128DD0u;
    {
        const bool branch_taken_0x128dd0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DD0u;
        // 0x128dd4: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dd0) {
            ctx->pc = 0x128E18u;
            goto label_128e18;
        }
    }
    ctx->pc = 0x128DD8u;
label_128dd8:
    // 0x128dd8: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x128dd8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x128ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128de0: 0x25ce3d58  addiu       $t6, $t6, 0x3D58
    ctx->pc = 0x128de0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 15704));
    // 0x128de4: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x128DE4u;
    SET_GPR_U32(ctx, 31, 0x128DECu);
    ctx->pc = 0x128DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DE4u;
    // 0x128de8: 0xddc50000  ld          $a1, 0x0($t6) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x128DE4u, 0x128DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DECu;
label_128dec:
    // 0x128dec: 0x440fe87  bltz        $v0, . + 4 + (-0x179 << 2)
    ctx->pc = 0x128DECu;
    {
        const bool branch_taken_0x128dec = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x128DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DECu;
        // 0x128df0: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dec) {
            ctx->pc = 0x12880Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12880c;
        }
    }
    ctx->pc = 0x128DF4u;
    // 0x128df4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128df8: 0xdde43d60  ld          $a0, 0x3D60($t7)
    ctx->pc = 0x128df8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 15712)));
label_128dfc:
    // 0x128dfc: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x128DFCu;
    SET_GPR_U32(ctx, 31, 0x128E04u);
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x128DFCu, 0x128E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E04u;
label_128e04:
    // 0x128e04: 0x440fe82  bltz        $v0, . + 4 + (-0x17E << 2)
    ctx->pc = 0x128E04u;
    {
        const bool branch_taken_0x128e04 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x128E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E04u;
        // 0x128e08: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e04) {
            ctx->pc = 0x128810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128810;
        }
    }
    ctx->pc = 0x128E0Cu;
    // 0x128e0c: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x128E0Cu;
    {
        const bool branch_taken_0x128e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128e0c) {
            ctx->pc = 0x128D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128d30;
        }
    }
    ctx->pc = 0x128E14u;
    // 0x128e14: 0x0  nop
    ctx->pc = 0x128e14u;
    // NOP
label_128e18:
    // 0x128e18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e1c: 0x25ef3d68  addiu       $t7, $t7, 0x3D68
    ctx->pc = 0x128e1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15720));
    // 0x128e20: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x128E20u;
    {
        const bool branch_taken_0x128e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E20u;
        // 0x128e24: 0xdde50000  ld          $a1, 0x0($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e20) {
            ctx->pc = 0x128DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128dfc;
        }
    }
    ctx->pc = 0x128E28u;
label_128e28:
    // 0x128e28: 0x1ec782b  sltu        $t7, $t7, $t4
    ctx->pc = 0x128e28u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x128e2c: 0x15e00013  bnez        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x128E2Cu;
    {
        const bool branch_taken_0x128e2c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x128E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E2Cu;
        // 0x128e30: 0x240403ff  addiu       $a0, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e2c) {
            ctx->pc = 0x128E7Cu;
            goto label_128e7c;
        }
    }
    ctx->pc = 0x128E34u;
    // 0x128e34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e38: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x128E38u;
    SET_GPR_U32(ctx, 31, 0x128E40u);
    ctx->pc = 0x128E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E38u;
    // 0x128e3c: 0x4253c  dsll32      $a0, $a0, 20 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x128E38u, 0x128E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E40u;
label_128e40:
    // 0x128e40: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x128E40u;
    {
        const bool branch_taken_0x128e40 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x128E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E40u;
        // 0x128e44: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e40) {
            ctx->pc = 0x128E7Cu;
            goto label_128e7c;
        }
    }
    ctx->pc = 0x128E48u;
    // 0x128e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e4c: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x128E4Cu;
    SET_GPR_U32(ctx, 31, 0x128E54u);
    ctx->pc = 0x128E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E4Cu;
    // 0x128e50: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x128E4Cu, 0x128E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E54u;
label_128e54:
    // 0x128e54: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x128E54u;
    SET_GPR_U32(ctx, 31, 0x128E5Cu);
    ctx->pc = 0x128E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E54u;
    // 0x128e58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x128E54u, 0x128E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E5Cu;
label_128e5c:
    // 0x128e5c: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x128E5Cu;
    SET_GPR_U32(ctx, 31, 0x128E64u);
    ctx->pc = 0x128E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E5Cu;
    // 0x128e60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x128E5Cu, 0x128E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E64u;
label_128e64:
    // 0x128e64: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x128E64u;
    {
        const bool branch_taken_0x128e64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x128E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E64u;
        // 0x128e68: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e64) {
            ctx->pc = 0x128E7Cu;
            goto label_128e7c;
        }
    }
    ctx->pc = 0x128E6Cu;
    // 0x128e6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e70: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x128E70u;
    SET_GPR_U32(ctx, 31, 0x128E78u);
    ctx->pc = 0x128E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E70u;
    // 0x128e74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x128E70u, 0x128E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E78u;
label_128e78:
    // 0x128e78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x128e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_128e7c:
    // 0x128e7c: 0xc0498a4  jal         func_126290
    ctx->pc = 0x128E7Cu;
    SET_GPR_U32(ctx, 31, 0x128E84u);
    ctx->pc = 0x128E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E7Cu;
    // 0x128e80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126290u, 0x128E7Cu, 0x128E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E84u;
label_128e84:
    // 0x128e84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e88: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x128E88u;
    SET_GPR_U32(ctx, 31, 0x128E90u);
    ctx->pc = 0x128E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E88u;
    // 0x128e8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x128E88u, 0x128E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E90u;
label_128e90:
    // 0x128e90: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x128e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e94: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x128E94u;
    SET_GPR_U32(ctx, 31, 0x128E9Cu);
    ctx->pc = 0x128E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E94u;
    // 0x128e98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x128E94u, 0x128E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E9Cu;
label_128e9c:
    // 0x128e9c: 0x1000ffb8  b           . + 4 + (-0x48 << 2)
    ctx->pc = 0x128E9Cu;
    {
        const bool branch_taken_0x128e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E9Cu;
        // 0x128ea0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e9c) {
            ctx->pc = 0x128D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128d80;
        }
    }
    ctx->pc = 0x128EA4u;
label_128ea4:
    // 0x128ea4: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x128ea4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x128ea8: 0x2af7824  and         $t7, $s5, $t7
    ctx->pc = 0x128ea8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) & GPR_U64(ctx, 15));
    // 0x128eac: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x128EACu;
    {
        const bool branch_taken_0x128eac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EACu;
        // 0x128eb0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128eac) {
            ctx->pc = 0x128ECCu;
            goto label_128ecc;
        }
    }
    ctx->pc = 0x128EB4u;
    // 0x128eb4: 0x12afff4e  beq         $s5, $t7, . + 4 + (-0xB2 << 2)
    ctx->pc = 0x128EB4u;
    {
        const bool branch_taken_0x128eb4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 15));
        ctx->pc = 0x128EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EB4u;
        // 0x128eb8: 0x241003ff  addiu       $s0, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128eb4) {
            ctx->pc = 0x128BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128bf0;
        }
    }
    ctx->pc = 0x128EBCu;
    // 0x128ebc: 0x2411fbff  addiu       $s1, $zero, -0x401
    ctx->pc = 0x128ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x128ec0: 0x10853c  dsll32      $s0, $s0, 20
    ctx->pc = 0x128ec0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 20));
    // 0x128ec4: 0x1000ff6e  b           . + 4 + (-0x92 << 2)
    ctx->pc = 0x128EC4u;
    {
        const bool branch_taken_0x128ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EC4u;
        // 0x128ec8: 0x118d3c  dsll32      $s1, $s1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ec4) {
            ctx->pc = 0x128C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128c80;
        }
    }
    ctx->pc = 0x128ECCu;
label_128ecc:
    // 0x128ecc: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x128eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x128ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ed4: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x128ED4u;
    SET_GPR_U32(ctx, 31, 0x128EDCu);
    ctx->pc = 0x128ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128ED4u;
    // 0x128ed8: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x128ED4u, 0x128EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128EDCu;
label_128edc:
    // 0x128edc: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128EDCu;
    {
        const bool branch_taken_0x128edc = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x128edc) {
            ctx->pc = 0x128EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128EDCu;
            // 0x128ee0: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128F00u;
            goto label_128f00;
        }
    }
    ctx->pc = 0x128EE4u;
    // 0x128ee4: 0x241001ff  addiu       $s0, $zero, 0x1FF
    ctx->pc = 0x128ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x128ee8: 0x10857c  dsll32      $s0, $s0, 21
    ctx->pc = 0x128ee8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 21));
label_128eec:
    // 0x128eec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x128eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ef0: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x128EF0u;
    SET_GPR_U32(ctx, 31, 0x128EF8u);
    ctx->pc = 0x128EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128EF0u;
    // 0x128ef4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x128EF0u, 0x128EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128EF8u;
label_128ef8:
    // 0x128ef8: 0x1000ff61  b           . + 4 + (-0x9F << 2)
    ctx->pc = 0x128EF8u;
    {
        const bool branch_taken_0x128ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EF8u;
        // 0x128efc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ef8) {
            ctx->pc = 0x128C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128c80;
        }
    }
    ctx->pc = 0x128F00u;
label_128f00:
    // 0x128f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f04: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x128F04u;
    SET_GPR_U32(ctx, 31, 0x128F0Cu);
    ctx->pc = 0x128F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F04u;
    // 0x128f08: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x128F04u, 0x128F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F0Cu;
label_128f0c:
    // 0x128f0c: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x128F0Cu;
    {
        const bool branch_taken_0x128f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F0Cu;
        // 0x128f10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f0c) {
            ctx->pc = 0x128EECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128eec;
        }
    }
    ctx->pc = 0x128F14u;
    // 0x128f14: 0x0  nop
    ctx->pc = 0x128f14u;
    // NOP
label_128f18:
    // 0x128f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f1c: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x128F1Cu;
    SET_GPR_U32(ctx, 31, 0x128F24u);
    ctx->pc = 0x128F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F1Cu;
    // 0x128f20: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x128F1Cu, 0x128F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F24u;
label_128f24:
    // 0x128f24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x128f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f28: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x128F28u;
    {
        const bool branch_taken_0x128f28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x128F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F28u;
        // 0x128f2c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f28) {
            ctx->pc = 0x128F40u;
            goto label_128f40;
        }
    }
    ctx->pc = 0x128F30u;
    // 0x128f30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x128f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f34: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x128F34u;
    SET_GPR_U32(ctx, 31, 0x128F3Cu);
    ctx->pc = 0x128F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F34u;
    // 0x128f38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x128F34u, 0x128F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F3Cu;
label_128f3c:
    // 0x128f3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x128f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_128f40:
    // 0x128f40: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x128f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x128f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f48: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x128F48u;
    SET_GPR_U32(ctx, 31, 0x128F50u);
    ctx->pc = 0x128F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F48u;
    // 0x128f4c: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x128F48u, 0x128F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F50u;
label_128f50:
    // 0x128f50: 0x1000ff4b  b           . + 4 + (-0xB5 << 2)
    ctx->pc = 0x128F50u;
    {
        const bool branch_taken_0x128f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F50u;
        // 0x128f54: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f50) {
            ctx->pc = 0x128C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128c80;
        }
    }
    ctx->pc = 0x128F58u;
label_128f58:
    // 0x128f58: 0x8fae0054  lw          $t6, 0x54($sp)
    ctx->pc = 0x128f58u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x128f5c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x128f5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x128f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f64: 0xe9023  negu        $s2, $t6
    ctx->pc = 0x128f64u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x128f68: 0x1000fe92  b           . + 4 + (-0x16E << 2)
    ctx->pc = 0x128F68u;
    {
        const bool branch_taken_0x128f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F68u;
        // 0x128f6c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f68) {
            ctx->pc = 0x1289B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1289b4;
        }
    }
    ctx->pc = 0x128F70u;
label_128f70:
    // 0x128f70: 0x3c0f0350  lui         $t7, 0x350
    ctx->pc = 0x128f70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)848 << 16));
    // 0x128f74: 0x50a824  and         $s5, $v0, $s0
    ctx->pc = 0x128f74u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x128f78: 0x1af7821  addu        $t7, $t5, $t7
    ctx->pc = 0x128f78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x128f7c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x128f7cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x128f80: 0x1000fe67  b           . + 4 + (-0x199 << 2)
    ctx->pc = 0x128F80u;
    {
        const bool branch_taken_0x128f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F80u;
        // 0x128f84: 0x2afa825  or          $s5, $s5, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f80) {
            ctx->pc = 0x128920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128920;
        }
    }
    ctx->pc = 0x128F88u;
label_128f88:
    // 0x128f88: 0x601fe66  bgez        $s0, . + 4 + (-0x19A << 2)
    ctx->pc = 0x128F88u;
    {
        const bool branch_taken_0x128f88 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x128F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F88u;
        // 0x128f8c: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f88) {
            ctx->pc = 0x128924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128924;
        }
    }
    ctx->pc = 0x128F90u;
    // 0x128f90: 0x108023  negu        $s0, $s0
    ctx->pc = 0x128f90u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x128f94: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x128f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x128f98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128F98u;
    {
        const bool branch_taken_0x128f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F98u;
        // 0x128f9c: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f98) {
            ctx->pc = 0x128FBCu;
            goto label_128fbc;
        }
    }
    ctx->pc = 0x128FA0u;
    // 0x128fa0: 0x270c0  sll         $t6, $v0, 3
    ctx->pc = 0x128fa0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x128fa4: 0x25ef3c40  addiu       $t7, $t7, 0x3C40
    ctx->pc = 0x128fa4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15424));
    // 0x128fa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x128fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fac: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x128facu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x128fb0: 0xc04bafa  jal         func_12EBE8
    ctx->pc = 0x128FB0u;
    SET_GPR_U32(ctx, 31, 0x128FB8u);
    ctx->pc = 0x128FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128FB0u;
    // 0x128fb4: 0xddc50000  ld          $a1, 0x0($t6) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE8u, 0x128FB0u, 0x128FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128FB8u;
label_128fb8:
    // 0x128fb8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x128fb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_128fbc:
    // 0x128fbc: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x128fbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x128fc0: 0x20f8024  and         $s0, $s0, $t7
    ctx->pc = 0x128fc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 15));
    // 0x128fc4: 0x1200fe56  beqz        $s0, . + 4 + (-0x1AA << 2)
    ctx->pc = 0x128FC4u;
    {
        const bool branch_taken_0x128fc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x128FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128FC4u;
        // 0x128fc8: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128fc4) {
            ctx->pc = 0x128920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128920;
        }
    }
    ctx->pc = 0x128FCCu;
    // 0x128fcc: 0x2a0f0020  slti        $t7, $s0, 0x20
    ctx->pc = 0x128fccu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x128fd0: 0x11e0ff07  beqz        $t7, . + 4 + (-0xF9 << 2)
    ctx->pc = 0x128FD0u;
    {
        const bool branch_taken_0x128fd0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x128FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128FD0u;
        // 0x128fd4: 0x2a0f0002  slti        $t7, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128fd0) {
            ctx->pc = 0x128BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128bf0;
        }
    }
    ctx->pc = 0x128FD8u;
    // 0x128fd8: 0x15e00012  bnez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x128FD8u;
    {
        const bool branch_taken_0x128fd8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x128FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128FD8u;
        // 0x128fdc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128fd8) {
            ctx->pc = 0x129024u;
            goto label_129024;
        }
    }
    ctx->pc = 0x128FE0u;
    // 0x128fe0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x128fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fe4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x128fe4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x128fe8: 0x180982d  daddu       $s3, $t4, $zero
    ctx->pc = 0x128fe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fec: 0x25f03d30  addiu       $s0, $t7, 0x3D30
    ctx->pc = 0x128fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 15664));
label_128ff0:
    // 0x128ff0: 0x322f0001  andi        $t7, $s1, 0x1
    ctx->pc = 0x128ff0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x128ff4: 0x51e00006  beql        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x128FF4u;
    {
        const bool branch_taken_0x128ff4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x128ff4) {
            ctx->pc = 0x128FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128FF4u;
            // 0x128ff8: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129010u;
            goto label_129010;
        }
    }
    ctx->pc = 0x128FFCu;
    // 0x128ffc: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x128ffcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x129000: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x129000u;
    SET_GPR_U32(ctx, 31, 0x129008u);
    ctx->pc = 0x129004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129000u;
    // 0x129004: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x129000u, 0x129008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129008u;
label_129008:
    // 0x129008: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x129008u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12900c: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x12900cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
label_129010:
    // 0x129010: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x129010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x129014: 0x2a2f0002  slti        $t7, $s1, 0x2
    ctx->pc = 0x129014u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x129018: 0x11e0fff5  beqz        $t7, . + 4 + (-0xB << 2)
    ctx->pc = 0x129018u;
    {
        const bool branch_taken_0x129018 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129018u;
        // 0x12901c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129018) {
            ctx->pc = 0x128FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128ff0;
        }
    }
    ctx->pc = 0x129020u;
    // 0x129020: 0x260602d  daddu       $t4, $s3, $zero
    ctx->pc = 0x129020u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_129024:
    // 0x129024: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x129024u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x129028: 0xffb50040  sd          $s5, 0x40($sp)
    ctx->pc = 0x129028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 21));
    // 0x12902c: 0xc70c0  sll         $t6, $t4, 3
    ctx->pc = 0x12902cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x129030: 0x25ef3d30  addiu       $t7, $t7, 0x3D30
    ctx->pc = 0x129030u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15664));
    // 0x129034: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x129034u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x129038: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x129038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12903c: 0xddd00000  ld          $s0, 0x0($t6)
    ctx->pc = 0x12903cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x129040: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x129040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129044: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x129044u;
    SET_GPR_U32(ctx, 31, 0x12904Cu);
    ctx->pc = 0x129048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129044u;
    // 0x129048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x129044u, 0x12904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12904Cu;
label_12904c:
    // 0x12904c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12904cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129050: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x129050u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129054: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x129054u;
    SET_GPR_U32(ctx, 31, 0x12905Cu);
    ctx->pc = 0x129058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129054u;
    // 0x129058: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x129054u, 0x12905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12905Cu;
label_12905c:
    // 0x12905c: 0x5440fe31  bnel        $v0, $zero, . + 4 + (-0x1CF << 2)
    ctx->pc = 0x12905Cu;
    {
        const bool branch_taken_0x12905c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12905c) {
            ctx->pc = 0x129060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12905Cu;
            // 0x129060: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128924;
        }
    }
    ctx->pc = 0x129064u;
    // 0x129064: 0xdfa40040  ld          $a0, 0x40($sp)
    ctx->pc = 0x129064u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129068: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x129068u;
    SET_GPR_U32(ctx, 31, 0x129070u);
    ctx->pc = 0x12906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129068u;
    // 0x12906c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x129068u, 0x129070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129070u;
label_129070:
    // 0x129070: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x129070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129074: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x129074u;
    SET_GPR_U32(ctx, 31, 0x12907Cu);
    ctx->pc = 0x129078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129074u;
    // 0x129078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x129074u, 0x12907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12907Cu;
label_12907c:
    // 0x12907c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12907cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129080: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x129080u;
    SET_GPR_U32(ctx, 31, 0x129088u);
    ctx->pc = 0x129084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129080u;
    // 0x129084: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x129080u, 0x129088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129088u;
label_129088:
    // 0x129088: 0x1040fed9  beqz        $v0, . + 4 + (-0x127 << 2)
    ctx->pc = 0x129088u;
    {
        const bool branch_taken_0x129088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129088u;
        // 0x12908c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129088) {
            ctx->pc = 0x128BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128bf0;
        }
    }
    ctx->pc = 0x129090u;
    // 0x129090: 0x1000fe24  b           . + 4 + (-0x1DC << 2)
    ctx->pc = 0x129090u;
    {
        const bool branch_taken_0x129090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129090u;
        // 0x129094: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129090) {
            ctx->pc = 0x128924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128924;
        }
    }
    ctx->pc = 0x129098u;
label_129098:
    // 0x129098: 0x11787a  dsrl        $t7, $s1, 1
    ctx->pc = 0x129098u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) >> 1);
    // 0x12909c: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x12909cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1290a0: 0xc04b0ac  jal         func_12C2B0
    ctx->pc = 0x1290A0u;
    SET_GPR_U32(ctx, 31, 0x1290A8u);
    ctx->pc = 0x1290A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1290A0u;
    // 0x1290a4: 0x8f2025  or          $a0, $a0, $t7 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C2B0u, 0x1290A0u, 0x1290A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1290A8u;
label_1290a8:
    // 0x1290a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1290a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1290ac: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x1290ACu;
    SET_GPR_U32(ctx, 31, 0x1290B4u);
    ctx->pc = 0x1290B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1290ACu;
    // 0x1290b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x1290ACu, 0x1290B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1290B4u;
label_1290b4:
    // 0x1290b4: 0x1000fdb8  b           . + 4 + (-0x248 << 2)
    ctx->pc = 0x1290B4u;
    {
        const bool branch_taken_0x1290b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1290B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290B4u;
        // 0x1290b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290b4) {
            ctx->pc = 0x128798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128798;
        }
    }
    ctx->pc = 0x1290BCu;
label_1290bc:
    // 0x1290bc: 0x1000fd8a  b           . + 4 + (-0x276 << 2)
label_1290c0:
    if (ctx->pc == 0x1290C0u) {
        ctx->pc = 0x1290C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290BCu;
        // 0x1290c0: 0xffa00018  sd          $zero, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1290C4u;
        goto label_1290c4;
    }
    ctx->pc = 0x1290BCu;
    {
        const bool branch_taken_0x1290bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1290C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290BCu;
        // 0x1290c0: 0xffa00018  sd          $zero, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290bc) {
            ctx->pc = 0x1286E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1286e8;
        }
    }
    ctx->pc = 0x1290C4u;
label_1290c4:
    // 0x1290c4: 0x1000fd88  b           . + 4 + (-0x278 << 2)
    ctx->pc = 0x1290C4u;
    {
        const bool branch_taken_0x1290c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1290C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290C4u;
        // 0x1290c8: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290c4) {
            ctx->pc = 0x1286E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1286e8;
        }
    }
    ctx->pc = 0x1290CCu;
label_1290cc:
    // 0x1290cc: 0x2a4f0011  slti        $t7, $s2, 0x11
    ctx->pc = 0x1290ccu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1290d0: 0x11e0fd2f  beqz        $t7, . + 4 + (-0x2D1 << 2)
    ctx->pc = 0x1290D0u;
    {
        const bool branch_taken_0x1290d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1290D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290D0u;
        // 0x1290d4: 0x1178b8  dsll        $t7, $s1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290d0) {
            ctx->pc = 0x128590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128590;
        }
    }
    ctx->pc = 0x1290D8u;
    // 0x1290d8: 0x1f1782d  daddu       $t7, $t7, $s1
    ctx->pc = 0x1290d8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 17));
    // 0x1290dc: 0xf7878  dsll        $t7, $t7, 1
    ctx->pc = 0x1290dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 1);
    // 0x1290e0: 0x1000fd2b  b           . + 4 + (-0x2D5 << 2)
    ctx->pc = 0x1290E0u;
    {
        const bool branch_taken_0x1290e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1290E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290E0u;
        // 0x1290e4: 0x16f882d  daddu       $s1, $t3, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290e0) {
            ctx->pc = 0x128590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128590;
        }
    }
    ctx->pc = 0x1290E8u;
label_1290e8:
    // 0x1290e8: 0x28ef0011  slti        $t7, $a3, 0x11
    ctx->pc = 0x1290e8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1290ec: 0x11e0fd1b  beqz        $t7, . + 4 + (-0x2E5 << 2)
    ctx->pc = 0x1290ECu;
    {
        const bool branch_taken_0x1290ec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1290F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290ECu;
        // 0x1290f0: 0x1178b8  dsll        $t7, $s1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290ec) {
            ctx->pc = 0x12855Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12855c;
        }
    }
    ctx->pc = 0x1290F4u;
    // 0x1290f4: 0x1f1782d  daddu       $t7, $t7, $s1
    ctx->pc = 0x1290f4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 17));
    // 0x1290f8: 0x1000fd18  b           . + 4 + (-0x2E8 << 2)
    ctx->pc = 0x1290F8u;
    {
        const bool branch_taken_0x1290f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1290FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290F8u;
        // 0x1290fc: 0xf8878  dsll        $s1, $t7, 1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 15) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290f8) {
            ctx->pc = 0x12855Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12855c;
        }
    }
    ctx->pc = 0x129100u;
label_129100:
    // 0x129100: 0x248bffd0  addiu       $t3, $a0, -0x30
    ctx->pc = 0x129100u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x129104: 0x2d6f000a  sltiu       $t7, $t3, 0xA
    ctx->pc = 0x129104u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x129108: 0x11e0fd29  beqz        $t7, . + 4 + (-0x2D7 << 2)
    ctx->pc = 0x129108u;
    {
        const bool branch_taken_0x129108 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129108u;
        // 0x12910c: 0x240f0065  addiu       $t7, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129108) {
            ctx->pc = 0x1285B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1285b0;
        }
    }
    ctx->pc = 0x129110u;
    // 0x129110: 0x1000fd04  b           . + 4 + (-0x2FC << 2)
    ctx->pc = 0x129110u;
    {
        const bool branch_taken_0x129110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129110) {
            ctx->pc = 0x128524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128524;
        }
    }
    ctx->pc = 0x129118u;
label_129118:
    // 0x129118: 0x2a4f0010  slti        $t7, $s2, 0x10
    ctx->pc = 0x129118u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x12911c: 0x11e0fcde  beqz        $t7, . + 4 + (-0x322 << 2)
    ctx->pc = 0x12911Cu;
    {
        const bool branch_taken_0x12911c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12911Cu;
        // 0x129120: 0x1178b8  dsll        $t7, $s1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12911c) {
            ctx->pc = 0x128498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128498;
        }
    }
    ctx->pc = 0x129124u;
    // 0x129124: 0x1f1782d  daddu       $t7, $t7, $s1
    ctx->pc = 0x129124u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 17));
    // 0x129128: 0xf7878  dsll        $t7, $t7, 1
    ctx->pc = 0x129128u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 1);
    // 0x12912c: 0x8f782d  daddu       $t7, $a0, $t7
    ctx->pc = 0x12912cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 15));
    // 0x129130: 0x1000fcd9  b           . + 4 + (-0x327 << 2)
    ctx->pc = 0x129130u;
    {
        const bool branch_taken_0x129130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129130u;
        // 0x129134: 0x65f1ffd0  daddiu      $s1, $t7, -0x30 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 15) + (int64_t)(int32_t)4294967248);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129130) {
            ctx->pc = 0x128498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128498;
        }
    }
    ctx->pc = 0x129138u;
label_129138:
    // 0x129138: 0x1000fc89  b           . + 4 + (-0x377 << 2)
    ctx->pc = 0x129138u;
    {
        const bool branch_taken_0x129138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129138u;
        // 0x12913c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129138) {
            ctx->pc = 0x128360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128360;
        }
    }
    ctx->pc = 0x129140u;
}
