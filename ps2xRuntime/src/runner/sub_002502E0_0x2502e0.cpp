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

// Function: sub_002502E0
// Address: 0x2502e0 - 0x2503bc
void sub_002502E0_0x2502e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002502E0_0x2502e0");
#endif

    switch (ctx->pc) {
        case 0x2502e0u: goto label_2502e0;
        case 0x2502e4u: goto label_2502e4;
        case 0x2502e8u: goto label_2502e8;
        case 0x2502ecu: goto label_2502ec;
        case 0x2502f0u: goto label_2502f0;
        case 0x2502f4u: goto label_2502f4;
        case 0x2502f8u: goto label_2502f8;
        case 0x2502fcu: goto label_2502fc;
        case 0x250300u: goto label_250300;
        case 0x250304u: goto label_250304;
        case 0x250308u: goto label_250308;
        case 0x25030cu: goto label_25030c;
        case 0x250310u: goto label_250310;
        case 0x250314u: goto label_250314;
        case 0x250318u: goto label_250318;
        case 0x25031cu: goto label_25031c;
        case 0x250320u: goto label_250320;
        case 0x250324u: goto label_250324;
        case 0x250328u: goto label_250328;
        case 0x25032cu: goto label_25032c;
        case 0x250330u: goto label_250330;
        case 0x250334u: goto label_250334;
        case 0x250338u: goto label_250338;
        case 0x25033cu: goto label_25033c;
        case 0x250340u: goto label_250340;
        case 0x250344u: goto label_250344;
        case 0x250348u: goto label_250348;
        case 0x25034cu: goto label_25034c;
        case 0x250350u: goto label_250350;
        case 0x250354u: goto label_250354;
        case 0x250358u: goto label_250358;
        case 0x25035cu: goto label_25035c;
        case 0x250360u: goto label_250360;
        case 0x250364u: goto label_250364;
        case 0x250368u: goto label_250368;
        case 0x25036cu: goto label_25036c;
        case 0x250370u: goto label_250370;
        case 0x250374u: goto label_250374;
        case 0x250378u: goto label_250378;
        case 0x25037cu: goto label_25037c;
        case 0x250380u: goto label_250380;
        case 0x250384u: goto label_250384;
        case 0x250388u: goto label_250388;
        case 0x25038cu: goto label_25038c;
        case 0x250390u: goto label_250390;
        case 0x250394u: goto label_250394;
        case 0x250398u: goto label_250398;
        case 0x25039cu: goto label_25039c;
        case 0x2503a0u: goto label_2503a0;
        case 0x2503a4u: goto label_2503a4;
        case 0x2503a8u: goto label_2503a8;
        case 0x2503acu: goto label_2503ac;
        case 0x2503b0u: goto label_2503b0;
        case 0x2503b4u: goto label_2503b4;
        case 0x2503b8u: goto label_2503b8;
        default: break;
    }

    ctx->pc = 0x2502e0u;

label_2502e0:
    // 0x2502e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2502e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2502e4:
    // 0x2502e4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2502e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2502e8:
    // 0x2502e8: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_2502ec:
    if (ctx->pc == 0x2502ECu) {
        ctx->pc = 0x2502ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502E8u;
        // 0x2502ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2502F0u;
        goto label_2502f0;
    }
    ctx->pc = 0x2502E8u;
    {
        const bool branch_taken_0x2502e8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2502ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502E8u;
        // 0x2502ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502e8) {
            ctx->pc = 0x250310u;
            goto label_250310;
        }
    }
    ctx->pc = 0x2502F0u;
label_2502f0:
    // 0x2502f0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2502f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2502f4:
    // 0x2502f4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2502f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_2502f8:
    // 0x2502f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2502f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2502fc:
    // 0x2502fc: 0x2484ea78  addiu       $a0, $a0, -0x1588
    ctx->pc = 0x2502fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961784));
label_250300:
    // 0x250300: 0x24a5e9c8  addiu       $a1, $a1, -0x1638
    ctx->pc = 0x250300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961608));
label_250304:
    // 0x250304: 0x8093f54  j           func_24FD50
label_250308:
    if (ctx->pc == 0x250308u) {
        ctx->pc = 0x250308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250304u;
        // 0x250308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25030Cu;
        goto label_25030c;
    }
    ctx->pc = 0x250304u;
    ctx->pc = 0x250308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250304u;
    // 0x250308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD50u;
    sub_0024FD50_0x24fd50(rdram, ctx, runtime); return;
    ctx->pc = 0x25030Cu;
label_25030c:
    // 0x25030c: 0x0  nop
    ctx->pc = 0x25030cu;
    // NOP
label_250310:
    // 0x250310: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x250310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_250314:
    // 0x250314: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_250318:
    if (ctx->pc == 0x250318u) {
        ctx->pc = 0x250318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250314u;
        // 0x250318: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25031Cu;
        goto label_25031c;
    }
    ctx->pc = 0x250314u;
    {
        const bool branch_taken_0x250314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250314u;
        // 0x250318: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250314) {
            ctx->pc = 0x250338u;
            goto label_250338;
        }
    }
    ctx->pc = 0x25031Cu;
label_25031c:
    // 0x25031c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x25031cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_250320:
    // 0x250320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250324:
    // 0x250324: 0x2484ea88  addiu       $a0, $a0, -0x1578
    ctx->pc = 0x250324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961800));
label_250328:
    // 0x250328: 0x24a5e9f8  addiu       $a1, $a1, -0x1608
    ctx->pc = 0x250328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961656));
label_25032c:
    // 0x25032c: 0x8093f54  j           func_24FD50
label_250330:
    if (ctx->pc == 0x250330u) {
        ctx->pc = 0x250330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25032Cu;
        // 0x250330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250334u;
        goto label_250334;
    }
    ctx->pc = 0x25032Cu;
    ctx->pc = 0x250330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25032Cu;
    // 0x250330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD50u;
    sub_0024FD50_0x24fd50(rdram, ctx, runtime); return;
    ctx->pc = 0x250334u;
label_250334:
    // 0x250334: 0x0  nop
    ctx->pc = 0x250334u;
    // NOP
label_250338:
    // 0x250338: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_25033c:
    if (ctx->pc == 0x25033Cu) {
        ctx->pc = 0x25033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250338u;
        // 0x25033c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250340u;
        goto label_250340;
    }
    ctx->pc = 0x250338u;
    {
        const bool branch_taken_0x250338 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250338u;
        // 0x25033c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250338) {
            ctx->pc = 0x250350u;
            goto label_250350;
        }
    }
    ctx->pc = 0x250340u;
label_250340:
    // 0x250340: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x250340u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_250344:
    // 0x250344: 0x1000001a  b           . + 4 + (0x1A << 2)
label_250348:
    if (ctx->pc == 0x250348u) {
        ctx->pc = 0x250348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250344u;
        // 0x250348: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25034Cu;
        goto label_25034c;
    }
    ctx->pc = 0x250344u;
    {
        const bool branch_taken_0x250344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250344u;
        // 0x250348: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250344) {
            ctx->pc = 0x2503B0u;
            goto label_2503b0;
        }
    }
    ctx->pc = 0x25034Cu;
label_25034c:
    // 0x25034c: 0x0  nop
    ctx->pc = 0x25034cu;
    // NOP
label_250350:
    // 0x250350: 0x54a20011  bnel        $a1, $v0, . + 4 + (0x11 << 2)
label_250354:
    if (ctx->pc == 0x250354u) {
        ctx->pc = 0x250354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250350u;
        // 0x250354: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250358u;
        goto label_250358;
    }
    ctx->pc = 0x250350u;
    {
        const bool branch_taken_0x250350 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x250350) {
            ctx->pc = 0x250354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250350u;
            // 0x250354: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250398u;
            goto label_250398;
        }
    }
    ctx->pc = 0x250358u;
label_250358:
    // 0x250358: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x250358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_25035c:
    // 0x25035c: 0x8d050014  lw          $a1, 0x14($t0)
    ctx->pc = 0x25035cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_250360:
    // 0x250360: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x250360u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_250364:
    // 0x250364: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x250364u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_250368:
    // 0x250368: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x250368u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_25036c:
    // 0x25036c: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x25036cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_250370:
    // 0x250370: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x250370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_250374:
    // 0x250374: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x250374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_250378:
    // 0x250378: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x250378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_25037c:
    // 0x25037c: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x25037cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
label_250380:
    // 0x250380: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x250380u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_250384:
    // 0x250384: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x250384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_250388:
    // 0x250388: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x250388u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25038c:
    // 0x25038c: 0x10000008  b           . + 4 + (0x8 << 2)
label_250390:
    if (ctx->pc == 0x250390u) {
        ctx->pc = 0x250390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25038Cu;
        // 0x250390: 0xad03000c  sw          $v1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250394u;
        goto label_250394;
    }
    ctx->pc = 0x25038Cu;
    {
        const bool branch_taken_0x25038c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25038Cu;
        // 0x250390: 0xad03000c  sw          $v1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25038c) {
            ctx->pc = 0x2503B0u;
            goto label_2503b0;
        }
    }
    ctx->pc = 0x250394u;
label_250394:
    // 0x250394: 0x0  nop
    ctx->pc = 0x250394u;
    // NOP
label_250398:
    // 0x250398: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x250398u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_25039c:
    // 0x25039c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2503a0:
    if (ctx->pc == 0x2503A0u) {
        ctx->pc = 0x2503A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25039Cu;
        // 0x2503a0: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2503A4u;
        goto label_2503a4;
    }
    ctx->pc = 0x25039Cu;
    {
        const bool branch_taken_0x25039c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2503A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25039Cu;
        // 0x2503a0: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25039c) {
            ctx->pc = 0x2503B0u;
            goto label_2503b0;
        }
    }
    ctx->pc = 0x2503A4u;
label_2503a4:
    // 0x2503a4: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x2503a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_2503a8:
    // 0x2503a8: 0x40f809  jalr        $v0
label_2503ac:
    if (ctx->pc == 0x2503ACu) {
        ctx->pc = 0x2503ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503A8u;
        // 0x2503ac: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2503B0u;
        goto label_2503b0;
    }
    ctx->pc = 0x2503A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2503B0u);
        ctx->pc = 0x2503ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503A8u;
        // 0x2503ac: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2503A8u, 0x2503B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2503B0u;
label_2503b0:
    // 0x2503b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2503b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2503b4:
    // 0x2503b4: 0x3e00008  jr          $ra
label_2503b8:
    if (ctx->pc == 0x2503B8u) {
        ctx->pc = 0x2503B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503B4u;
        // 0x2503b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2503BCu;
        goto label_fallthrough_0x2503b4;
    }
    ctx->pc = 0x2503B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2503B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503B4u;
        // 0x2503b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2503B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2503b4:
    ctx->pc = 0x2503BCu;
}
