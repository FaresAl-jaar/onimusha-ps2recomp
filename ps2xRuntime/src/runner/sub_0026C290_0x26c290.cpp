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

// Function: sub_0026C290
// Address: 0x26c290 - 0x26df30
void sub_0026C290_0x26c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C290_0x26c290");
#endif

    switch (ctx->pc) {
        case 0x26c2b8u: goto label_26c2b8;
        case 0x26c2e8u: goto label_26c2e8;
        case 0x26c388u: goto label_26c388;
        case 0x26c3bcu: goto label_26c3bc;
        case 0x26c3ccu: goto label_26c3cc;
        case 0x26c3d8u: goto label_26c3d8;
        case 0x26c534u: goto label_26c534;
        case 0x26c5c0u: goto label_26c5c0;
        case 0x26c618u: goto label_26c618;
        case 0x26c694u: goto label_26c694;
        case 0x26c714u: goto label_26c714;
        case 0x26c794u: goto label_26c794;
        case 0x26c814u: goto label_26c814;
        case 0x26c894u: goto label_26c894;
        case 0x26c914u: goto label_26c914;
        case 0x26c97cu: goto label_26c97c;
        case 0x26ca00u: goto label_26ca00;
        case 0x26ca88u: goto label_26ca88;
        case 0x26cadcu: goto label_26cadc;
        case 0x26cb44u: goto label_26cb44;
        case 0x26cbb4u: goto label_26cbb4;
        case 0x26cbe8u: goto label_26cbe8;
        case 0x26cbf4u: goto label_26cbf4;
        case 0x26cc14u: goto label_26cc14;
        case 0x26cc48u: goto label_26cc48;
        case 0x26cc9cu: goto label_26cc9c;
        case 0x26ccd0u: goto label_26ccd0;
        case 0x26ccdcu: goto label_26ccdc;
        case 0x26ccfcu: goto label_26ccfc;
        case 0x26cd30u: goto label_26cd30;
        case 0x26cd84u: goto label_26cd84;
        case 0x26cdb8u: goto label_26cdb8;
        case 0x26cdc4u: goto label_26cdc4;
        case 0x26cde4u: goto label_26cde4;
        case 0x26ce18u: goto label_26ce18;
        case 0x26ce6cu: goto label_26ce6c;
        case 0x26ce78u: goto label_26ce78;
        case 0x26ce98u: goto label_26ce98;
        case 0x26cec4u: goto label_26cec4;
        case 0x26cf08u: goto label_26cf08;
        case 0x26cf3cu: goto label_26cf3c;
        case 0x26cf4cu: goto label_26cf4c;
        case 0x26cfb4u: goto label_26cfb4;
        case 0x26d0bcu: goto label_26d0bc;
        case 0x26d1ecu: goto label_26d1ec;
        case 0x26d22cu: goto label_26d22c;
        case 0x26d264u: goto label_26d264;
        case 0x26d270u: goto label_26d270;
        case 0x26d290u: goto label_26d290;
        case 0x26d38cu: goto label_26d38c;
        case 0x26d3e4u: goto label_26d3e4;
        case 0x26d43cu: goto label_26d43c;
        case 0x26d494u: goto label_26d494;
        case 0x26d4c8u: goto label_26d4c8;
        case 0x26d51cu: goto label_26d51c;
        case 0x26d55cu: goto label_26d55c;
        case 0x26d594u: goto label_26d594;
        case 0x26d5a0u: goto label_26d5a0;
        case 0x26d5d8u: goto label_26d5d8;
        case 0x26d634u: goto label_26d634;
        case 0x26d674u: goto label_26d674;
        case 0x26d6acu: goto label_26d6ac;
        case 0x26d6b8u: goto label_26d6b8;
        case 0x26d6f0u: goto label_26d6f0;
        case 0x26d744u: goto label_26d744;
        case 0x26d8dcu: goto label_26d8dc;
        case 0x26d984u: goto label_26d984;
        case 0x26db2cu: goto label_26db2c;
        case 0x26dbd4u: goto label_26dbd4;
        case 0x26dd1cu: goto label_26dd1c;
        case 0x26dd58u: goto label_26dd58;
        case 0x26dd78u: goto label_26dd78;
        case 0x26dda4u: goto label_26dda4;
        case 0x26ddfcu: goto label_26ddfc;
        case 0x26de14u: goto label_26de14;
        case 0x26de2cu: goto label_26de2c;
        case 0x26de50u: goto label_26de50;
        case 0x26de5cu: goto label_26de5c;
        case 0x26de6cu: goto label_26de6c;
        case 0x26dea4u: goto label_26dea4;
        case 0x26debcu: goto label_26debc;
        case 0x26ded4u: goto label_26ded4;
        case 0x26dedcu: goto label_26dedc;
        case 0x26dee8u: goto label_26dee8;
        case 0x26df04u: goto label_26df04;
        case 0x26df14u: goto label_26df14;
        default: break;
    }

    ctx->pc = 0x26c290u;

    // 0x26c290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26c290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26c294: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x26c294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x26c298: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26c298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26c29c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c2a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26c2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26c2a4: 0x24a520f0  addiu       $a1, $a1, 0x20F0
    ctx->pc = 0x26c2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8432));
    // 0x26c2a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26c2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c2ac: 0x3c038060  lui         $v1, 0x8060
    ctx->pc = 0x26c2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32864 << 16));
    // 0x26c2b0: 0x34646060  ori         $a0, $v1, 0x6060
    ctx->pc = 0x26c2b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24672);
    // 0x26c2b4: 0x0  nop
    ctx->pc = 0x26c2b4u;
    // NOP
label_26c2b8:
    // 0x26c2b8: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x26c2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
    // 0x26c2bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x26c2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x26c2c0: 0xaca4002c  sw          $a0, 0x2C($a1)
    ctx->pc = 0x26c2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 4));
    // 0x26c2c4: 0x2cc30009  sltiu       $v1, $a2, 0x9
    ctx->pc = 0x26c2c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x26c2c8: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x26c2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x26c2cc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26C2CCu;
    {
        const bool branch_taken_0x26c2cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c2cc) {
            ctx->pc = 0x26C2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26c2b8;
        }
    }
    ctx->pc = 0x26C2D4u;
    // 0x26c2d4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x26c2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x26c2d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26c2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c2dc: 0x24c622a0  addiu       $a2, $a2, 0x22A0
    ctx->pc = 0x26c2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8864));
    // 0x26c2e0: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x26c2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
    // 0x26c2e4: 0x34644040  ori         $a0, $v1, 0x4040
    ctx->pc = 0x26c2e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16448);
label_26c2e8:
    // 0x26c2e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26c2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26c2ec: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x26c2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
    // 0x26c2f0: 0x2ca30004  sltiu       $v1, $a1, 0x4
    ctx->pc = 0x26c2f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x26c2f4: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x26c2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x26c2f8: 0x0  nop
    ctx->pc = 0x26c2f8u;
    // NOP
    // 0x26c2fc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26C2FCu;
    {
        const bool branch_taken_0x26c2fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c2fc) {
            ctx->pc = 0x26C2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26c2e8;
        }
    }
    ctx->pc = 0x26C304u;
    // 0x26c304: 0x920300a0  lbu         $v1, 0xA0($s0)
    ctx->pc = 0x26c304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x26c308: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x26c308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x26c30c: 0x2c61000d  sltiu       $at, $v1, 0xD
    ctx->pc = 0x26c30cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x26c310: 0x10200703  beqz        $at, . + 4 + (0x703 << 2)
    ctx->pc = 0x26C310u;
    {
        const bool branch_taken_0x26c310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C310u;
        // 0x26c314: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c310) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26C318u;
    // 0x26c318: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26c318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26c31c: 0x24845990  addiu       $a0, $a0, 0x5990
    ctx->pc = 0x26c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22928));
    // 0x26c320: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26c320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26c324: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x26c324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c328: 0x600008  jr          $v1
    ctx->pc = 0x26C328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26C330u: goto label_26c330;
            case 0x26D198u: goto label_26d198;
            case 0x26D2B0u: goto label_26d2b0;
            case 0x26D5E0u: goto label_26d5e0;
            case 0x26D6F8u: goto label_26d6f8;
            case 0x26D870u: goto label_26d870;
            case 0x26DAC0u: goto label_26dac0;
            case 0x26DD10u: goto label_26dd10;
            case 0x26DD98u: goto label_26dd98;
            case 0x26DE40u: goto label_26de40;
            case 0x26DE50u: goto label_26de50;
            case 0x26DEF8u: goto label_26def8;
            case 0x26DF20u: goto label_26df20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C328u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26C330u;
label_26c330:
    // 0x26c330: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26c330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26c334: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x26c334u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x26c338: 0x30634008  andi        $v1, $v1, 0x4008
    ctx->pc = 0x26c338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16392);
    // 0x26c33c: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x26C33Cu;
    {
        const bool branch_taken_0x26c33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c33c) {
            ctx->pc = 0x26C410u;
            goto label_26c410;
        }
    }
    ctx->pc = 0x26C344u;
    // 0x26c344: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26c344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26c348: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x26c348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x26c34c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26c34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26c350: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x26C350u;
    {
        const bool branch_taken_0x26c350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C350u;
        // 0x26c354: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c350) {
            ctx->pc = 0x26C3C0u;
            goto label_26c3c0;
        }
    }
    ctx->pc = 0x26C358u;
    // 0x26c358: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26c358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26c35c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26c35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26c360: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26c360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26c364: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26c364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26c368: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c36c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26c36cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26c370: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c374: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c378: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26c378u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c37c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26c37cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c380: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26C380u;
    SET_GPR_U32(ctx, 31, 0x26C388u);
    ctx->pc = 0x26C384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C380u;
    // 0x26c384: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26C380u, 0x26C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C388u;
label_26c388:
    // 0x26c388: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c38c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26c390: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26c390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26c394: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26c394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26c398: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x26c398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x26c39c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3a0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26c3a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26c3a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c3a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26c3acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26c3b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3b4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26C3B4u;
    SET_GPR_U32(ctx, 31, 0x26C3BCu);
    ctx->pc = 0x26C3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C3B4u;
    // 0x26c3b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26C3B4u, 0x26C3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3BCu;
label_26c3bc:
    // 0x26c3bc: 0x0  nop
    ctx->pc = 0x26c3bcu;
    // NOP
label_26c3c0:
    // 0x26c3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3c4: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x26C3C4u;
    SET_GPR_U32(ctx, 31, 0x26C3CCu);
    ctx->pc = 0x26C3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C3C4u;
    // 0x26c3c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x26C3C4u, 0x26C3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3CCu;
label_26c3cc:
    // 0x26c3cc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26c3d0: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x26C3D0u;
    SET_GPR_U32(ctx, 31, 0x26C3D8u);
    ctx->pc = 0x26C3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C3D0u;
    // 0x26c3d4: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x26C3D0u, 0x26C3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3D8u;
label_26c3d8:
    // 0x26c3d8: 0xa20000a0  sb          $zero, 0xA0($s0)
    ctx->pc = 0x26c3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c3dc: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26c3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26c3e0: 0xa20000a2  sb          $zero, 0xA2($s0)
    ctx->pc = 0x26c3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 162), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c3e4: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x26c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x26c3e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26c3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26c3ec: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x26c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
    // 0x26c3f0: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x26c3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x26c3f4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x26c3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x26c3f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C3F8u;
    {
        const bool branch_taken_0x26c3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3F8u;
        // 0x26c3fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3f8) {
            ctx->pc = 0x26C408u;
            goto label_26c408;
        }
    }
    ctx->pc = 0x26C400u;
    // 0x26c400: 0xa20300ab  sb          $v1, 0xAB($s0)
    ctx->pc = 0x26c400u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 171), (uint8_t)GPR_U32(ctx, 3));
    // 0x26c404: 0x0  nop
    ctx->pc = 0x26c404u;
    // NOP
label_26c408:
    // 0x26c408: 0x100006c5  b           . + 4 + (0x6C5 << 2)
    ctx->pc = 0x26C408u;
    {
        const bool branch_taken_0x26c408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c408) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26C410u;
label_26c410:
    // 0x26c410: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x26c410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x26c414: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26c414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26c418: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x26c418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
    // 0x26c41c: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x26c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x26c420: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x26c420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x26c424: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x26c424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
    // 0x26c428: 0x820500a4  lb          $a1, 0xA4($s0)
    ctx->pc = 0x26c428u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26c42c: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x26c42cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x26c430: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x26C430u;
    {
        const bool branch_taken_0x26c430 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C430u;
        // 0x26c434: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c430) {
            ctx->pc = 0x26C4B0u;
            goto label_26c4b0;
        }
    }
    ctx->pc = 0x26C438u;
    // 0x26c438: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x26c438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x26c43c: 0x8c24ea20  lw          $a0, -0x15E0($at)
    ctx->pc = 0x26c43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
    // 0x26c440: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x26c440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x26c444: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26c444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26c448: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26C448u;
    {
        const bool branch_taken_0x26c448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C448u;
        // 0x26c44c: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c448) {
            ctx->pc = 0x26C478u;
            goto label_26c478;
        }
    }
    ctx->pc = 0x26C450u;
    // 0x26c450: 0x3c0480b0  lui         $a0, 0x80B0
    ctx->pc = 0x26c450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32944 << 16));
    // 0x26c454: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26c454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26c458: 0x3485b0b0  ori         $a1, $a0, 0xB0B0
    ctx->pc = 0x26c458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45232);
    // 0x26c45c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x26c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x26c460: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x26c460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x26c464: 0x24632104  addiu       $v1, $v1, 0x2104
    ctx->pc = 0x26c464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8452));
    // 0x26c468: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26c468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26c46c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26C46Cu;
    {
        const bool branch_taken_0x26c46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C46Cu;
        // 0x26c470: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c46c) {
            ctx->pc = 0x26C4B0u;
            goto label_26c4b0;
        }
    }
    ctx->pc = 0x26C474u;
    // 0x26c474: 0x0  nop
    ctx->pc = 0x26c474u;
    // NOP
label_26c478:
    // 0x26c478: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26c478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26c47c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x26c47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x26c480: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26c480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26c484: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26C484u;
    {
        const bool branch_taken_0x26c484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C484u;
        // 0x26c488: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c484) {
            ctx->pc = 0x26C4B0u;
            goto label_26c4b0;
        }
    }
    ctx->pc = 0x26C48Cu;
    // 0x26c48c: 0x3c0480b0  lui         $a0, 0x80B0
    ctx->pc = 0x26c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32944 << 16));
    // 0x26c490: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26c490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26c494: 0x3485b0b0  ori         $a1, $a0, 0xB0B0
    ctx->pc = 0x26c494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45232);
    // 0x26c498: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x26c498u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x26c49c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x26c49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x26c4a0: 0x2463211c  addiu       $v1, $v1, 0x211C
    ctx->pc = 0x26c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8476));
    // 0x26c4a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26c4a8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x26c4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x26c4ac: 0x0  nop
    ctx->pc = 0x26c4acu;
    // NOP
label_26c4b0:
    // 0x26c4b0: 0x820300a4  lb          $v1, 0xA4($s0)
    ctx->pc = 0x26c4b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26c4b4: 0x2c61000e  sltiu       $at, $v1, 0xE
    ctx->pc = 0x26c4b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x26c4b8: 0x102002ab  beqz        $at, . + 4 + (0x2AB << 2)
    ctx->pc = 0x26C4B8u;
    {
        const bool branch_taken_0x26c4b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4B8u;
        // 0x26c4bc: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4b8) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C4C0u;
    // 0x26c4c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26c4c4: 0x24845950  addiu       $a0, $a0, 0x5950
    ctx->pc = 0x26c4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22864));
    // 0x26c4c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26c4cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x26c4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c4d0: 0x600008  jr          $v1
    ctx->pc = 0x26C4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26C4D8u: goto label_26c4d8;
            case 0x26C648u: goto label_26c648;
            case 0x26C6C8u: goto label_26c6c8;
            case 0x26C748u: goto label_26c748;
            case 0x26C7C8u: goto label_26c7c8;
            case 0x26C848u: goto label_26c848;
            case 0x26C8C8u: goto label_26c8c8;
            case 0x26C9A8u: goto label_26c9a8;
            case 0x26CA90u: goto label_26ca90;
            case 0x26CB70u: goto label_26cb70;
            case 0x26CC58u: goto label_26cc58;
            case 0x26CD40u: goto label_26cd40;
            case 0x26CE28u: goto label_26ce28;
            case 0x26CEA8u: goto label_26cea8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C4D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26C4D8u;
label_26c4d8:
    // 0x26c4d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26c4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26c4dc: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x26c4dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x26c4e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26c4e4: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x26C4E4u;
    {
        const bool branch_taken_0x26c4e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4E4u;
        // 0x26c4e8: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4e4) {
            ctx->pc = 0x26C568u;
            goto label_26c568;
        }
    }
    ctx->pc = 0x26C4ECu;
    // 0x26c4ec: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x26c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x26c4f0: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x26c4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961704)));
    // 0x26c4f4: 0x346300a0  ori         $v1, $v1, 0xA0
    ctx->pc = 0x26c4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x26c4f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26c4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26c4fc: 0x1060029a  beqz        $v1, . + 4 + (0x29A << 2)
    ctx->pc = 0x26C4FCu;
    {
        const bool branch_taken_0x26c4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c4fc) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C504u;
    // 0x26c504: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c508: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26c508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26c50c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26c510: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26c510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26c514: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x26c514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x26c518: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c51c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c51cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c520: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c524: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26c524u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c528: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26c528u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c52c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26C52Cu;
    SET_GPR_U32(ctx, 31, 0x26C534u);
    ctx->pc = 0x26C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C52Cu;
    // 0x26c530: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26C52Cu, 0x26C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C534u;
label_26c534:
    // 0x26c534: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x26c534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26c538: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x26c538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x26c53c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x26c53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x26c540: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C540u;
    {
        const bool branch_taken_0x26c540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C540u;
        // 0x26c544: 0x5187c  dsll32      $v1, $a1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c540) {
            ctx->pc = 0x26C558u;
            goto label_26c558;
        }
    }
    ctx->pc = 0x26C548u;
    // 0x26c548: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x26c548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x26c54c: 0x10000286  b           . + 4 + (0x286 << 2)
    ctx->pc = 0x26C54Cu;
    {
        const bool branch_taken_0x26c54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C54Cu;
        // 0x26c550: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c54c) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C554u;
    // 0x26c554: 0x0  nop
    ctx->pc = 0x26c554u;
    // NOP
label_26c558:
    // 0x26c558: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x26c558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x26c55c: 0x10000282  b           . + 4 + (0x282 << 2)
    ctx->pc = 0x26C55Cu;
    {
        const bool branch_taken_0x26c55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C55Cu;
        // 0x26c560: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c55c) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C564u;
    // 0x26c564: 0x0  nop
    ctx->pc = 0x26c564u;
    // NOP
label_26c568:
    // 0x26c568: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26c568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26c56c: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x26c56cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x26c570: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x26c570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x26c574: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x26c574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x26c578: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26c578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26c57c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x26C57Cu;
    {
        const bool branch_taken_0x26c57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c57c) {
            ctx->pc = 0x26C5C8u;
            goto label_26c5c8;
        }
    }
    ctx->pc = 0x26C584u;
    // 0x26c584: 0x92030098  lbu         $v1, 0x98($s0)
    ctx->pc = 0x26c584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x26c588: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26c588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26c58c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c590: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26c590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26c594: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x26c594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x26c598: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c59c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c59cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c5a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c5a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c5a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26c5a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c5a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26c5a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c5ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26c5acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c5b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26c5b4: 0xa2030098  sb          $v1, 0x98($s0)
    ctx->pc = 0x26c5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 3));
    // 0x26c5b8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26C5B8u;
    SET_GPR_U32(ctx, 31, 0x26C5C0u);
    ctx->pc = 0x26C5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C5B8u;
    // 0x26c5bc: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26C5B8u, 0x26C5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C5C0u;
label_26c5c0:
    // 0x26c5c0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26C5C0u;
    {
        const bool branch_taken_0x26c5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c5c0) {
            ctx->pc = 0x26C618u;
            goto label_26c618;
        }
    }
    ctx->pc = 0x26C5C8u;
label_26c5c8:
    // 0x26c5c8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26c5cc: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x26c5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x26c5d0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26c5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26c5d4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x26C5D4u;
    {
        const bool branch_taken_0x26c5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c5d4) {
            ctx->pc = 0x26C618u;
            goto label_26c618;
        }
    }
    ctx->pc = 0x26C5DCu;
    // 0x26c5dc: 0x92030098  lbu         $v1, 0x98($s0)
    ctx->pc = 0x26c5dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x26c5e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26c5e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c5e8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26c5ec: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x26c5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x26c5f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c5f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c5f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c5f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c5f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c5fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26c5fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c600: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26c600u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c604: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26c604u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c608: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26c608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26c60c: 0xa2030098  sb          $v1, 0x98($s0)
    ctx->pc = 0x26c60cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 3));
    // 0x26c610: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26C610u;
    SET_GPR_U32(ctx, 31, 0x26C618u);
    ctx->pc = 0x26C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C610u;
    // 0x26c614: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26C610u, 0x26C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C618u;
label_26c618:
    // 0x26c618: 0x92030098  lbu         $v1, 0x98($s0)
    ctx->pc = 0x26c618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x26c61c: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x26c61cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26c620: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C620u;
    {
        const bool branch_taken_0x26c620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C620u;
        // 0x26c624: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c620) {
            ctx->pc = 0x26C630u;
            goto label_26c630;
        }
    }
    ctx->pc = 0x26C628u;
    // 0x26c628: 0xa2030098  sb          $v1, 0x98($s0)
    ctx->pc = 0x26c628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 3));
    // 0x26c62c: 0x0  nop
    ctx->pc = 0x26c62cu;
    // NOP
label_26c630:
    // 0x26c630: 0x92030098  lbu         $v1, 0x98($s0)
    ctx->pc = 0x26c630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x26c634: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x26c634u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x26c638: 0x1420024b  bnez        $at, . + 4 + (0x24B << 2)
    ctx->pc = 0x26C638u;
    {
        const bool branch_taken_0x26c638 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C638u;
        // 0x26c63c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c638) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C640u;
    // 0x26c640: 0x10000249  b           . + 4 + (0x249 << 2)
    ctx->pc = 0x26C640u;
    {
        const bool branch_taken_0x26c640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C640u;
        // 0x26c644: 0xa2030098  sb          $v1, 0x98($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c640) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C648u;
label_26c648:
    // 0x26c648: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26c648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26c64c: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x26c64cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x26c650: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x26c650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x26c654: 0x346300a0  ori         $v1, $v1, 0xA0
    ctx->pc = 0x26c654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x26c658: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26c658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26c65c: 0x10600242  beqz        $v1, . + 4 + (0x242 << 2)
    ctx->pc = 0x26C65Cu;
    {
        const bool branch_taken_0x26c65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c65c) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C664u;
    // 0x26c664: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c668: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26c668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26c66c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26c66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26c670: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26c670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26c674: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x26c674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x26c678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c67c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c67cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c680: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c684: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26c684u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c688: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26c688u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c68c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26C68Cu;
    SET_GPR_U32(ctx, 31, 0x26C694u);
    ctx->pc = 0x26C690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C68Cu;
    // 0x26c690: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26C68Cu, 0x26C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C694u;
label_26c694:
    // 0x26c694: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x26c694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26c698: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x26c698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x26c69c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x26c69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x26c6a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C6A0u;
    {
        const bool branch_taken_0x26c6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6A0u;
        // 0x26c6a4: 0x3c03bfff  lui         $v1, 0xBFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6a0) {
            ctx->pc = 0x26C6B8u;
            goto label_26c6b8;
        }
    }
    ctx->pc = 0x26C6A8u;
    // 0x26c6a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26c6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26c6ac: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x26c6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x26c6b0: 0x1000022d  b           . + 4 + (0x22D << 2)
    ctx->pc = 0x26C6B0u;
    {
        const bool branch_taken_0x26c6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6B0u;
        // 0x26c6b4: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6b0) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C6B8u;
label_26c6b8:
    // 0x26c6b8: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x26c6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x26c6bc: 0x1000022a  b           . + 4 + (0x22A << 2)
    ctx->pc = 0x26C6BCu;
    {
        const bool branch_taken_0x26c6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6BCu;
        // 0x26c6c0: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6bc) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C6C4u;
    // 0x26c6c4: 0x0  nop
    ctx->pc = 0x26c6c4u;
    // NOP
label_26c6c8:
    // 0x26c6c8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26c6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26c6cc: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x26c6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x26c6d0: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x26c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x26c6d4: 0x346300a0  ori         $v1, $v1, 0xA0
    ctx->pc = 0x26c6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x26c6d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26c6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26c6dc: 0x10600222  beqz        $v1, . + 4 + (0x222 << 2)
    ctx->pc = 0x26C6DCu;
    {
        const bool branch_taken_0x26c6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c6dc) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C6E4u;
    // 0x26c6e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c6e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26c6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26c6ec: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26c6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26c6f0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26c6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26c6f4: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x26c6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x26c6f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c6fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c6fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c700: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c704: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26c704u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c708: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26c708u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c70c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26C70Cu;
    SET_GPR_U32(ctx, 31, 0x26C714u);
    ctx->pc = 0x26C710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C70Cu;
    // 0x26c710: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26C70Cu, 0x26C714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C714u;
label_26c714:
    // 0x26c714: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x26c714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26c718: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x26c718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x26c71c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x26c71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x26c720: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C720u;
    {
        const bool branch_taken_0x26c720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C720u;
        // 0x26c724: 0x3c03dfff  lui         $v1, 0xDFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c720) {
            ctx->pc = 0x26C738u;
            goto label_26c738;
        }
    }
    ctx->pc = 0x26C728u;
    // 0x26c728: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26c728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26c72c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x26c72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x26c730: 0x1000020d  b           . + 4 + (0x20D << 2)
    ctx->pc = 0x26C730u;
    {
        const bool branch_taken_0x26c730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C730u;
        // 0x26c734: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c730) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C738u;
label_26c738:
    // 0x26c738: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x26c738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x26c73c: 0x1000020a  b           . + 4 + (0x20A << 2)
    ctx->pc = 0x26C73Cu;
    {
        const bool branch_taken_0x26c73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C73Cu;
        // 0x26c740: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c73c) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C744u;
    // 0x26c744: 0x0  nop
    ctx->pc = 0x26c744u;
    // NOP
label_26c748:
    // 0x26c748: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26c748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26c74c: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x26c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x26c750: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x26c750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x26c754: 0x346300a0  ori         $v1, $v1, 0xA0
    ctx->pc = 0x26c754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x26c758: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26c758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26c75c: 0x10600202  beqz        $v1, . + 4 + (0x202 << 2)
    ctx->pc = 0x26C75Cu;
    {
        const bool branch_taken_0x26c75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c75c) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C764u;
    // 0x26c764: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c768: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26c768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26c76c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26c770: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26c770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26c774: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x26c774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x26c778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c77c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c77cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c780: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c780u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c784: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26c784u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c788: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26c788u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c78c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26C78Cu;
    SET_GPR_U32(ctx, 31, 0x26C794u);
    ctx->pc = 0x26C790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C78Cu;
    // 0x26c790: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26C78Cu, 0x26C794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C794u;
label_26c794:
    // 0x26c794: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x26c794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26c798: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x26c798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x26c79c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x26c79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x26c7a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C7A0u;
    {
        const bool branch_taken_0x26c7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7A0u;
        // 0x26c7a4: 0x3c03efff  lui         $v1, 0xEFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61439 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7a0) {
            ctx->pc = 0x26C7B8u;
            goto label_26c7b8;
        }
    }
    ctx->pc = 0x26C7A8u;
    // 0x26c7a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26c7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26c7ac: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x26c7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x26c7b0: 0x100001ed  b           . + 4 + (0x1ED << 2)
    ctx->pc = 0x26C7B0u;
    {
        const bool branch_taken_0x26c7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7B0u;
        // 0x26c7b4: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7b0) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C7B8u;
label_26c7b8:
    // 0x26c7b8: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x26c7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x26c7bc: 0x100001ea  b           . + 4 + (0x1EA << 2)
    ctx->pc = 0x26C7BCu;
    {
        const bool branch_taken_0x26c7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7BCu;
        // 0x26c7c0: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7bc) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C7C4u;
    // 0x26c7c4: 0x0  nop
    ctx->pc = 0x26c7c4u;
    // NOP
label_26c7c8:
    // 0x26c7c8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26c7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26c7cc: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x26c7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x26c7d0: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x26c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x26c7d4: 0x346300a0  ori         $v1, $v1, 0xA0
    ctx->pc = 0x26c7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x26c7d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26c7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26c7dc: 0x106001e2  beqz        $v1, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x26C7DCu;
    {
        const bool branch_taken_0x26c7dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c7dc) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C7E4u;
    // 0x26c7e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c7e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26c7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26c7ec: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26c7f0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26c7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26c7f4: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x26c7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x26c7f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c7f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c7fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c7fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c800: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c800u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c804: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26c804u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c808: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26c808u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c80c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26C80Cu;
    SET_GPR_U32(ctx, 31, 0x26C814u);
    ctx->pc = 0x26C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C80Cu;
    // 0x26c810: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26C80Cu, 0x26C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C814u;
label_26c814:
    // 0x26c814: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x26c814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26c818: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x26c818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x26c81c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x26c81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x26c820: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C820u;
    {
        const bool branch_taken_0x26c820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C820u;
        // 0x26c824: 0x3c03f7ff  lui         $v1, 0xF7FF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c820) {
            ctx->pc = 0x26C838u;
            goto label_26c838;
        }
    }
    ctx->pc = 0x26C828u;
    // 0x26c828: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26c828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26c82c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x26c82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x26c830: 0x100001cd  b           . + 4 + (0x1CD << 2)
    ctx->pc = 0x26C830u;
    {
        const bool branch_taken_0x26c830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C830u;
        // 0x26c834: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c830) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C838u;
label_26c838:
    // 0x26c838: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x26c838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x26c83c: 0x100001ca  b           . + 4 + (0x1CA << 2)
    ctx->pc = 0x26C83Cu;
    {
        const bool branch_taken_0x26c83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C83Cu;
        // 0x26c840: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c83c) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C844u;
    // 0x26c844: 0x0  nop
    ctx->pc = 0x26c844u;
    // NOP
label_26c848:
    // 0x26c848: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26c848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26c84c: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x26c84cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x26c850: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x26c850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x26c854: 0x346300a0  ori         $v1, $v1, 0xA0
    ctx->pc = 0x26c854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x26c858: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26c858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26c85c: 0x106001c2  beqz        $v1, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x26C85Cu;
    {
        const bool branch_taken_0x26c85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c85c) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C864u;
    // 0x26c864: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c868: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26c868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26c86c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26c870: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26c870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26c874: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x26c874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x26c878: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c87c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c87cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c880: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c880u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c884: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26c884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c888: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26c888u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c88c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26C88Cu;
    SET_GPR_U32(ctx, 31, 0x26C894u);
    ctx->pc = 0x26C890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C88Cu;
    // 0x26c890: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26C88Cu, 0x26C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C894u;
label_26c894:
    // 0x26c894: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x26c894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26c898: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x26c898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x26c89c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x26c89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x26c8a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C8A0u;
    {
        const bool branch_taken_0x26c8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8A0u;
        // 0x26c8a4: 0x3c03fbff  lui         $v1, 0xFBFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8a0) {
            ctx->pc = 0x26C8B8u;
            goto label_26c8b8;
        }
    }
    ctx->pc = 0x26C8A8u;
    // 0x26c8a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26c8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26c8ac: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x26c8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x26c8b0: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x26C8B0u;
    {
        const bool branch_taken_0x26c8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8B0u;
        // 0x26c8b4: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8b0) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C8B8u;
label_26c8b8:
    // 0x26c8b8: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x26c8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x26c8bc: 0x100001aa  b           . + 4 + (0x1AA << 2)
    ctx->pc = 0x26C8BCu;
    {
        const bool branch_taken_0x26c8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8BCu;
        // 0x26c8c0: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8bc) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C8C4u;
    // 0x26c8c4: 0x0  nop
    ctx->pc = 0x26c8c4u;
    // NOP
label_26c8c8:
    // 0x26c8c8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26c8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26c8cc: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x26c8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x26c8d0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x26c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x26c8d4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x26c8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x26c8d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26c8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26c8dc: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x26C8DCu;
    {
        const bool branch_taken_0x26c8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c8dc) {
            ctx->pc = 0x26C938u;
            goto label_26c938;
        }
    }
    ctx->pc = 0x26C8E4u;
    // 0x26c8e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c8e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26c8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26c8ec: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26c8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26c8f0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26c8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26c8f4: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x26c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x26c8f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c8f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c8fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c8fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c900: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c904: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26c904u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c908: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26c908u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c90c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26C90Cu;
    SET_GPR_U32(ctx, 31, 0x26C914u);
    ctx->pc = 0x26C910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C90Cu;
    // 0x26c910: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26C90Cu, 0x26C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C914u;
label_26c914:
    // 0x26c914: 0x82030094  lb          $v1, 0x94($s0)
    ctx->pc = 0x26c914u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x26c918: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26c918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26c91c: 0xa2030094  sb          $v1, 0x94($s0)
    ctx->pc = 0x26c91cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 3));
    // 0x26c920: 0x82030094  lb          $v1, 0x94($s0)
    ctx->pc = 0x26c920u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x26c924: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26C924u;
    {
        const bool branch_taken_0x26c924 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x26C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C924u;
        // 0x26c928: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c924) {
            ctx->pc = 0x26C930u;
            goto label_26c930;
        }
    }
    ctx->pc = 0x26C92Cu;
    // 0x26c92c: 0xa2030094  sb          $v1, 0x94($s0)
    ctx->pc = 0x26c92cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 3));
label_26c930:
    // 0x26c930: 0x1000057b  b           . + 4 + (0x57B << 2)
    ctx->pc = 0x26C930u;
    {
        const bool branch_taken_0x26c930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c930) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26C938u;
label_26c938:
    // 0x26c938: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26c938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26c93c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x26c93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x26c940: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26c940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26c944: 0x10600188  beqz        $v1, . + 4 + (0x188 << 2)
    ctx->pc = 0x26C944u;
    {
        const bool branch_taken_0x26c944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c944) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C94Cu;
    // 0x26c94c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c950: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26c950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26c954: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26c954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26c958: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26c958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26c95c: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x26c95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x26c960: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c964: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c968: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c96c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26c96cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c970: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26c970u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c974: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26C974u;
    SET_GPR_U32(ctx, 31, 0x26C97Cu);
    ctx->pc = 0x26C978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C974u;
    // 0x26c978: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26C974u, 0x26C97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C97Cu;
label_26c97c:
    // 0x26c97c: 0x82030094  lb          $v1, 0x94($s0)
    ctx->pc = 0x26c97cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x26c980: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26c980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26c984: 0xa2030094  sb          $v1, 0x94($s0)
    ctx->pc = 0x26c984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 3));
    // 0x26c988: 0x82030094  lb          $v1, 0x94($s0)
    ctx->pc = 0x26c988u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x26c98c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x26c98cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x26c990: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C990u;
    {
        const bool branch_taken_0x26c990 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c990) {
            ctx->pc = 0x26C9A0u;
            goto label_26c9a0;
        }
    }
    ctx->pc = 0x26C998u;
    // 0x26c998: 0xa2000094  sb          $zero, 0x94($s0)
    ctx->pc = 0x26c998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c99c: 0x0  nop
    ctx->pc = 0x26c99cu;
    // NOP
label_26c9a0:
    // 0x26c9a0: 0x1000055f  b           . + 4 + (0x55F << 2)
    ctx->pc = 0x26C9A0u;
    {
        const bool branch_taken_0x26c9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c9a0) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26C9A8u;
label_26c9a8:
    // 0x26c9a8: 0x82030094  lb          $v1, 0x94($s0)
    ctx->pc = 0x26c9a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x26c9ac: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x26c9acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26c9b0: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x26C9B0u;
    {
        const bool branch_taken_0x26c9b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9B0u;
        // 0x26c9b4: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9b0) {
            ctx->pc = 0x26CA38u;
            goto label_26ca38;
        }
    }
    ctx->pc = 0x26C9B8u;
    // 0x26c9b8: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x26c9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x26c9bc: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x26c9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961704)));
    // 0x26c9c0: 0x346300a0  ori         $v1, $v1, 0xA0
    ctx->pc = 0x26c9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x26c9c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26c9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26c9c8: 0x10600167  beqz        $v1, . + 4 + (0x167 << 2)
    ctx->pc = 0x26C9C8u;
    {
        const bool branch_taken_0x26c9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c9c8) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26C9D0u;
    // 0x26c9d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c9d4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26c9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26c9d8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26c9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26c9dc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26c9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26c9e0: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x26c9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x26c9e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c9e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c9e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c9ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c9ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c9f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26c9f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c9f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26c9f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c9f8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26C9F8u;
    SET_GPR_U32(ctx, 31, 0x26CA00u);
    ctx->pc = 0x26C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C9F8u;
    // 0x26c9fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26C9F8u, 0x26CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA00u;
label_26ca00:
    // 0x26ca00: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x26ca00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26ca04: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x26ca04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x26ca08: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x26ca08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x26ca0c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26CA0Cu;
    {
        const bool branch_taken_0x26ca0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA0Cu;
        // 0x26ca10: 0x3c03fdff  lui         $v1, 0xFDFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca0c) {
            ctx->pc = 0x26CA28u;
            goto label_26ca28;
        }
    }
    ctx->pc = 0x26CA14u;
    // 0x26ca14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26ca14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26ca18: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x26ca18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x26ca1c: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x26CA1Cu;
    {
        const bool branch_taken_0x26ca1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA1Cu;
        // 0x26ca20: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca1c) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26CA24u;
    // 0x26ca24: 0x0  nop
    ctx->pc = 0x26ca24u;
    // NOP
label_26ca28:
    // 0x26ca28: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x26ca28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x26ca2c: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x26CA2Cu;
    {
        const bool branch_taken_0x26ca2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA2Cu;
        // 0x26ca30: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca2c) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26CA34u;
    // 0x26ca34: 0x0  nop
    ctx->pc = 0x26ca34u;
    // NOP
label_26ca38:
    // 0x26ca38: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26ca38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26ca3c: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x26ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x26ca40: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x26ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x26ca44: 0x346300a0  ori         $v1, $v1, 0xA0
    ctx->pc = 0x26ca44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x26ca48: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26ca48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26ca4c: 0x10600146  beqz        $v1, . + 4 + (0x146 << 2)
    ctx->pc = 0x26CA4Cu;
    {
        const bool branch_taken_0x26ca4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ca4c) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26CA54u;
    // 0x26ca54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26ca58: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26ca58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26ca5c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26ca5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26ca60: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26ca60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26ca64: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x26ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x26ca68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26ca68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca6c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26ca6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26ca70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26ca70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26ca74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26ca78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26ca7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca80: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26CA80u;
    SET_GPR_U32(ctx, 31, 0x26CA88u);
    ctx->pc = 0x26CA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA80u;
    // 0x26ca84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26CA80u, 0x26CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA88u;
label_26ca88:
    // 0x26ca88: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x26CA88u;
    {
        const bool branch_taken_0x26ca88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ca88) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26CA90u;
label_26ca90:
    // 0x26ca90: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26ca90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26ca94: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x26ca94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x26ca98: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x26ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x26ca9c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x26ca9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x26caa0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26caa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26caa4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x26CAA4u;
    {
        const bool branch_taken_0x26caa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26caa4) {
            ctx->pc = 0x26CB00u;
            goto label_26cb00;
        }
    }
    ctx->pc = 0x26CAACu;
    // 0x26caac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26caacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cab0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26cab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26cab4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26cab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26cab8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26cab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26cabc: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x26cabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x26cac0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26cac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26cac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cac8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26cac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cacc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26caccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cad0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26cad0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cad4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26CAD4u;
    SET_GPR_U32(ctx, 31, 0x26CADCu);
    ctx->pc = 0x26CAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CAD4u;
    // 0x26cad8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26CAD4u, 0x26CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CADCu;
label_26cadc:
    // 0x26cadc: 0x82030095  lb          $v1, 0x95($s0)
    ctx->pc = 0x26cadcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 149)));
    // 0x26cae0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26cae4: 0xa2030095  sb          $v1, 0x95($s0)
    ctx->pc = 0x26cae4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x26cae8: 0x82030095  lb          $v1, 0x95($s0)
    ctx->pc = 0x26cae8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 149)));
    // 0x26caec: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26CAECu;
    {
        const bool branch_taken_0x26caec = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x26CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAECu;
        // 0x26caf0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26caec) {
            ctx->pc = 0x26CAF8u;
            goto label_26caf8;
        }
    }
    ctx->pc = 0x26CAF4u;
    // 0x26caf4: 0xa2030095  sb          $v1, 0x95($s0)
    ctx->pc = 0x26caf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 149), (uint8_t)GPR_U32(ctx, 3));
label_26caf8:
    // 0x26caf8: 0x10000509  b           . + 4 + (0x509 << 2)
    ctx->pc = 0x26CAF8u;
    {
        const bool branch_taken_0x26caf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26caf8) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26CB00u;
label_26cb00:
    // 0x26cb00: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26cb04: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x26cb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x26cb08: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26cb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26cb0c: 0x10600116  beqz        $v1, . + 4 + (0x116 << 2)
    ctx->pc = 0x26CB0Cu;
    {
        const bool branch_taken_0x26cb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cb0c) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26CB14u;
    // 0x26cb14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cb18: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26cb18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26cb1c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26cb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26cb20: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26cb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26cb24: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x26cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x26cb28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26cb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26cb2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26cb30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26cb34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26cb38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb3c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26CB3Cu;
    SET_GPR_U32(ctx, 31, 0x26CB44u);
    ctx->pc = 0x26CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB3Cu;
    // 0x26cb40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26CB3Cu, 0x26CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB44u;
label_26cb44:
    // 0x26cb44: 0x82030095  lb          $v1, 0x95($s0)
    ctx->pc = 0x26cb44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 149)));
    // 0x26cb48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26cb4c: 0xa2030095  sb          $v1, 0x95($s0)
    ctx->pc = 0x26cb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x26cb50: 0x82030095  lb          $v1, 0x95($s0)
    ctx->pc = 0x26cb50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 149)));
    // 0x26cb54: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x26cb54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26cb58: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CB58u;
    {
        const bool branch_taken_0x26cb58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cb58) {
            ctx->pc = 0x26CB68u;
            goto label_26cb68;
        }
    }
    ctx->pc = 0x26CB60u;
    // 0x26cb60: 0xa2000095  sb          $zero, 0x95($s0)
    ctx->pc = 0x26cb60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 149), (uint8_t)GPR_U32(ctx, 0));
    // 0x26cb64: 0x0  nop
    ctx->pc = 0x26cb64u;
    // NOP
label_26cb68:
    // 0x26cb68: 0x100004ed  b           . + 4 + (0x4ED << 2)
    ctx->pc = 0x26CB68u;
    {
        const bool branch_taken_0x26cb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cb68) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26CB70u;
label_26cb70:
    // 0x26cb70: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26cb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26cb74: 0x8c22ea24  lw          $v0, -0x15DC($at)
    ctx->pc = 0x26cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x26cb78: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x26cb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x26cb7c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x26CB7Cu;
    {
        const bool branch_taken_0x26cb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB7Cu;
        // 0x26cb80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb7c) {
            ctx->pc = 0x26CC38u;
            goto label_26cc38;
        }
    }
    ctx->pc = 0x26CB84u;
    // 0x26cb84: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26cb84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26cb88: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26cb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26cb8c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26cb90: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x26cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x26cb94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26cb94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb98: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26cb98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26cb9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26cb9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cba0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26cba0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cba4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26cba4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cba8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26cba8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbac: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26CBACu;
    SET_GPR_U32(ctx, 31, 0x26CBB4u);
    ctx->pc = 0x26CBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CBACu;
    // 0x26cbb0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26CBACu, 0x26CBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBB4u;
label_26cbb4:
    // 0x26cbb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cbb8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26cbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26cbbc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26cbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26cbc0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26cbc4: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x26cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x26cbc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26cbc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbcc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26cbccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26cbd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26cbd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26cbd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26cbd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbdc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26cbdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbe0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26CBE0u;
    SET_GPR_U32(ctx, 31, 0x26CBE8u);
    ctx->pc = 0x26CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CBE0u;
    // 0x26cbe4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26CBE0u, 0x26CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBE8u;
label_26cbe8:
    // 0x26cbe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26cbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cbec: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x26CBECu;
    SET_GPR_U32(ctx, 31, 0x26CBF4u);
    ctx->pc = 0x26CBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CBECu;
    // 0x26cbf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x26CBECu, 0x26CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBF4u;
label_26cbf4:
    // 0x26cbf4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26cbf8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x26cbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26cbfc: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x26cbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x26cc00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26cc00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26cc04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26cc08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc0c: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x26CC0Cu;
    SET_GPR_U32(ctx, 31, 0x26CC14u);
    ctx->pc = 0x26CC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CC0Cu;
    // 0x26cc10: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x26CC0Cu, 0x26CC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC14u;
label_26cc14:
    // 0x26cc14: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x26cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26cc18: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26cc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cc1c: 0xa20300a0  sb          $v1, 0xA0($s0)
    ctx->pc = 0x26cc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x26cc20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26cc24: 0xa20400a6  sb          $a0, 0xA6($s0)
    ctx->pc = 0x26cc24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 166), (uint8_t)GPR_U32(ctx, 4));
    // 0x26cc28: 0xa20300a8  sb          $v1, 0xA8($s0)
    ctx->pc = 0x26cc28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 3));
    // 0x26cc2c: 0x100004bc  b           . + 4 + (0x4BC << 2)
    ctx->pc = 0x26CC2Cu;
    {
        const bool branch_taken_0x26cc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC2Cu;
        // 0x26cc30: 0xa20300a7  sb          $v1, 0xA7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 167), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc2c) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26CC34u;
    // 0x26cc34: 0x0  nop
    ctx->pc = 0x26cc34u;
    // NOP
label_26cc38:
    // 0x26cc38: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x26cc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26cc3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26cc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc40: 0xc09b7cc  jal         func_26DF30
    ctx->pc = 0x26CC40u;
    SET_GPR_U32(ctx, 31, 0x26CC48u);
    ctx->pc = 0x26CC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CC40u;
    // 0x26cc44: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DF30u, 0x26CC40u, 0x26CC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC48u;
label_26cc48:
    // 0x26cc48: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x26CC48u;
    {
        const bool branch_taken_0x26cc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cc48) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26CC50u;
    // 0x26cc50: 0x100004b3  b           . + 4 + (0x4B3 << 2)
    ctx->pc = 0x26CC50u;
    {
        const bool branch_taken_0x26cc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cc50) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26CC58u;
label_26cc58:
    // 0x26cc58: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26cc58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26cc5c: 0x8c22ea24  lw          $v0, -0x15DC($at)
    ctx->pc = 0x26cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x26cc60: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x26cc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x26cc64: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x26CC64u;
    {
        const bool branch_taken_0x26cc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC64u;
        // 0x26cc68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc64) {
            ctx->pc = 0x26CD20u;
            goto label_26cd20;
        }
    }
    ctx->pc = 0x26CC6Cu;
    // 0x26cc6c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26cc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26cc70: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26cc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26cc74: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26cc78: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x26cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x26cc7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26cc7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc80: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26cc80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26cc84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26cc84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26cc88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26cc8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc90: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26cc90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc94: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26CC94u;
    SET_GPR_U32(ctx, 31, 0x26CC9Cu);
    ctx->pc = 0x26CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CC94u;
    // 0x26cc98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26CC94u, 0x26CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC9Cu;
label_26cc9c:
    // 0x26cc9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cca0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26cca4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26cca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26cca8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26cca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26ccac: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x26ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x26ccb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26ccb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ccb4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26ccb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26ccb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26ccb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ccbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26ccbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ccc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26ccc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ccc4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26ccc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ccc8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26CCC8u;
    SET_GPR_U32(ctx, 31, 0x26CCD0u);
    ctx->pc = 0x26CCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CCC8u;
    // 0x26cccc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26CCC8u, 0x26CCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CCD0u;
label_26ccd0:
    // 0x26ccd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ccd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ccd4: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x26CCD4u;
    SET_GPR_U32(ctx, 31, 0x26CCDCu);
    ctx->pc = 0x26CCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CCD4u;
    // 0x26ccd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x26CCD4u, 0x26CCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CCDCu;
label_26ccdc:
    // 0x26ccdc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26ccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26cce0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x26cce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26cce4: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x26cce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x26cce8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26cce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ccec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26ccecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ccf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26ccf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ccf4: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x26CCF4u;
    SET_GPR_U32(ctx, 31, 0x26CCFCu);
    ctx->pc = 0x26CCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CCF4u;
    // 0x26ccf8: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x26CCF4u, 0x26CCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CCFCu;
label_26ccfc:
    // 0x26ccfc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x26ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26cd00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26cd04: 0xa20300a0  sb          $v1, 0xA0($s0)
    ctx->pc = 0x26cd04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x26cd08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cd0c: 0xa20400a6  sb          $a0, 0xA6($s0)
    ctx->pc = 0x26cd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 166), (uint8_t)GPR_U32(ctx, 4));
    // 0x26cd10: 0xa20300a8  sb          $v1, 0xA8($s0)
    ctx->pc = 0x26cd10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 3));
    // 0x26cd14: 0x10000482  b           . + 4 + (0x482 << 2)
    ctx->pc = 0x26CD14u;
    {
        const bool branch_taken_0x26cd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD14u;
        // 0x26cd18: 0xa20300a7  sb          $v1, 0xA7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 167), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd14) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26CD1Cu;
    // 0x26cd1c: 0x0  nop
    ctx->pc = 0x26cd1cu;
    // NOP
label_26cd20:
    // 0x26cd20: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x26cd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26cd24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26cd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd28: 0xc09b7cc  jal         func_26DF30
    ctx->pc = 0x26CD28u;
    SET_GPR_U32(ctx, 31, 0x26CD30u);
    ctx->pc = 0x26CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CD28u;
    // 0x26cd2c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DF30u, 0x26CD28u, 0x26CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD30u;
label_26cd30:
    // 0x26cd30: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x26CD30u;
    {
        const bool branch_taken_0x26cd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cd30) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26CD38u;
    // 0x26cd38: 0x10000479  b           . + 4 + (0x479 << 2)
    ctx->pc = 0x26CD38u;
    {
        const bool branch_taken_0x26cd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cd38) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26CD40u;
label_26cd40:
    // 0x26cd40: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26cd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26cd44: 0x8c22ea24  lw          $v0, -0x15DC($at)
    ctx->pc = 0x26cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x26cd48: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x26cd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x26cd4c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x26CD4Cu;
    {
        const bool branch_taken_0x26cd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD4Cu;
        // 0x26cd50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd4c) {
            ctx->pc = 0x26CE08u;
            goto label_26ce08;
        }
    }
    ctx->pc = 0x26CD54u;
    // 0x26cd54: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26cd58: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26cd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26cd5c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26cd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26cd60: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x26cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x26cd64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26cd64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd68: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26cd68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26cd6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26cd6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26cd70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26cd74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26cd78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd7c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26CD7Cu;
    SET_GPR_U32(ctx, 31, 0x26CD84u);
    ctx->pc = 0x26CD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CD7Cu;
    // 0x26cd80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26CD7Cu, 0x26CD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD84u;
label_26cd84:
    // 0x26cd84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cd88: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26cd8c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26cd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26cd90: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26cd94: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x26cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x26cd98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26cd98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd9c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26cd9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26cda0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26cda0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cda4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26cda4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cda8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26cda8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cdac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26cdacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cdb0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26CDB0u;
    SET_GPR_U32(ctx, 31, 0x26CDB8u);
    ctx->pc = 0x26CDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CDB0u;
    // 0x26cdb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26CDB0u, 0x26CDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CDB8u;
label_26cdb8:
    // 0x26cdb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26cdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cdbc: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x26CDBCu;
    SET_GPR_U32(ctx, 31, 0x26CDC4u);
    ctx->pc = 0x26CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CDBCu;
    // 0x26cdc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x26CDBCu, 0x26CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CDC4u;
label_26cdc4:
    // 0x26cdc4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26cdc8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x26cdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26cdcc: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x26cdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x26cdd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26cdd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cdd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26cdd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cdd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26cdd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cddc: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x26CDDCu;
    SET_GPR_U32(ctx, 31, 0x26CDE4u);
    ctx->pc = 0x26CDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CDDCu;
    // 0x26cde0: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x26CDDCu, 0x26CDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CDE4u;
label_26cde4:
    // 0x26cde4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x26cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26cde8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26cdec: 0xa20300a0  sb          $v1, 0xA0($s0)
    ctx->pc = 0x26cdecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x26cdf0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26cdf4: 0xa20400a6  sb          $a0, 0xA6($s0)
    ctx->pc = 0x26cdf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 166), (uint8_t)GPR_U32(ctx, 4));
    // 0x26cdf8: 0xa20300a8  sb          $v1, 0xA8($s0)
    ctx->pc = 0x26cdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 3));
    // 0x26cdfc: 0x10000448  b           . + 4 + (0x448 << 2)
    ctx->pc = 0x26CDFCu;
    {
        const bool branch_taken_0x26cdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CDFCu;
        // 0x26ce00: 0xa20300a7  sb          $v1, 0xA7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 167), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cdfc) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26CE04u;
    // 0x26ce04: 0x0  nop
    ctx->pc = 0x26ce04u;
    // NOP
label_26ce08:
    // 0x26ce08: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x26ce08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26ce0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ce0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ce10: 0xc09b7cc  jal         func_26DF30
    ctx->pc = 0x26CE10u;
    SET_GPR_U32(ctx, 31, 0x26CE18u);
    ctx->pc = 0x26CE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CE10u;
    // 0x26ce14: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DF30u, 0x26CE10u, 0x26CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE18u;
label_26ce18:
    // 0x26ce18: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x26CE18u;
    {
        const bool branch_taken_0x26ce18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ce18) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26CE20u;
    // 0x26ce20: 0x1000043f  b           . + 4 + (0x43F << 2)
    ctx->pc = 0x26CE20u;
    {
        const bool branch_taken_0x26ce20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ce20) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26CE28u;
label_26ce28:
    // 0x26ce28: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26ce28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26ce2c: 0x8c22ea24  lw          $v0, -0x15DC($at)
    ctx->pc = 0x26ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x26ce30: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x26ce30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x26ce34: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26CE34u;
    {
        const bool branch_taken_0x26ce34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE34u;
        // 0x26ce38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce34) {
            ctx->pc = 0x26CE88u;
            goto label_26ce88;
        }
    }
    ctx->pc = 0x26CE3Cu;
    // 0x26ce3c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26ce40: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26ce40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26ce44: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26ce44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26ce48: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x26ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x26ce4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26ce4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ce50: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26ce50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26ce54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26ce54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ce58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26ce58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ce5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26ce5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ce60: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26ce60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ce64: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26CE64u;
    SET_GPR_U32(ctx, 31, 0x26CE6Cu);
    ctx->pc = 0x26CE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CE64u;
    // 0x26ce68: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26CE64u, 0x26CE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE6Cu;
label_26ce6c:
    // 0x26ce6c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26ce70: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x26CE70u;
    SET_GPR_U32(ctx, 31, 0x26CE78u);
    ctx->pc = 0x26CE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CE70u;
    // 0x26ce74: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x26CE70u, 0x26CE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE78u;
label_26ce78:
    // 0x26ce78: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x26ce78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26ce7c: 0x10000428  b           . + 4 + (0x428 << 2)
    ctx->pc = 0x26CE7Cu;
    {
        const bool branch_taken_0x26ce7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE7Cu;
        // 0x26ce80: 0xa20300a0  sb          $v1, 0xA0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce7c) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26CE84u;
    // 0x26ce84: 0x0  nop
    ctx->pc = 0x26ce84u;
    // NOP
label_26ce88:
    // 0x26ce88: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x26ce88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x26ce8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ce8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ce90: 0xc09b7cc  jal         func_26DF30
    ctx->pc = 0x26CE90u;
    SET_GPR_U32(ctx, 31, 0x26CE98u);
    ctx->pc = 0x26CE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CE90u;
    // 0x26ce94: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DF30u, 0x26CE90u, 0x26CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE98u;
label_26ce98:
    // 0x26ce98: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x26CE98u;
    {
        const bool branch_taken_0x26ce98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ce98) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26CEA0u;
    // 0x26cea0: 0x1000041f  b           . + 4 + (0x41F << 2)
    ctx->pc = 0x26CEA0u;
    {
        const bool branch_taken_0x26cea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cea0) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26CEA8u;
label_26cea8:
    // 0x26cea8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26cea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26ceac: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x26ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x26ceb0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x26ceb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x26ceb4: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x26CEB4u;
    {
        const bool branch_taken_0x26ceb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CEB4u;
        // 0x26ceb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ceb4) {
            ctx->pc = 0x26CF68u;
            goto label_26cf68;
        }
    }
    ctx->pc = 0x26CEBCu;
    // 0x26cebc: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x26CEBCu;
    SET_GPR_U32(ctx, 31, 0x26CEC4u);
    ctx->pc = 0x26CEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CEBCu;
    // 0x26cec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x26CEBCu, 0x26CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CEC4u;
label_26cec4:
    // 0x26cec4: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26cec8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x26cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x26cecc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26ceccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26ced0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x26CED0u;
    {
        const bool branch_taken_0x26ced0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CED0u;
        // 0x26ced4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ced0) {
            ctx->pc = 0x26CF40u;
            goto label_26cf40;
        }
    }
    ctx->pc = 0x26CED8u;
    // 0x26ced8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26ced8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26cedc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26cedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26cee0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26cee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26cee4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26cee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26cee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ceec: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26ceecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26cef0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26cef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cef4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26cef4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cef8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26cef8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cefc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26cefcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf00: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26CF00u;
    SET_GPR_U32(ctx, 31, 0x26CF08u);
    ctx->pc = 0x26CF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF00u;
    // 0x26cf04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26CF00u, 0x26CF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF08u;
label_26cf08:
    // 0x26cf08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cf0c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26cf10: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26cf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26cf14: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26cf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26cf18: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x26cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x26cf1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26cf1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf20: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26cf20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26cf24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26cf24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26cf28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26cf2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf30: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26cf30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf34: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26CF34u;
    SET_GPR_U32(ctx, 31, 0x26CF3Cu);
    ctx->pc = 0x26CF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF34u;
    // 0x26cf38: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26CF34u, 0x26CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF3Cu;
label_26cf3c:
    // 0x26cf3c: 0x0  nop
    ctx->pc = 0x26cf3cu;
    // NOP
label_26cf40:
    // 0x26cf40: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26cf40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26cf44: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x26CF44u;
    SET_GPR_U32(ctx, 31, 0x26CF4Cu);
    ctx->pc = 0x26CF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF44u;
    // 0x26cf48: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x26CF44u, 0x26CF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF4Cu;
label_26cf4c:
    // 0x26cf4c: 0xa20000a0  sb          $zero, 0xA0($s0)
    ctx->pc = 0x26cf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 0));
    // 0x26cf50: 0xa20000a2  sb          $zero, 0xA2($s0)
    ctx->pc = 0x26cf50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 162), (uint8_t)GPR_U32(ctx, 0));
    // 0x26cf54: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x26cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x26cf58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26cf5c: 0x100003f0  b           . + 4 + (0x3F0 << 2)
    ctx->pc = 0x26CF5Cu;
    {
        const bool branch_taken_0x26cf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF5Cu;
        // 0x26cf60: 0xae0300ac  sw          $v1, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf5c) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26CF64u;
    // 0x26cf64: 0x0  nop
    ctx->pc = 0x26cf64u;
    // NOP
label_26cf68:
    // 0x26cf68: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26cf68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26cf6c: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x26cf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x26cf70: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x26cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x26cf74: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x26cf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x26cf78: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26cf78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26cf7c: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x26CF7Cu;
    {
        const bool branch_taken_0x26cf7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cf7c) {
            ctx->pc = 0x26D078u;
            goto label_26d078;
        }
    }
    ctx->pc = 0x26CF84u;
    // 0x26cf84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cf88: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26cf8c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26cf90: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26cf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26cf94: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x26cf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x26cf98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26cf98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26cf9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cfa0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26cfa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cfa4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26cfa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cfa8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26cfa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cfac: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26CFACu;
    SET_GPR_U32(ctx, 31, 0x26CFB4u);
    ctx->pc = 0x26CFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CFACu;
    // 0x26cfb0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26CFACu, 0x26CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CFB4u;
label_26cfb4:
    // 0x26cfb4: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x26cfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x26cfb8: 0x820300a4  lb          $v1, 0xA4($s0)
    ctx->pc = 0x26cfb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26cfbc: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x26cfbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x26cfc0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CFC0u;
    {
        const bool branch_taken_0x26cfc0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cfc0) {
            ctx->pc = 0x26CFD0u;
            goto label_26cfd0;
        }
    }
    ctx->pc = 0x26CFC8u;
    // 0x26cfc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26cfcc: 0xa20300a4  sb          $v1, 0xA4($s0)
    ctx->pc = 0x26cfccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 164), (uint8_t)GPR_U32(ctx, 3));
label_26cfd0:
    // 0x26cfd0: 0x820300a4  lb          $v1, 0xA4($s0)
    ctx->pc = 0x26cfd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26cfd4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26cfd8: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x26cfd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x26cfdc: 0xa20300a4  sb          $v1, 0xA4($s0)
    ctx->pc = 0x26cfdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 164), (uint8_t)GPR_U32(ctx, 3));
    // 0x26cfe0: 0x820300a5  lb          $v1, 0xA5($s0)
    ctx->pc = 0x26cfe0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 165)));
    // 0x26cfe4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x26cfe4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x26cfe8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x26cfe8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26cfec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x26CFECu;
    {
        const bool branch_taken_0x26cfec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFECu;
        // 0x26cff0: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cfec) {
            ctx->pc = 0x26CFF8u;
            goto label_26cff8;
        }
    }
    ctx->pc = 0x26CFF4u;
    // 0x26cff4: 0xa20300a4  sb          $v1, 0xA4($s0)
    ctx->pc = 0x26cff4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 164), (uint8_t)GPR_U32(ctx, 3));
label_26cff8:
    // 0x26cff8: 0x3c048090  lui         $a0, 0x8090
    ctx->pc = 0x26cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32912 << 16));
    // 0x26cffc: 0xa20000a9  sb          $zero, 0xA9($s0)
    ctx->pc = 0x26cffcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d000: 0x34849090  ori         $a0, $a0, 0x9090
    ctx->pc = 0x26d000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37008);
    // 0x26d004: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x26d004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
    // 0x26d008: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x26d008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26d00c: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26d00cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d010: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x26D010u;
    {
        const bool branch_taken_0x26d010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D010u;
        // 0x26d014: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d010) {
            ctx->pc = 0x26D058u;
            goto label_26d058;
        }
    }
    ctx->pc = 0x26D018u;
    // 0x26d018: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x26D018u;
    {
        const bool branch_taken_0x26d018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26d018) {
            ctx->pc = 0x26D058u;
            goto label_26d058;
        }
    }
    ctx->pc = 0x26D020u;
    // 0x26d020: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x26d020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x26d024: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26D024u;
    {
        const bool branch_taken_0x26d024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D024u;
        // 0x26d028: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d024) {
            ctx->pc = 0x26D048u;
            goto label_26d048;
        }
    }
    ctx->pc = 0x26D02Cu;
    // 0x26d02c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26D02Cu;
    {
        const bool branch_taken_0x26d02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26d02c) {
            ctx->pc = 0x26D048u;
            goto label_26d048;
        }
    }
    ctx->pc = 0x26D034u;
    // 0x26d034: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x26d034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26d038: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D038u;
    {
        const bool branch_taken_0x26d038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26d038) {
            ctx->pc = 0x26D048u;
            goto label_26d048;
        }
    }
    ctx->pc = 0x26D040u;
    // 0x26d040: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26D040u;
    {
        const bool branch_taken_0x26d040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d040) {
            ctx->pc = 0x26D068u;
            goto label_26d068;
        }
    }
    ctx->pc = 0x26D048u;
label_26d048:
    // 0x26d048: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x26d048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26d04c: 0x100003b4  b           . + 4 + (0x3B4 << 2)
    ctx->pc = 0x26D04Cu;
    {
        const bool branch_taken_0x26d04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D04Cu;
        // 0x26d050: 0xa20300a0  sb          $v1, 0xA0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d04c) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D054u;
    // 0x26d054: 0x0  nop
    ctx->pc = 0x26d054u;
    // NOP
label_26d058:
    // 0x26d058: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x26d058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26d05c: 0x100003b0  b           . + 4 + (0x3B0 << 2)
    ctx->pc = 0x26D05Cu;
    {
        const bool branch_taken_0x26d05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D05Cu;
        // 0x26d060: 0xa20300a0  sb          $v1, 0xA0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d05c) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D064u;
    // 0x26d064: 0x0  nop
    ctx->pc = 0x26d064u;
    // NOP
label_26d068:
    // 0x26d068: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26d068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26d06c: 0x100003ac  b           . + 4 + (0x3AC << 2)
    ctx->pc = 0x26D06Cu;
    {
        const bool branch_taken_0x26d06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D06Cu;
        // 0x26d070: 0xa20300a0  sb          $v1, 0xA0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d06c) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D074u;
    // 0x26d074: 0x0  nop
    ctx->pc = 0x26d074u;
    // NOP
label_26d078:
    // 0x26d078: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x26d078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x26d07c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x26d07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x26d080: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26d080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26d084: 0x106003a6  beqz        $v1, . + 4 + (0x3A6 << 2)
    ctx->pc = 0x26D084u;
    {
        const bool branch_taken_0x26d084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d084) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D08Cu;
    // 0x26d08c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d090: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26d090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26d094: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26d094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26d098: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26d098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26d09c: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x26d09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x26d0a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26d0a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26d0a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26d0acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26d0b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0b4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26D0B4u;
    SET_GPR_U32(ctx, 31, 0x26D0BCu);
    ctx->pc = 0x26D0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D0B4u;
    // 0x26d0b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26D0B4u, 0x26D0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D0BCu;
label_26d0bc:
    // 0x26d0bc: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x26d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x26d0c0: 0x3c038090  lui         $v1, 0x8090
    ctx->pc = 0x26d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32912 << 16));
    // 0x26d0c4: 0x34639090  ori         $v1, $v1, 0x9090
    ctx->pc = 0x26d0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x26d0c8: 0xa20000a9  sb          $zero, 0xA9($s0)
    ctx->pc = 0x26d0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d0cc: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x26d0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x26d0d0: 0x820500a4  lb          $a1, 0xA4($s0)
    ctx->pc = 0x26d0d0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d0d4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x26d0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x26d0d8: 0x10a3001b  beq         $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x26D0D8u;
    {
        const bool branch_taken_0x26d0d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x26D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0D8u;
        // 0x26d0dc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0d8) {
            ctx->pc = 0x26D148u;
            goto label_26d148;
        }
    }
    ctx->pc = 0x26D0E0u;
    // 0x26d0e0: 0x10a40015  beq         $a1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26D0E0u;
    {
        const bool branch_taken_0x26d0e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x26d0e0) {
            ctx->pc = 0x26D138u;
            goto label_26d138;
        }
    }
    ctx->pc = 0x26D0E8u;
    // 0x26d0e8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x26d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26d0ec: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x26D0ECu;
    {
        const bool branch_taken_0x26d0ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x26D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0ECu;
        // 0x26d0f0: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0ec) {
            ctx->pc = 0x26D128u;
            goto label_26d128;
        }
    }
    ctx->pc = 0x26D0F4u;
    // 0x26d0f4: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26D0F4u;
    {
        const bool branch_taken_0x26d0f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x26D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0F4u;
        // 0x26d0f8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0f4) {
            ctx->pc = 0x26D110u;
            goto label_26d110;
        }
    }
    ctx->pc = 0x26D0FCu;
    // 0x26d0fc: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D0FCu;
    {
        const bool branch_taken_0x26d0fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x26d0fc) {
            ctx->pc = 0x26D110u;
            goto label_26d110;
        }
    }
    ctx->pc = 0x26D104u;
    // 0x26d104: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x26D104u;
    {
        const bool branch_taken_0x26d104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d104) {
            ctx->pc = 0x26D160u;
            goto label_26d160;
        }
    }
    ctx->pc = 0x26D10Cu;
    // 0x26d10c: 0x0  nop
    ctx->pc = 0x26d10cu;
    // NOP
label_26d110:
    // 0x26d110: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26d110u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d114: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x26d114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26d118: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x26d118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x26d11c: 0xa20400a4  sb          $a0, 0xA4($s0)
    ctx->pc = 0x26d11cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 164), (uint8_t)GPR_U32(ctx, 4));
    // 0x26d120: 0x1000037f  b           . + 4 + (0x37F << 2)
    ctx->pc = 0x26D120u;
    {
        const bool branch_taken_0x26d120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D120u;
        // 0x26d124: 0xa20300a0  sb          $v1, 0xA0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d120) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D128u;
label_26d128:
    // 0x26d128: 0xa20400a4  sb          $a0, 0xA4($s0)
    ctx->pc = 0x26d128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 164), (uint8_t)GPR_U32(ctx, 4));
    // 0x26d12c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x26d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26d130: 0x1000037b  b           . + 4 + (0x37B << 2)
    ctx->pc = 0x26D130u;
    {
        const bool branch_taken_0x26d130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D130u;
        // 0x26d134: 0xa20300a0  sb          $v1, 0xA0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d130) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D138u;
label_26d138:
    // 0x26d138: 0xa20300a4  sb          $v1, 0xA4($s0)
    ctx->pc = 0x26d138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 164), (uint8_t)GPR_U32(ctx, 3));
    // 0x26d13c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x26d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26d140: 0x10000377  b           . + 4 + (0x377 << 2)
    ctx->pc = 0x26D140u;
    {
        const bool branch_taken_0x26d140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D140u;
        // 0x26d144: 0xa20300a0  sb          $v1, 0xA0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d140) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D148u;
label_26d148:
    // 0x26d148: 0x820400a5  lb          $a0, 0xA5($s0)
    ctx->pc = 0x26d148u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 165)));
    // 0x26d14c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26d150: 0xa20400a4  sb          $a0, 0xA4($s0)
    ctx->pc = 0x26d150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 164), (uint8_t)GPR_U32(ctx, 4));
    // 0x26d154: 0x10000372  b           . + 4 + (0x372 << 2)
    ctx->pc = 0x26D154u;
    {
        const bool branch_taken_0x26d154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D154u;
        // 0x26d158: 0xa20300a0  sb          $v1, 0xA0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d154) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D15Cu;
    // 0x26d15c: 0x0  nop
    ctx->pc = 0x26d15cu;
    // NOP
label_26d160:
    // 0x26d160: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x26d160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26d164: 0xa20300a4  sb          $v1, 0xA4($s0)
    ctx->pc = 0x26d164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 164), (uint8_t)GPR_U32(ctx, 3));
    // 0x26d168: 0x820300a4  lb          $v1, 0xA4($s0)
    ctx->pc = 0x26d168u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d16c: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x26d16cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x26d170: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D170u;
    {
        const bool branch_taken_0x26d170 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d170) {
            ctx->pc = 0x26D188u;
            goto label_26d188;
        }
    }
    ctx->pc = 0x26D178u;
    // 0x26d178: 0xa20400a4  sb          $a0, 0xA4($s0)
    ctx->pc = 0x26d178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 164), (uint8_t)GPR_U32(ctx, 4));
    // 0x26d17c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x26d17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26d180: 0x10000367  b           . + 4 + (0x367 << 2)
    ctx->pc = 0x26D180u;
    {
        const bool branch_taken_0x26d180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D180u;
        // 0x26d184: 0xa20300a0  sb          $v1, 0xA0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d180) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D188u;
label_26d188:
    // 0x26d188: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26d188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26d18c: 0x10000364  b           . + 4 + (0x364 << 2)
    ctx->pc = 0x26D18Cu;
    {
        const bool branch_taken_0x26d18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D18Cu;
        // 0x26d190: 0xa20300a0  sb          $v1, 0xA0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d18c) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D194u;
    // 0x26d194: 0x0  nop
    ctx->pc = 0x26d194u;
    // NOP
label_26d198:
    // 0x26d198: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26d198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26d19c: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x26d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x26d1a0: 0x30636000  andi        $v1, $v1, 0x6000
    ctx->pc = 0x26d1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24576);
    // 0x26d1a4: 0x1060035e  beqz        $v1, . + 4 + (0x35E << 2)
    ctx->pc = 0x26D1A4u;
    {
        const bool branch_taken_0x26d1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1A4u;
        // 0x26d1a8: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d1a4) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D1ACu;
    // 0x26d1ac: 0x8c22ea20  lw          $v0, -0x15E0($at)
    ctx->pc = 0x26d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
    // 0x26d1b0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x26d1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x26d1b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26D1B4u;
    {
        const bool branch_taken_0x26d1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1B4u;
        // 0x26d1b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d1b4) {
            ctx->pc = 0x26D1F8u;
            goto label_26d1f8;
        }
    }
    ctx->pc = 0x26D1BCu;
    // 0x26d1bc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26d1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26d1c0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26d1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26d1c4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26d1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26d1c8: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x26d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x26d1cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d1ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d1d0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26d1d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26d1d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26d1d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d1d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26d1d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d1dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26d1dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d1e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26d1e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d1e4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26D1E4u;
    SET_GPR_U32(ctx, 31, 0x26D1ECu);
    ctx->pc = 0x26D1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D1E4u;
    // 0x26d1e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26D1E4u, 0x26D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D1ECu;
label_26d1ec:
    // 0x26d1ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26D1ECu;
    {
        const bool branch_taken_0x26d1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d1ec) {
            ctx->pc = 0x26D230u;
            goto label_26d230;
        }
    }
    ctx->pc = 0x26D1F4u;
    // 0x26d1f4: 0x0  nop
    ctx->pc = 0x26d1f4u;
    // NOP
label_26d1f8:
    // 0x26d1f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d1fc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26d1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26d200: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26d200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26d204: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26d204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26d208: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26d208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26d20c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d210: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26d210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26d214: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26d214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d218: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26d218u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d21c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26d21cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d220: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26d220u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d224: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26D224u;
    SET_GPR_U32(ctx, 31, 0x26D22Cu);
    ctx->pc = 0x26D228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D224u;
    // 0x26d228: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26D224u, 0x26D22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D22Cu;
label_26d22c:
    // 0x26d22c: 0x0  nop
    ctx->pc = 0x26d22cu;
    // NOP
label_26d230:
    // 0x26d230: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26d230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d234: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26d234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26d238: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26d238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26d23c: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x26d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x26d240: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26d240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26d244: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d248: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26d248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26d24c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26d24cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d250: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26d250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d254: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26d254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d258: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26d258u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d25c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26D25Cu;
    SET_GPR_U32(ctx, 31, 0x26D264u);
    ctx->pc = 0x26D260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D25Cu;
    // 0x26d260: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26D25Cu, 0x26D264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D264u;
label_26d264:
    // 0x26d264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d268: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x26D268u;
    SET_GPR_U32(ctx, 31, 0x26D270u);
    ctx->pc = 0x26D26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D268u;
    // 0x26d26c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x26D268u, 0x26D270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D270u;
label_26d270:
    // 0x26d270: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26d270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26d274: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x26d274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26d278: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x26d278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x26d27c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d280: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26d280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d284: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26d284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d288: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x26D288u;
    SET_GPR_U32(ctx, 31, 0x26D290u);
    ctx->pc = 0x26D28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D288u;
    // 0x26d28c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x26D288u, 0x26D290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D290u;
label_26d290:
    // 0x26d290: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x26d290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26d294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26d294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d298: 0xa20400a0  sb          $a0, 0xA0($s0)
    ctx->pc = 0x26d298u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 4));
    // 0x26d29c: 0xa20300a6  sb          $v1, 0xA6($s0)
    ctx->pc = 0x26d29cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 166), (uint8_t)GPR_U32(ctx, 3));
    // 0x26d2a0: 0xa20000a8  sb          $zero, 0xA8($s0)
    ctx->pc = 0x26d2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d2a4: 0x1000031e  b           . + 4 + (0x31E << 2)
    ctx->pc = 0x26D2A4u;
    {
        const bool branch_taken_0x26d2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2A4u;
        // 0x26d2a8: 0xa20000a7  sb          $zero, 0xA7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 167), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d2a4) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D2ACu;
    // 0x26d2ac: 0x0  nop
    ctx->pc = 0x26d2acu;
    // NOP
label_26d2b0:
    // 0x26d2b0: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26d2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26d2b4: 0x8c24ea20  lw          $a0, -0x15E0($at)
    ctx->pc = 0x26d2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA20u));
    // 0x26d2b8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x26d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x26d2bc: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x26d2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x26d2c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26d2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26d2c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D2C4u;
    {
        const bool branch_taken_0x26d2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2C4u;
        // 0x26d2c8: 0x3c038080  lui         $v1, 0x8080 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d2c4) {
            ctx->pc = 0x26D2D8u;
            goto label_26d2d8;
        }
    }
    ctx->pc = 0x26D2CCu;
    // 0x26d2cc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26d2d0: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x26d2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x26d2d4: 0xac2322b4  sw          $v1, 0x22B4($at)
    ctx->pc = 0x26d2d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4E22B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4E22B4u, _value); } while (0);
label_26d2d8:
    // 0x26d2d8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x26d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x26d2dc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x26d2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x26d2e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26d2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26d2e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D2E4u;
    {
        const bool branch_taken_0x26d2e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2E4u;
        // 0x26d2e8: 0x3c038080  lui         $v1, 0x8080 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d2e4) {
            ctx->pc = 0x26D2F8u;
            goto label_26d2f8;
        }
    }
    ctx->pc = 0x26D2ECu;
    // 0x26d2ec: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26d2f0: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x26d2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x26d2f4: 0xac2322cc  sw          $v1, 0x22CC($at)
    ctx->pc = 0x26d2f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4E22CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4E22CCu, _value); } while (0);
label_26d2f8:
    // 0x26d2f8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x26d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x26d2fc: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x26d2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x26d300: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26d300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26d304: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D304u;
    {
        const bool branch_taken_0x26d304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D304u;
        // 0x26d308: 0x3c038080  lui         $v1, 0x8080 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d304) {
            ctx->pc = 0x26D318u;
            goto label_26d318;
        }
    }
    ctx->pc = 0x26D30Cu;
    // 0x26d30c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26d310: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x26d310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x26d314: 0xac2322e4  sw          $v1, 0x22E4($at)
    ctx->pc = 0x26d314u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4E22E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4E22E4u, _value); } while (0);
label_26d318:
    // 0x26d318: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26d318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26d31c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x26d31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x26d320: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26d320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26d324: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D324u;
    {
        const bool branch_taken_0x26d324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D324u;
        // 0x26d328: 0x3c038080  lui         $v1, 0x8080 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d324) {
            ctx->pc = 0x26D338u;
            goto label_26d338;
        }
    }
    ctx->pc = 0x26D32Cu;
    // 0x26d32c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26d330: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x26d330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x26d334: 0xac2322fc  sw          $v1, 0x22FC($at)
    ctx->pc = 0x26d334u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4E22FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4E22FCu, _value); } while (0);
label_26d338:
    // 0x26d338: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26d338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26d33c: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x26d33cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x26d340: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x26d340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x26d344: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x26d344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x26d348: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26d348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26d34c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x26D34Cu;
    {
        const bool branch_taken_0x26d34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d34c) {
            ctx->pc = 0x26D398u;
            goto label_26d398;
        }
    }
    ctx->pc = 0x26D354u;
    // 0x26d354: 0x82020097  lb          $v0, 0x97($s0)
    ctx->pc = 0x26d354u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 151)));
    // 0x26d358: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x26d358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x26d35c: 0xa2020097  sb          $v0, 0x97($s0)
    ctx->pc = 0x26d35cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 151), (uint8_t)GPR_U32(ctx, 2));
    // 0x26d360: 0x82020097  lb          $v0, 0x97($s0)
    ctx->pc = 0x26d360u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 151)));
    // 0x26d364: 0x2841fff0  slti        $at, $v0, -0x10
    ctx->pc = 0x26d364u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967280) ? 1 : 0);
    // 0x26d368: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D368u;
    {
        const bool branch_taken_0x26d368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D368u;
        // 0x26d36c: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d368) {
            ctx->pc = 0x26D378u;
            goto label_26d378;
        }
    }
    ctx->pc = 0x26D370u;
    // 0x26d370: 0xa2020097  sb          $v0, 0x97($s0)
    ctx->pc = 0x26d370u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 151), (uint8_t)GPR_U32(ctx, 2));
    // 0x26d374: 0x0  nop
    ctx->pc = 0x26d374u;
    // NOP
label_26d378:
    // 0x26d378: 0x82050096  lb          $a1, 0x96($s0)
    ctx->pc = 0x26d378u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x26d37c: 0x82060097  lb          $a2, 0x97($s0)
    ctx->pc = 0x26d37cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 151)));
    // 0x26d380: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26d380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26d384: 0xc05e468  jal         func_1791A0
    ctx->pc = 0x26D384u;
    SET_GPR_U32(ctx, 31, 0x26D38Cu);
    ctx->pc = 0x26D388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D384u;
    // 0x26d388: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791A0u, 0x26D384u, 0x26D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D38Cu;
label_26d38c:
    // 0x26d38c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x26D38Cu;
    {
        const bool branch_taken_0x26d38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d38c) {
            ctx->pc = 0x26D3E8u;
            goto label_26d3e8;
        }
    }
    ctx->pc = 0x26D394u;
    // 0x26d394: 0x0  nop
    ctx->pc = 0x26d394u;
    // NOP
label_26d398:
    // 0x26d398: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x26d398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x26d39c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x26d39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x26d3a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26d3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26d3a4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x26D3A4u;
    {
        const bool branch_taken_0x26d3a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d3a4) {
            ctx->pc = 0x26D3E8u;
            goto label_26d3e8;
        }
    }
    ctx->pc = 0x26D3ACu;
    // 0x26d3ac: 0x82020097  lb          $v0, 0x97($s0)
    ctx->pc = 0x26d3acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 151)));
    // 0x26d3b0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x26d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x26d3b4: 0xa2020097  sb          $v0, 0x97($s0)
    ctx->pc = 0x26d3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 151), (uint8_t)GPR_U32(ctx, 2));
    // 0x26d3b8: 0x82020097  lb          $v0, 0x97($s0)
    ctx->pc = 0x26d3b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 151)));
    // 0x26d3bc: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x26d3bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x26d3c0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D3C0u;
    {
        const bool branch_taken_0x26d3c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3C0u;
        // 0x26d3c4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3c0) {
            ctx->pc = 0x26D3D0u;
            goto label_26d3d0;
        }
    }
    ctx->pc = 0x26D3C8u;
    // 0x26d3c8: 0xa2020097  sb          $v0, 0x97($s0)
    ctx->pc = 0x26d3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 151), (uint8_t)GPR_U32(ctx, 2));
    // 0x26d3cc: 0x0  nop
    ctx->pc = 0x26d3ccu;
    // NOP
label_26d3d0:
    // 0x26d3d0: 0x82050096  lb          $a1, 0x96($s0)
    ctx->pc = 0x26d3d0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x26d3d4: 0x82060097  lb          $a2, 0x97($s0)
    ctx->pc = 0x26d3d4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 151)));
    // 0x26d3d8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26d3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26d3dc: 0xc05e468  jal         func_1791A0
    ctx->pc = 0x26D3DCu;
    SET_GPR_U32(ctx, 31, 0x26D3E4u);
    ctx->pc = 0x26D3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D3DCu;
    // 0x26d3e0: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791A0u, 0x26D3DCu, 0x26D3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3E4u;
label_26d3e4:
    // 0x26d3e4: 0x0  nop
    ctx->pc = 0x26d3e4u;
    // NOP
label_26d3e8:
    // 0x26d3e8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26d3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26d3ec: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x26d3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x26d3f0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x26d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x26d3f4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x26d3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x26d3f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26d3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26d3fc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x26D3FCu;
    {
        const bool branch_taken_0x26d3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d3fc) {
            ctx->pc = 0x26D448u;
            goto label_26d448;
        }
    }
    ctx->pc = 0x26D404u;
    // 0x26d404: 0x82020096  lb          $v0, 0x96($s0)
    ctx->pc = 0x26d404u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x26d408: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26d408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26d40c: 0xa2020096  sb          $v0, 0x96($s0)
    ctx->pc = 0x26d40cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 150), (uint8_t)GPR_U32(ctx, 2));
    // 0x26d410: 0x82020096  lb          $v0, 0x96($s0)
    ctx->pc = 0x26d410u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x26d414: 0x2841fff0  slti        $at, $v0, -0x10
    ctx->pc = 0x26d414u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967280) ? 1 : 0);
    // 0x26d418: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D418u;
    {
        const bool branch_taken_0x26d418 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D418u;
        // 0x26d41c: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d418) {
            ctx->pc = 0x26D428u;
            goto label_26d428;
        }
    }
    ctx->pc = 0x26D420u;
    // 0x26d420: 0xa2020096  sb          $v0, 0x96($s0)
    ctx->pc = 0x26d420u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 150), (uint8_t)GPR_U32(ctx, 2));
    // 0x26d424: 0x0  nop
    ctx->pc = 0x26d424u;
    // NOP
label_26d428:
    // 0x26d428: 0x82050096  lb          $a1, 0x96($s0)
    ctx->pc = 0x26d428u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x26d42c: 0x82060097  lb          $a2, 0x97($s0)
    ctx->pc = 0x26d42cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 151)));
    // 0x26d430: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26d430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26d434: 0xc05e468  jal         func_1791A0
    ctx->pc = 0x26D434u;
    SET_GPR_U32(ctx, 31, 0x26D43Cu);
    ctx->pc = 0x26D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D434u;
    // 0x26d438: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791A0u, 0x26D434u, 0x26D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D43Cu;
label_26d43c:
    // 0x26d43c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x26D43Cu;
    {
        const bool branch_taken_0x26d43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d43c) {
            ctx->pc = 0x26D498u;
            goto label_26d498;
        }
    }
    ctx->pc = 0x26D444u;
    // 0x26d444: 0x0  nop
    ctx->pc = 0x26d444u;
    // NOP
label_26d448:
    // 0x26d448: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26d448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26d44c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x26d44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x26d450: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26d450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26d454: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x26D454u;
    {
        const bool branch_taken_0x26d454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d454) {
            ctx->pc = 0x26D498u;
            goto label_26d498;
        }
    }
    ctx->pc = 0x26D45Cu;
    // 0x26d45c: 0x82020096  lb          $v0, 0x96($s0)
    ctx->pc = 0x26d45cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x26d460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26d460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26d464: 0xa2020096  sb          $v0, 0x96($s0)
    ctx->pc = 0x26d464u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 150), (uint8_t)GPR_U32(ctx, 2));
    // 0x26d468: 0x82020096  lb          $v0, 0x96($s0)
    ctx->pc = 0x26d468u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x26d46c: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x26d46cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x26d470: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D470u;
    {
        const bool branch_taken_0x26d470 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D470u;
        // 0x26d474: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d470) {
            ctx->pc = 0x26D480u;
            goto label_26d480;
        }
    }
    ctx->pc = 0x26D478u;
    // 0x26d478: 0xa2020096  sb          $v0, 0x96($s0)
    ctx->pc = 0x26d478u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 150), (uint8_t)GPR_U32(ctx, 2));
    // 0x26d47c: 0x0  nop
    ctx->pc = 0x26d47cu;
    // NOP
label_26d480:
    // 0x26d480: 0x82050096  lb          $a1, 0x96($s0)
    ctx->pc = 0x26d480u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x26d484: 0x82060097  lb          $a2, 0x97($s0)
    ctx->pc = 0x26d484u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 151)));
    // 0x26d488: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26d488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26d48c: 0xc05e468  jal         func_1791A0
    ctx->pc = 0x26D48Cu;
    SET_GPR_U32(ctx, 31, 0x26D494u);
    ctx->pc = 0x26D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D48Cu;
    // 0x26d490: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791A0u, 0x26D48Cu, 0x26D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D494u;
label_26d494:
    // 0x26d494: 0x0  nop
    ctx->pc = 0x26d494u;
    // NOP
label_26d498:
    // 0x26d498: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26d498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26d49c: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x26d49cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x26d4a0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x26d4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x26d4a4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26D4A4u;
    {
        const bool branch_taken_0x26d4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d4a4) {
            ctx->pc = 0x26D4C8u;
            goto label_26d4c8;
        }
    }
    ctx->pc = 0x26D4ACu;
    // 0x26d4ac: 0xa2000096  sb          $zero, 0x96($s0)
    ctx->pc = 0x26d4acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 150), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d4b0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26d4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26d4b4: 0xa2000097  sb          $zero, 0x97($s0)
    ctx->pc = 0x26d4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 151), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d4b8: 0x82050096  lb          $a1, 0x96($s0)
    ctx->pc = 0x26d4b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x26d4bc: 0x82060097  lb          $a2, 0x97($s0)
    ctx->pc = 0x26d4bcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 151)));
    // 0x26d4c0: 0xc05e468  jal         func_1791A0
    ctx->pc = 0x26D4C0u;
    SET_GPR_U32(ctx, 31, 0x26D4C8u);
    ctx->pc = 0x26D4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D4C0u;
    // 0x26d4c4: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791A0u, 0x26D4C0u, 0x26D4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4C8u;
label_26d4c8:
    // 0x26d4c8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26d4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26d4cc: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x26d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x26d4d0: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x26d4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x26d4d4: 0x10600292  beqz        $v1, . + 4 + (0x292 << 2)
    ctx->pc = 0x26D4D4u;
    {
        const bool branch_taken_0x26d4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4D4u;
        // 0x26d4d8: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4d4) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D4DCu;
    // 0x26d4dc: 0x8c22ea20  lw          $v0, -0x15E0($at)
    ctx->pc = 0x26d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
    // 0x26d4e0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x26d4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x26d4e4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26D4E4u;
    {
        const bool branch_taken_0x26d4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4E4u;
        // 0x26d4e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4e4) {
            ctx->pc = 0x26D528u;
            goto label_26d528;
        }
    }
    ctx->pc = 0x26D4ECu;
    // 0x26d4ec: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26d4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26d4f0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26d4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26d4f4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26d4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26d4f8: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x26d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x26d4fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d500: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26d500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26d504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26d504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d508: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26d508u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d50c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26d50cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d510: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26d510u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d514: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26D514u;
    SET_GPR_U32(ctx, 31, 0x26D51Cu);
    ctx->pc = 0x26D518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D514u;
    // 0x26d518: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26D514u, 0x26D51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D51Cu;
label_26d51c:
    // 0x26d51c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26D51Cu;
    {
        const bool branch_taken_0x26d51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d51c) {
            ctx->pc = 0x26D560u;
            goto label_26d560;
        }
    }
    ctx->pc = 0x26D524u;
    // 0x26d524: 0x0  nop
    ctx->pc = 0x26d524u;
    // NOP
label_26d528:
    // 0x26d528: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26d528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d52c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26d52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26d530: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26d530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26d534: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26d534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26d538: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26d538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26d53c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d540: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26d540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26d544: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26d544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d548: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26d548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d54c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26d54cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d550: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26d550u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d554: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26D554u;
    SET_GPR_U32(ctx, 31, 0x26D55Cu);
    ctx->pc = 0x26D558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D554u;
    // 0x26d558: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26D554u, 0x26D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D55Cu;
label_26d55c:
    // 0x26d55c: 0x0  nop
    ctx->pc = 0x26d55cu;
    // NOP
label_26d560:
    // 0x26d560: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d564: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26d564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26d568: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26d568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26d56c: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x26d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x26d570: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26d570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26d574: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d578: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26d578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26d57c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26d57cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d580: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26d580u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d584: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26d584u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d588: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26d588u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d58c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26D58Cu;
    SET_GPR_U32(ctx, 31, 0x26D594u);
    ctx->pc = 0x26D590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D58Cu;
    // 0x26d590: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26D58Cu, 0x26D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D594u;
label_26d594:
    // 0x26d594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d598: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x26D598u;
    SET_GPR_U32(ctx, 31, 0x26D5A0u);
    ctx->pc = 0x26D59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D598u;
    // 0x26d59c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x26D598u, 0x26D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5A0u;
label_26d5a0:
    // 0x26d5a0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x26d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26d5a4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26d5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26d5a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d5ac: 0xa20300a0  sb          $v1, 0xA0($s0)
    ctx->pc = 0x26d5acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x26d5b0: 0xa20200a6  sb          $v0, 0xA6($s0)
    ctx->pc = 0x26d5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 166), (uint8_t)GPR_U32(ctx, 2));
    // 0x26d5b4: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x26d5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x26d5b8: 0xa20000a8  sb          $zero, 0xA8($s0)
    ctx->pc = 0x26d5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d5bc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x26d5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26d5c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d5c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26d5c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d5c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26d5c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d5cc: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x26d5ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26d5d0: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x26D5D0u;
    SET_GPR_U32(ctx, 31, 0x26D5D8u);
    ctx->pc = 0x26D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5D0u;
    // 0x26d5d4: 0xa20000a7  sb          $zero, 0xA7($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 167), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x26D5D0u, 0x26D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5D8u;
label_26d5d8:
    // 0x26d5d8: 0x10000251  b           . + 4 + (0x251 << 2)
    ctx->pc = 0x26D5D8u;
    {
        const bool branch_taken_0x26d5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d5d8) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D5E0u;
label_26d5e0:
    // 0x26d5e0: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26d5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26d5e4: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x26d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x26d5e8: 0x30636000  andi        $v1, $v1, 0x6000
    ctx->pc = 0x26d5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24576);
    // 0x26d5ec: 0x1060024c  beqz        $v1, . + 4 + (0x24C << 2)
    ctx->pc = 0x26D5ECu;
    {
        const bool branch_taken_0x26d5ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5ECu;
        // 0x26d5f0: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d5ec) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D5F4u;
    // 0x26d5f4: 0x8c22ea20  lw          $v0, -0x15E0($at)
    ctx->pc = 0x26d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
    // 0x26d5f8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x26d5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x26d5fc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26D5FCu;
    {
        const bool branch_taken_0x26d5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5FCu;
        // 0x26d600: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d5fc) {
            ctx->pc = 0x26D640u;
            goto label_26d640;
        }
    }
    ctx->pc = 0x26D604u;
    // 0x26d604: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26d604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26d608: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26d608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26d60c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26d610: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x26d610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x26d614: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d618: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26d618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26d61c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26d61cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d620: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26d620u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d624: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26d624u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d628: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26d628u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d62c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26D62Cu;
    SET_GPR_U32(ctx, 31, 0x26D634u);
    ctx->pc = 0x26D630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D62Cu;
    // 0x26d630: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26D62Cu, 0x26D634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D634u;
label_26d634:
    // 0x26d634: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26D634u;
    {
        const bool branch_taken_0x26d634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d634) {
            ctx->pc = 0x26D678u;
            goto label_26d678;
        }
    }
    ctx->pc = 0x26D63Cu;
    // 0x26d63c: 0x0  nop
    ctx->pc = 0x26d63cu;
    // NOP
label_26d640:
    // 0x26d640: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26d640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d644: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26d644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26d648: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26d648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26d64c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26d650: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26d650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26d654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d658: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26d658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26d65c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26d65cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d660: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26d660u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d664: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26d664u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d668: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26d668u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d66c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26D66Cu;
    SET_GPR_U32(ctx, 31, 0x26D674u);
    ctx->pc = 0x26D670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D66Cu;
    // 0x26d670: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26D66Cu, 0x26D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D674u;
label_26d674:
    // 0x26d674: 0x0  nop
    ctx->pc = 0x26d674u;
    // NOP
label_26d678:
    // 0x26d678: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26d678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d67c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26d67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26d680: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26d680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26d684: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x26d684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x26d688: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26d688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26d68c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d690: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26d690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26d694: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26d694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d698: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26d698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d69c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26d69cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26d6a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6a4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26D6A4u;
    SET_GPR_U32(ctx, 31, 0x26D6ACu);
    ctx->pc = 0x26D6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D6A4u;
    // 0x26d6a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26D6A4u, 0x26D6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6ACu;
label_26d6ac:
    // 0x26d6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6b0: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x26D6B0u;
    SET_GPR_U32(ctx, 31, 0x26D6B8u);
    ctx->pc = 0x26D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D6B0u;
    // 0x26d6b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x26D6B0u, 0x26D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6B8u;
label_26d6b8:
    // 0x26d6b8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x26d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26d6bc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26d6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26d6c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d6c4: 0xa20300a0  sb          $v1, 0xA0($s0)
    ctx->pc = 0x26d6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x26d6c8: 0xa20200a6  sb          $v0, 0xA6($s0)
    ctx->pc = 0x26d6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 166), (uint8_t)GPR_U32(ctx, 2));
    // 0x26d6cc: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x26d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x26d6d0: 0xa20000a8  sb          $zero, 0xA8($s0)
    ctx->pc = 0x26d6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d6d4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x26d6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26d6d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d6d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26d6dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26d6e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6e4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x26d6e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26d6e8: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x26D6E8u;
    SET_GPR_U32(ctx, 31, 0x26D6F0u);
    ctx->pc = 0x26D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D6E8u;
    // 0x26d6ec: 0xa20000a7  sb          $zero, 0xA7($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 167), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x26D6E8u, 0x26D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6F0u;
label_26d6f0:
    // 0x26d6f0: 0x1000020b  b           . + 4 + (0x20B << 2)
    ctx->pc = 0x26D6F0u;
    {
        const bool branch_taken_0x26d6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d6f0) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D6F8u;
label_26d6f8:
    // 0x26d6f8: 0x820300a9  lb          $v1, 0xA9($s0)
    ctx->pc = 0x26d6f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 169)));
    // 0x26d6fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26d6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d700: 0x1066004d  beq         $v1, $a2, . + 4 + (0x4D << 2)
    ctx->pc = 0x26D700u;
    {
        const bool branch_taken_0x26d700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x26d700) {
            ctx->pc = 0x26D838u;
            goto label_26d838;
        }
    }
    ctx->pc = 0x26D708u;
    // 0x26d708: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D708u;
    {
        const bool branch_taken_0x26d708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d708) {
            ctx->pc = 0x26D718u;
            goto label_26d718;
        }
    }
    ctx->pc = 0x26D710u;
    // 0x26d710: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x26D710u;
    {
        const bool branch_taken_0x26d710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d710) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D718u;
label_26d718:
    // 0x26d718: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x26d718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x26d71c: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x26d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x26d720: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x26d720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x26d724: 0x34639090  ori         $v1, $v1, 0x9090
    ctx->pc = 0x26d724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x26d728: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x26d728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26d72c: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x26d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
    // 0x26d730: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x26d730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x26d734: 0x148301fa  bne         $a0, $v1, . + 4 + (0x1FA << 2)
    ctx->pc = 0x26D734u;
    {
        const bool branch_taken_0x26d734 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x26D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D734u;
        // 0x26d738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d734) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D73Cu;
    // 0x26d73c: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x26D73Cu;
    SET_GPR_U32(ctx, 31, 0x26D744u);
    ctx->pc = 0x26D740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D73Cu;
    // 0x26d740: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x26D73Cu, 0x26D744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D744u;
label_26d744:
    // 0x26d744: 0x820700a4  lb          $a3, 0xA4($s0)
    ctx->pc = 0x26d744u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d748: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x26d748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x26d74c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x26d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x26d750: 0x24a51734  addiu       $a1, $a1, 0x1734
    ctx->pc = 0x26d750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5940));
    // 0x26d754: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26d758: 0x24631736  addiu       $v1, $v1, 0x1736
    ctx->pc = 0x26d758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5942));
    // 0x26d75c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26d75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d760: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x26d760u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x26d764: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x26d764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x26d768: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x26d768u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x26d76c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x26d76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x26d770: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x26d770u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26d774: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x26d774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x26d778: 0xa4251fc4  sh          $a1, 0x1FC4($at)
    ctx->pc = 0x26d778u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8132), (uint16_t)GPR_U32(ctx, 5));
    // 0x26d77c: 0x820600a4  lb          $a2, 0xA4($s0)
    ctx->pc = 0x26d77cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d780: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26d784: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x26d784u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26d788: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x26d788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x26d78c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x26d78cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x26d790: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x26d790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26d794: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x26d794u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26d798: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x26d798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x26d79c: 0xa4251fc6  sh          $a1, 0x1FC6($at)
    ctx->pc = 0x26d79cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8134), (uint16_t)GPR_U32(ctx, 5));
    // 0x26d7a0: 0x820600a4  lb          $a2, 0xA4($s0)
    ctx->pc = 0x26d7a0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d7a4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26d7a8: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x26d7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26d7ac: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x26d7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x26d7b0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x26d7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x26d7b4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x26d7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26d7b8: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x26d7b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26d7bc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x26d7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x26d7c0: 0xa4251616  sh          $a1, 0x1616($at)
    ctx->pc = 0x26d7c0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5654), (uint16_t)GPR_U32(ctx, 5));
    // 0x26d7c4: 0x820600a4  lb          $a2, 0xA4($s0)
    ctx->pc = 0x26d7c4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d7c8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26d7cc: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x26d7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26d7d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x26d7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x26d7d4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x26d7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x26d7d8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x26d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26d7dc: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x26d7dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26d7e0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x26d7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x26d7e4: 0xa425162e  sh          $a1, 0x162E($at)
    ctx->pc = 0x26d7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5678), (uint16_t)GPR_U32(ctx, 5));
    // 0x26d7e8: 0x820600a4  lb          $a2, 0xA4($s0)
    ctx->pc = 0x26d7e8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d7ec: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26d7f0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x26d7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26d7f4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x26d7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x26d7f8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x26d7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x26d7fc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x26d7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26d800: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x26d800u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26d804: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x26d804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x26d808: 0xa4251646  sh          $a1, 0x1646($at)
    ctx->pc = 0x26d808u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5702), (uint16_t)GPR_U32(ctx, 5));
    // 0x26d80c: 0x820600a4  lb          $a2, 0xA4($s0)
    ctx->pc = 0x26d80cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d810: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26d814: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x26d814u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26d818: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x26d818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x26d81c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x26d81cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x26d820: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26d820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26d824: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26d824u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26d828: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26d828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26d82c: 0xa423165e  sh          $v1, 0x165E($at)
    ctx->pc = 0x26d82cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5726), (uint16_t)GPR_U32(ctx, 3));
    // 0x26d830: 0x100001bb  b           . + 4 + (0x1BB << 2)
    ctx->pc = 0x26D830u;
    {
        const bool branch_taken_0x26d830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D830u;
        // 0x26d834: 0xa20400a9  sb          $a0, 0xA9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 169), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d830) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D838u;
label_26d838:
    // 0x26d838: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x26d838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x26d83c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x26d83cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x26d840: 0x3c038090  lui         $v1, 0x8090
    ctx->pc = 0x26d840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32912 << 16));
    // 0x26d844: 0x34639090  ori         $v1, $v1, 0x9090
    ctx->pc = 0x26d844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x26d848: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x26d848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26d84c: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x26d84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
    // 0x26d850: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x26d850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x26d854: 0x148301b2  bne         $a0, $v1, . + 4 + (0x1B2 << 2)
    ctx->pc = 0x26D854u;
    {
        const bool branch_taken_0x26d854 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26d854) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D85Cu;
    // 0x26d85c: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x26d85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x26d860: 0xa20000a9  sb          $zero, 0xA9($s0)
    ctx->pc = 0x26d860u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d864: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x26D864u;
    {
        const bool branch_taken_0x26d864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D864u;
        // 0x26d868: 0xa20600a0  sb          $a2, 0xA0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d864) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D86Cu;
    // 0x26d86c: 0x0  nop
    ctx->pc = 0x26d86cu;
    // NOP
label_26d870:
    // 0x26d870: 0x820300a9  lb          $v1, 0xA9($s0)
    ctx->pc = 0x26d870u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 169)));
    // 0x26d874: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26d874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d878: 0x10660083  beq         $v1, $a2, . + 4 + (0x83 << 2)
    ctx->pc = 0x26D878u;
    {
        const bool branch_taken_0x26d878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x26d878) {
            ctx->pc = 0x26DA88u;
            goto label_26da88;
        }
    }
    ctx->pc = 0x26D880u;
    // 0x26d880: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D880u;
    {
        const bool branch_taken_0x26d880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d880) {
            ctx->pc = 0x26D890u;
            goto label_26d890;
        }
    }
    ctx->pc = 0x26D888u;
    // 0x26d888: 0x100001a5  b           . + 4 + (0x1A5 << 2)
    ctx->pc = 0x26D888u;
    {
        const bool branch_taken_0x26d888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d888) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D890u;
label_26d890:
    // 0x26d890: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x26d890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x26d894: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x26d894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x26d898: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x26d898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x26d89c: 0x34639090  ori         $v1, $v1, 0x9090
    ctx->pc = 0x26d89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x26d8a0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x26d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26d8a4: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x26d8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
    // 0x26d8a8: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x26d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x26d8ac: 0x1483019c  bne         $a0, $v1, . + 4 + (0x19C << 2)
    ctx->pc = 0x26D8ACu;
    {
        const bool branch_taken_0x26d8ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26d8ac) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26D8B4u;
    // 0x26d8b4: 0x820300a4  lb          $v1, 0xA4($s0)
    ctx->pc = 0x26d8b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d8b8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x26d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26d8bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D8BCu;
    {
        const bool branch_taken_0x26d8bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8BCu;
        // 0x26d8c0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d8bc) {
            ctx->pc = 0x26D8D0u;
            goto label_26d8d0;
        }
    }
    ctx->pc = 0x26D8C4u;
    // 0x26d8c4: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x26D8C4u;
    {
        const bool branch_taken_0x26d8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d8c4) {
            ctx->pc = 0x26D978u;
            goto label_26d978;
        }
    }
    ctx->pc = 0x26D8CCu;
    // 0x26d8cc: 0x0  nop
    ctx->pc = 0x26d8ccu;
    // NOP
label_26d8d0:
    // 0x26d8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d8d4: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x26D8D4u;
    SET_GPR_U32(ctx, 31, 0x26D8DCu);
    ctx->pc = 0x26D8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D8D4u;
    // 0x26d8d8: 0x24050f00  addiu       $a1, $zero, 0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x26D8D4u, 0x26D8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D8DCu;
label_26d8dc:
    // 0x26d8dc: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26d8dcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d8e0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x26d8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x26d8e4: 0x24a51736  addiu       $a1, $a1, 0x1736
    ctx->pc = 0x26d8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5942));
    // 0x26d8e8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26d8ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26d8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26d8f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26d8f4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26d8f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26d8fc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26d8fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26d900: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26d900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26d904: 0xa42316d6  sh          $v1, 0x16D6($at)
    ctx->pc = 0x26d904u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5846), (uint16_t)GPR_U32(ctx, 3));
    // 0x26d908: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26d908u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d90c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26d910: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26d910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26d914: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26d914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26d918: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26d918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26d91c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26d920: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26d920u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26d924: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26d924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26d928: 0xa42316ee  sh          $v1, 0x16EE($at)
    ctx->pc = 0x26d928u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5870), (uint16_t)GPR_U32(ctx, 3));
    // 0x26d92c: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26d92cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d930: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26d934: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26d934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26d938: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26d938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26d93c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26d940: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26d940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26d944: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26d944u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26d948: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26d948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26d94c: 0xa4231706  sh          $v1, 0x1706($at)
    ctx->pc = 0x26d94cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5894), (uint16_t)GPR_U32(ctx, 3));
    // 0x26d950: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26d950u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d954: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26d958: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26d958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26d95c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26d960: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26d960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26d964: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26d964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26d968: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26d968u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26d96c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26d970: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x26D970u;
    {
        const bool branch_taken_0x26d970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D970u;
        // 0x26d974: 0xa423171e  sh          $v1, 0x171E($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 5918), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d970) {
            ctx->pc = 0x26DA20u;
            goto label_26da20;
        }
    }
    ctx->pc = 0x26D978u;
label_26d978:
    // 0x26d978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d97c: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x26D97Cu;
    SET_GPR_U32(ctx, 31, 0x26D984u);
    ctx->pc = 0x26D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D97Cu;
    // 0x26d980: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x26D97Cu, 0x26D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D984u;
label_26d984:
    // 0x26d984: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26d984u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d988: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x26d988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x26d98c: 0x24a51736  addiu       $a1, $a1, 0x1736
    ctx->pc = 0x26d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5942));
    // 0x26d990: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26d994: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26d994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26d998: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26d998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26d99c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26d9a0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26d9a4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26d9a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26d9a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26d9ac: 0xa4231676  sh          $v1, 0x1676($at)
    ctx->pc = 0x26d9acu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5750), (uint16_t)GPR_U32(ctx, 3));
    // 0x26d9b0: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26d9b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d9b4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26d9b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26d9bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26d9c0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26d9c4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26d9c8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26d9c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26d9cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26d9d0: 0xa423168e  sh          $v1, 0x168E($at)
    ctx->pc = 0x26d9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5774), (uint16_t)GPR_U32(ctx, 3));
    // 0x26d9d4: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26d9d4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d9d8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26d9dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26d9e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26d9e4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26d9e8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26d9ec: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26d9ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26d9f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26d9f4: 0xa42316a6  sh          $v1, 0x16A6($at)
    ctx->pc = 0x26d9f4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5798), (uint16_t)GPR_U32(ctx, 3));
    // 0x26d9f8: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26d9f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26d9fc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26d9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26da00: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26da00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26da04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26da04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26da08: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26da08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26da0c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26da10: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26da10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26da14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26da14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26da18: 0xa42316be  sh          $v1, 0x16BE($at)
    ctx->pc = 0x26da18u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5822), (uint16_t)GPR_U32(ctx, 3));
    // 0x26da1c: 0x0  nop
    ctx->pc = 0x26da1cu;
    // NOP
label_26da20:
    // 0x26da20: 0x820700a4  lb          $a3, 0xA4($s0)
    ctx->pc = 0x26da20u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26da24: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x26da24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x26da28: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x26da28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x26da2c: 0x24a51734  addiu       $a1, $a1, 0x1734
    ctx->pc = 0x26da2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5940));
    // 0x26da30: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26da30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26da34: 0x24841736  addiu       $a0, $a0, 0x1736
    ctx->pc = 0x26da34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5942));
    // 0x26da38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26da38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26da3c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x26da3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x26da40: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x26da40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x26da44: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x26da44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x26da48: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x26da48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x26da4c: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x26da4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26da50: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x26da50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x26da54: 0xa4251fc4  sh          $a1, 0x1FC4($at)
    ctx->pc = 0x26da54u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8132), (uint16_t)GPR_U32(ctx, 5));
    // 0x26da58: 0x820600a4  lb          $a2, 0xA4($s0)
    ctx->pc = 0x26da58u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26da5c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26da5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26da60: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x26da60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26da64: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x26da64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x26da68: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x26da68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x26da6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x26da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x26da70: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x26da70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26da74: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x26da74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x26da78: 0xa4241fc6  sh          $a0, 0x1FC6($at)
    ctx->pc = 0x26da78u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8134), (uint16_t)GPR_U32(ctx, 4));
    // 0x26da7c: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x26DA7Cu;
    {
        const bool branch_taken_0x26da7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA7Cu;
        // 0x26da80: 0xa20300a9  sb          $v1, 0xA9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 169), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da7c) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DA84u;
    // 0x26da84: 0x0  nop
    ctx->pc = 0x26da84u;
    // NOP
label_26da88:
    // 0x26da88: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x26da88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x26da8c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x26da8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x26da90: 0x3c038090  lui         $v1, 0x8090
    ctx->pc = 0x26da90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32912 << 16));
    // 0x26da94: 0x34639090  ori         $v1, $v1, 0x9090
    ctx->pc = 0x26da94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x26da98: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x26da98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26da9c: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x26da9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
    // 0x26daa0: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x26daa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x26daa4: 0x1483011e  bne         $a0, $v1, . + 4 + (0x11E << 2)
    ctx->pc = 0x26DAA4u;
    {
        const bool branch_taken_0x26daa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26daa4) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DAACu;
    // 0x26daac: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x26daacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x26dab0: 0xa20000a9  sb          $zero, 0xA9($s0)
    ctx->pc = 0x26dab0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x26dab4: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x26DAB4u;
    {
        const bool branch_taken_0x26dab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAB4u;
        // 0x26dab8: 0xa20600a0  sb          $a2, 0xA0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dab4) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DABCu;
    // 0x26dabc: 0x0  nop
    ctx->pc = 0x26dabcu;
    // NOP
label_26dac0:
    // 0x26dac0: 0x820300a9  lb          $v1, 0xA9($s0)
    ctx->pc = 0x26dac0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 169)));
    // 0x26dac4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26dac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26dac8: 0x10660083  beq         $v1, $a2, . + 4 + (0x83 << 2)
    ctx->pc = 0x26DAC8u;
    {
        const bool branch_taken_0x26dac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x26dac8) {
            ctx->pc = 0x26DCD8u;
            goto label_26dcd8;
        }
    }
    ctx->pc = 0x26DAD0u;
    // 0x26dad0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DAD0u;
    {
        const bool branch_taken_0x26dad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dad0) {
            ctx->pc = 0x26DAE0u;
            goto label_26dae0;
        }
    }
    ctx->pc = 0x26DAD8u;
    // 0x26dad8: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x26DAD8u;
    {
        const bool branch_taken_0x26dad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dad8) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DAE0u;
label_26dae0:
    // 0x26dae0: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x26dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x26dae4: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x26dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x26dae8: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x26dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x26daec: 0x34639090  ori         $v1, $v1, 0x9090
    ctx->pc = 0x26daecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x26daf0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x26daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26daf4: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x26daf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
    // 0x26daf8: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x26daf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x26dafc: 0x14830108  bne         $a0, $v1, . + 4 + (0x108 << 2)
    ctx->pc = 0x26DAFCu;
    {
        const bool branch_taken_0x26dafc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26dafc) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DB04u;
    // 0x26db04: 0x820300a4  lb          $v1, 0xA4($s0)
    ctx->pc = 0x26db04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26db08: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x26db08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26db0c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DB0Cu;
    {
        const bool branch_taken_0x26db0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB0Cu;
        // 0x26db10: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db0c) {
            ctx->pc = 0x26DB20u;
            goto label_26db20;
        }
    }
    ctx->pc = 0x26DB14u;
    // 0x26db14: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x26DB14u;
    {
        const bool branch_taken_0x26db14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26db14) {
            ctx->pc = 0x26DBC8u;
            goto label_26dbc8;
        }
    }
    ctx->pc = 0x26DB1Cu;
    // 0x26db1c: 0x0  nop
    ctx->pc = 0x26db1cu;
    // NOP
label_26db20:
    // 0x26db20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26db20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26db24: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x26DB24u;
    SET_GPR_U32(ctx, 31, 0x26DB2Cu);
    ctx->pc = 0x26DB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB24u;
    // 0x26db28: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x26DB24u, 0x26DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB2Cu;
label_26db2c:
    // 0x26db2c: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26db2cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26db30: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x26db30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x26db34: 0x24a51736  addiu       $a1, $a1, 0x1736
    ctx->pc = 0x26db34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5942));
    // 0x26db38: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26db38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26db3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26db40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26db40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26db44: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26db44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26db48: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26db48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26db4c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26db4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26db50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26db50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26db54: 0xa4231676  sh          $v1, 0x1676($at)
    ctx->pc = 0x26db54u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5750), (uint16_t)GPR_U32(ctx, 3));
    // 0x26db58: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26db58u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26db5c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26db5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26db60: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26db60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26db64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26db64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26db68: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26db68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26db6c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26db70: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26db70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26db74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26db74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26db78: 0xa423168e  sh          $v1, 0x168E($at)
    ctx->pc = 0x26db78u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5774), (uint16_t)GPR_U32(ctx, 3));
    // 0x26db7c: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26db7cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26db80: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26db80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26db84: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26db84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26db88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26db88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26db8c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26db90: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26db90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26db94: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26db94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26db98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26db98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26db9c: 0xa42316a6  sh          $v1, 0x16A6($at)
    ctx->pc = 0x26db9cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5798), (uint16_t)GPR_U32(ctx, 3));
    // 0x26dba0: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26dba0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26dba4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26dba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26dba8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26dbac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26dbb0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26dbb4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26dbb8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26dbb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26dbbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26dbc0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x26DBC0u;
    {
        const bool branch_taken_0x26dbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBC0u;
        // 0x26dbc4: 0xa42316be  sh          $v1, 0x16BE($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 5822), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dbc0) {
            ctx->pc = 0x26DC70u;
            goto label_26dc70;
        }
    }
    ctx->pc = 0x26DBC8u;
label_26dbc8:
    // 0x26dbc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26dbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dbcc: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x26DBCCu;
    SET_GPR_U32(ctx, 31, 0x26DBD4u);
    ctx->pc = 0x26DBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DBCCu;
    // 0x26dbd0: 0x24050f00  addiu       $a1, $zero, 0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x26DBCCu, 0x26DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBD4u;
label_26dbd4:
    // 0x26dbd4: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26dbd4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26dbd8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x26dbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x26dbdc: 0x24a51736  addiu       $a1, $a1, 0x1736
    ctx->pc = 0x26dbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5942));
    // 0x26dbe0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26dbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26dbe4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26dbe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26dbec: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26dbf0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26dbf4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26dbf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26dbf8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26dbfc: 0xa42316d6  sh          $v1, 0x16D6($at)
    ctx->pc = 0x26dbfcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5846), (uint16_t)GPR_U32(ctx, 3));
    // 0x26dc00: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26dc00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26dc04: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26dc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26dc08: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26dc0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26dc10: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26dc14: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26dc18: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26dc18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26dc1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26dc20: 0xa42316ee  sh          $v1, 0x16EE($at)
    ctx->pc = 0x26dc20u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5870), (uint16_t)GPR_U32(ctx, 3));
    // 0x26dc24: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26dc24u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26dc28: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26dc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26dc2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26dc30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26dc34: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26dc34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26dc38: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26dc3c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26dc3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26dc40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26dc44: 0xa4231706  sh          $v1, 0x1706($at)
    ctx->pc = 0x26dc44u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5894), (uint16_t)GPR_U32(ctx, 3));
    // 0x26dc48: 0x820400a4  lb          $a0, 0xA4($s0)
    ctx->pc = 0x26dc48u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26dc4c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26dc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26dc50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26dc54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26dc58: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26dc5c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26dc60: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26dc60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26dc64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26dc68: 0xa423171e  sh          $v1, 0x171E($at)
    ctx->pc = 0x26dc68u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5918), (uint16_t)GPR_U32(ctx, 3));
    // 0x26dc6c: 0x0  nop
    ctx->pc = 0x26dc6cu;
    // NOP
label_26dc70:
    // 0x26dc70: 0x820700a4  lb          $a3, 0xA4($s0)
    ctx->pc = 0x26dc70u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26dc74: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x26dc74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x26dc78: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x26dc78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x26dc7c: 0x24a51734  addiu       $a1, $a1, 0x1734
    ctx->pc = 0x26dc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5940));
    // 0x26dc80: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26dc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26dc84: 0x24841736  addiu       $a0, $a0, 0x1736
    ctx->pc = 0x26dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5942));
    // 0x26dc88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26dc8c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x26dc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x26dc90: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x26dc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x26dc94: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x26dc94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x26dc98: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x26dc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x26dc9c: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x26dc9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26dca0: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x26dca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x26dca4: 0xa4251fc4  sh          $a1, 0x1FC4($at)
    ctx->pc = 0x26dca4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8132), (uint16_t)GPR_U32(ctx, 5));
    // 0x26dca8: 0x820600a4  lb          $a2, 0xA4($s0)
    ctx->pc = 0x26dca8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26dcac: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26dcacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26dcb0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x26dcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26dcb4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x26dcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x26dcb8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x26dcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x26dcbc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x26dcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x26dcc0: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x26dcc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26dcc4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x26dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x26dcc8: 0xa4241fc6  sh          $a0, 0x1FC6($at)
    ctx->pc = 0x26dcc8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8134), (uint16_t)GPR_U32(ctx, 4));
    // 0x26dccc: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x26DCCCu;
    {
        const bool branch_taken_0x26dccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCCCu;
        // 0x26dcd0: 0xa20300a9  sb          $v1, 0xA9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 169), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dccc) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DCD4u;
    // 0x26dcd4: 0x0  nop
    ctx->pc = 0x26dcd4u;
    // NOP
label_26dcd8:
    // 0x26dcd8: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x26dcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x26dcdc: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x26dcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x26dce0: 0x3c038090  lui         $v1, 0x8090
    ctx->pc = 0x26dce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32912 << 16));
    // 0x26dce4: 0x34639090  ori         $v1, $v1, 0x9090
    ctx->pc = 0x26dce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x26dce8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x26dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26dcec: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x26dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
    // 0x26dcf0: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x26dcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x26dcf4: 0x1483008a  bne         $a0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x26DCF4u;
    {
        const bool branch_taken_0x26dcf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26dcf4) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DCFCu;
    // 0x26dcfc: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x26dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x26dd00: 0xa20000a9  sb          $zero, 0xA9($s0)
    ctx->pc = 0x26dd00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x26dd04: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x26DD04u;
    {
        const bool branch_taken_0x26dd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD04u;
        // 0x26dd08: 0xa20600a0  sb          $a2, 0xA0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd04) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DD0Cu;
    // 0x26dd0c: 0x0  nop
    ctx->pc = 0x26dd0cu;
    // NOP
label_26dd10:
    // 0x26dd10: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26dd14: 0xc063d48  jal         func_18F520
    ctx->pc = 0x26DD14u;
    SET_GPR_U32(ctx, 31, 0x26DD1Cu);
    ctx->pc = 0x26DD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD14u;
    // 0x26dd18: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x26DD14u, 0x26DD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD1Cu;
label_26dd1c:
    // 0x26dd1c: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x26DD1Cu;
    {
        const bool branch_taken_0x26dd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26dd1c) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DD24u;
    // 0x26dd24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26dd28: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26dd28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26dd2c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26dd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26dd30: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26dd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26dd34: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x26dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x26dd38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26dd38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd3c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26dd3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26dd40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26dd40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26dd44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26dd48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26dd4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd50: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26DD50u;
    SET_GPR_U32(ctx, 31, 0x26DD58u);
    ctx->pc = 0x26DD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD50u;
    // 0x26dd54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26DD50u, 0x26DD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD58u;
label_26dd58:
    // 0x26dd58: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26dd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26dd5c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x26dd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26dd60: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x26dd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x26dd64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26dd64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26dd68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26dd6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd70: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x26DD70u;
    SET_GPR_U32(ctx, 31, 0x26DD78u);
    ctx->pc = 0x26DD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD70u;
    // 0x26dd74: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x26DD70u, 0x26DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD78u;
label_26dd78:
    // 0x26dd78: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x26dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26dd7c: 0xa20300a0  sb          $v1, 0xA0($s0)
    ctx->pc = 0x26dd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x26dd80: 0x920300a7  lbu         $v1, 0xA7($s0)
    ctx->pc = 0x26dd80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 167)));
    // 0x26dd84: 0xa20300a1  sb          $v1, 0xA1($s0)
    ctx->pc = 0x26dd84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 161), (uint8_t)GPR_U32(ctx, 3));
    // 0x26dd88: 0x920300a8  lbu         $v1, 0xA8($s0)
    ctx->pc = 0x26dd88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x26dd8c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x26DD8Cu;
    {
        const bool branch_taken_0x26dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD8Cu;
        // 0x26dd90: 0xa20300a2  sb          $v1, 0xA2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 162), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd8c) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DD94u;
    // 0x26dd94: 0x0  nop
    ctx->pc = 0x26dd94u;
    // NOP
label_26dd98:
    // 0x26dd98: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26dd9c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x26DD9Cu;
    SET_GPR_U32(ctx, 31, 0x26DDA4u);
    ctx->pc = 0x26DDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD9Cu;
    // 0x26dda0: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x26DD9Cu, 0x26DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DDA4u;
label_26dda4:
    // 0x26dda4: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x26DDA4u;
    {
        const bool branch_taken_0x26dda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26dda4) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DDACu;
    // 0x26ddac: 0x820300a4  lb          $v1, 0xA4($s0)
    ctx->pc = 0x26ddacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x26ddb0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x26ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26ddb4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26DDB4u;
    {
        const bool branch_taken_0x26ddb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDB4u;
        // 0x26ddb8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ddb4) {
            ctx->pc = 0x26DE08u;
            goto label_26de08;
        }
    }
    ctx->pc = 0x26DDBCu;
    // 0x26ddbc: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26DDBCu;
    {
        const bool branch_taken_0x26ddbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ddbc) {
            ctx->pc = 0x26DE08u;
            goto label_26de08;
        }
    }
    ctx->pc = 0x26DDC4u;
    // 0x26ddc4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x26ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x26ddc8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26DDC8u;
    {
        const bool branch_taken_0x26ddc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDC8u;
        // 0x26ddcc: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ddc8) {
            ctx->pc = 0x26DDF0u;
            goto label_26ddf0;
        }
    }
    ctx->pc = 0x26DDD0u;
    // 0x26ddd0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DDD0u;
    {
        const bool branch_taken_0x26ddd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ddd0) {
            ctx->pc = 0x26DDF0u;
            goto label_26ddf0;
        }
    }
    ctx->pc = 0x26DDD8u;
    // 0x26ddd8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x26ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26dddc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DDDCu;
    {
        const bool branch_taken_0x26dddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26dddc) {
            ctx->pc = 0x26DDF0u;
            goto label_26ddf0;
        }
    }
    ctx->pc = 0x26DDE4u;
    // 0x26dde4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26DDE4u;
    {
        const bool branch_taken_0x26dde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dde4) {
            ctx->pc = 0x26DE20u;
            goto label_26de20;
        }
    }
    ctx->pc = 0x26DDECu;
    // 0x26ddec: 0x0  nop
    ctx->pc = 0x26ddecu;
    // NOP
label_26ddf0:
    // 0x26ddf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ddf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ddf4: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x26DDF4u;
    SET_GPR_U32(ctx, 31, 0x26DDFCu);
    ctx->pc = 0x26DDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DDF4u;
    // 0x26ddf8: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x26DDF4u, 0x26DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DDFCu;
label_26ddfc:
    // 0x26ddfc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26DDFCu;
    {
        const bool branch_taken_0x26ddfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ddfc) {
            ctx->pc = 0x26DE30u;
            goto label_26de30;
        }
    }
    ctx->pc = 0x26DE04u;
    // 0x26de04: 0x0  nop
    ctx->pc = 0x26de04u;
    // NOP
label_26de08:
    // 0x26de08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26de08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26de0c: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x26DE0Cu;
    SET_GPR_U32(ctx, 31, 0x26DE14u);
    ctx->pc = 0x26DE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DE0Cu;
    // 0x26de10: 0x24050f00  addiu       $a1, $zero, 0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x26DE0Cu, 0x26DE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE14u;
label_26de14:
    // 0x26de14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26DE14u;
    {
        const bool branch_taken_0x26de14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26de14) {
            ctx->pc = 0x26DE30u;
            goto label_26de30;
        }
    }
    ctx->pc = 0x26DE1Cu;
    // 0x26de1c: 0x0  nop
    ctx->pc = 0x26de1cu;
    // NOP
label_26de20:
    // 0x26de20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26de20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26de24: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x26DE24u;
    SET_GPR_U32(ctx, 31, 0x26DE2Cu);
    ctx->pc = 0x26DE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DE24u;
    // 0x26de28: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x26DE24u, 0x26DE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE2Cu;
label_26de2c:
    // 0x26de2c: 0x0  nop
    ctx->pc = 0x26de2cu;
    // NOP
label_26de30:
    // 0x26de30: 0x920300a6  lbu         $v1, 0xA6($s0)
    ctx->pc = 0x26de30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 166)));
    // 0x26de34: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x26DE34u;
    {
        const bool branch_taken_0x26de34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE34u;
        // 0x26de38: 0xa20300a0  sb          $v1, 0xA0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de34) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DE3Cu;
    // 0x26de3c: 0x0  nop
    ctx->pc = 0x26de3cu;
    // NOP
label_26de40:
    // 0x26de40: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x26de40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x26de44: 0xa20200a0  sb          $v0, 0xA0($s0)
    ctx->pc = 0x26de44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 2));
    // 0x26de48: 0xc09b06c  jal         func_26C1B0
    ctx->pc = 0x26DE48u;
    SET_GPR_U32(ctx, 31, 0x26DE50u);
    ctx->pc = 0x26DE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DE48u;
    // 0x26de4c: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1B0u, 0x26DE48u, 0x26DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE50u;
label_26de50:
    // 0x26de50: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26de50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26de54: 0xc095150  jal         func_254540
    ctx->pc = 0x26DE54u;
    SET_GPR_U32(ctx, 31, 0x26DE5Cu);
    ctx->pc = 0x26DE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DE54u;
    // 0x26de58: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x26DE54u, 0x26DE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE5Cu;
label_26de5c:
    // 0x26de5c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x26DE5Cu;
    {
        const bool branch_taken_0x26de5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE5Cu;
        // 0x26de60: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de5c) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DE64u;
    // 0x26de64: 0xc095154  jal         func_254550
    ctx->pc = 0x26DE64u;
    SET_GPR_U32(ctx, 31, 0x26DE6Cu);
    ctx->pc = 0x26DE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DE64u;
    // 0x26de68: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x26DE64u, 0x26DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE6Cu;
label_26de6c:
    // 0x26de6c: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x26de6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x26de70: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x26de70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x26de74: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26DE74u;
    {
        const bool branch_taken_0x26de74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE74u;
        // 0x26de78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de74) {
            ctx->pc = 0x26DEC8u;
            goto label_26dec8;
        }
    }
    ctx->pc = 0x26DE7Cu;
    // 0x26de7c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x26DE7Cu;
    {
        const bool branch_taken_0x26de7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26de7c) {
            ctx->pc = 0x26DEB0u;
            goto label_26deb0;
        }
    }
    ctx->pc = 0x26DE84u;
    // 0x26de84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26de84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26de88: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DE88u;
    {
        const bool branch_taken_0x26de88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26de88) {
            ctx->pc = 0x26DE98u;
            goto label_26de98;
        }
    }
    ctx->pc = 0x26DE90u;
    // 0x26de90: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x26DE90u;
    {
        const bool branch_taken_0x26de90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26de90) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DE98u;
label_26de98:
    // 0x26de98: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26de98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26de9c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x26DE9Cu;
    SET_GPR_U32(ctx, 31, 0x26DEA4u);
    ctx->pc = 0x26DEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DE9Cu;
    // 0x26dea0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x26DE9Cu, 0x26DEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DEA4u;
label_26dea4:
    // 0x26dea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26dea8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x26DEA8u;
    {
        const bool branch_taken_0x26dea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEA8u;
        // 0x26deac: 0xa20300a0  sb          $v1, 0xA0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dea8) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DEB0u;
label_26deb0:
    // 0x26deb0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26deb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26deb4: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x26DEB4u;
    SET_GPR_U32(ctx, 31, 0x26DEBCu);
    ctx->pc = 0x26DEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DEB4u;
    // 0x26deb8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x26DEB4u, 0x26DEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DEBCu;
label_26debc:
    // 0x26debc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26debcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26dec0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x26DEC0u;
    {
        const bool branch_taken_0x26dec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEC0u;
        // 0x26dec4: 0xa20300a0  sb          $v1, 0xA0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dec0) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DEC8u;
label_26dec8:
    // 0x26dec8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26dec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26decc: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x26DECCu;
    SET_GPR_U32(ctx, 31, 0x26DED4u);
    ctx->pc = 0x26DED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DECCu;
    // 0x26ded0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x26DECCu, 0x26DED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DED4u;
label_26ded4:
    // 0x26ded4: 0xc09b06c  jal         func_26C1B0
    ctx->pc = 0x26DED4u;
    SET_GPR_U32(ctx, 31, 0x26DEDCu);
    ctx->pc = 0x26DED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DED4u;
    // 0x26ded8: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1B0u, 0x26DED4u, 0x26DEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DEDCu;
label_26dedc:
    // 0x26dedc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26dedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dee0: 0xc09bc58  jal         func_26F160
    ctx->pc = 0x26DEE0u;
    SET_GPR_U32(ctx, 31, 0x26DEE8u);
    ctx->pc = 0x26DEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DEE0u;
    // 0x26dee4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F160u, 0x26DEE0u, 0x26DEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DEE8u;
label_26dee8:
    // 0x26dee8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x26dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26deec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26DEECu;
    {
        const bool branch_taken_0x26deec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEECu;
        // 0x26def0: 0xa20300a0  sb          $v1, 0xA0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26deec) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DEF4u;
    // 0x26def4: 0x0  nop
    ctx->pc = 0x26def4u;
    // NOP
label_26def8:
    // 0x26def8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26def8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26defc: 0xc095150  jal         func_254540
    ctx->pc = 0x26DEFCu;
    SET_GPR_U32(ctx, 31, 0x26DF04u);
    ctx->pc = 0x26DF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DEFCu;
    // 0x26df00: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x26DEFCu, 0x26DF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DF04u;
label_26df04:
    // 0x26df04: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26DF04u;
    {
        const bool branch_taken_0x26df04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF04u;
        // 0x26df08: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df04) {
            ctx->pc = 0x26DF20u;
            goto label_26df20;
        }
    }
    ctx->pc = 0x26DF0Cu;
    // 0x26df0c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x26DF0Cu;
    SET_GPR_U32(ctx, 31, 0x26DF14u);
    ctx->pc = 0x26DF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DF0Cu;
    // 0x26df10: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x26DF0Cu, 0x26DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DF14u;
label_26df14:
    // 0x26df14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26df14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26df18: 0xa20300a0  sb          $v1, 0xA0($s0)
    ctx->pc = 0x26df18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x26df1c: 0x0  nop
    ctx->pc = 0x26df1cu;
    // NOP
label_26df20:
    // 0x26df20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26df20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26df24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26df24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26df28: 0x3e00008  jr          $ra
    ctx->pc = 0x26DF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF28u;
        // 0x26df2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26DF30u;
}
