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

// Function: sub_002F0360
// Address: 0x2f0360 - 0x2f06ec
void sub_002F0360_0x2f0360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0360_0x2f0360");
#endif

    switch (ctx->pc) {
        case 0x2f0360u: goto label_2f0360;
        case 0x2f0364u: goto label_2f0364;
        case 0x2f0368u: goto label_2f0368;
        case 0x2f036cu: goto label_2f036c;
        case 0x2f0370u: goto label_2f0370;
        case 0x2f0374u: goto label_2f0374;
        case 0x2f0378u: goto label_2f0378;
        case 0x2f037cu: goto label_2f037c;
        case 0x2f0380u: goto label_2f0380;
        case 0x2f0384u: goto label_2f0384;
        case 0x2f0388u: goto label_2f0388;
        case 0x2f038cu: goto label_2f038c;
        case 0x2f0390u: goto label_2f0390;
        case 0x2f0394u: goto label_2f0394;
        case 0x2f0398u: goto label_2f0398;
        case 0x2f039cu: goto label_2f039c;
        case 0x2f03a0u: goto label_2f03a0;
        case 0x2f03a4u: goto label_2f03a4;
        case 0x2f03a8u: goto label_2f03a8;
        case 0x2f03acu: goto label_2f03ac;
        case 0x2f03b0u: goto label_2f03b0;
        case 0x2f03b4u: goto label_2f03b4;
        case 0x2f03b8u: goto label_2f03b8;
        case 0x2f03bcu: goto label_2f03bc;
        case 0x2f03c0u: goto label_2f03c0;
        case 0x2f03c4u: goto label_2f03c4;
        case 0x2f03c8u: goto label_2f03c8;
        case 0x2f03ccu: goto label_2f03cc;
        case 0x2f03d0u: goto label_2f03d0;
        case 0x2f03d4u: goto label_2f03d4;
        case 0x2f03d8u: goto label_2f03d8;
        case 0x2f03dcu: goto label_2f03dc;
        case 0x2f03e0u: goto label_2f03e0;
        case 0x2f03e4u: goto label_2f03e4;
        case 0x2f03e8u: goto label_2f03e8;
        case 0x2f03ecu: goto label_2f03ec;
        case 0x2f03f0u: goto label_2f03f0;
        case 0x2f03f4u: goto label_2f03f4;
        case 0x2f03f8u: goto label_2f03f8;
        case 0x2f03fcu: goto label_2f03fc;
        case 0x2f0400u: goto label_2f0400;
        case 0x2f0404u: goto label_2f0404;
        case 0x2f0408u: goto label_2f0408;
        case 0x2f040cu: goto label_2f040c;
        case 0x2f0410u: goto label_2f0410;
        case 0x2f0414u: goto label_2f0414;
        case 0x2f0418u: goto label_2f0418;
        case 0x2f041cu: goto label_2f041c;
        case 0x2f0420u: goto label_2f0420;
        case 0x2f0424u: goto label_2f0424;
        case 0x2f0428u: goto label_2f0428;
        case 0x2f042cu: goto label_2f042c;
        case 0x2f0430u: goto label_2f0430;
        case 0x2f0434u: goto label_2f0434;
        case 0x2f0438u: goto label_2f0438;
        case 0x2f043cu: goto label_2f043c;
        case 0x2f0440u: goto label_2f0440;
        case 0x2f0444u: goto label_2f0444;
        case 0x2f0448u: goto label_2f0448;
        case 0x2f044cu: goto label_2f044c;
        case 0x2f0450u: goto label_2f0450;
        case 0x2f0454u: goto label_2f0454;
        case 0x2f0458u: goto label_2f0458;
        case 0x2f045cu: goto label_2f045c;
        case 0x2f0460u: goto label_2f0460;
        case 0x2f0464u: goto label_2f0464;
        case 0x2f0468u: goto label_2f0468;
        case 0x2f046cu: goto label_2f046c;
        case 0x2f0470u: goto label_2f0470;
        case 0x2f0474u: goto label_2f0474;
        case 0x2f0478u: goto label_2f0478;
        case 0x2f047cu: goto label_2f047c;
        case 0x2f0480u: goto label_2f0480;
        case 0x2f0484u: goto label_2f0484;
        case 0x2f0488u: goto label_2f0488;
        case 0x2f048cu: goto label_2f048c;
        case 0x2f0490u: goto label_2f0490;
        case 0x2f0494u: goto label_2f0494;
        case 0x2f0498u: goto label_2f0498;
        case 0x2f049cu: goto label_2f049c;
        case 0x2f04a0u: goto label_2f04a0;
        case 0x2f04a4u: goto label_2f04a4;
        case 0x2f04a8u: goto label_2f04a8;
        case 0x2f04acu: goto label_2f04ac;
        case 0x2f04b0u: goto label_2f04b0;
        case 0x2f04b4u: goto label_2f04b4;
        case 0x2f04b8u: goto label_2f04b8;
        case 0x2f04bcu: goto label_2f04bc;
        case 0x2f04c0u: goto label_2f04c0;
        case 0x2f04c4u: goto label_2f04c4;
        case 0x2f04c8u: goto label_2f04c8;
        case 0x2f04ccu: goto label_2f04cc;
        case 0x2f04d0u: goto label_2f04d0;
        case 0x2f04d4u: goto label_2f04d4;
        case 0x2f04d8u: goto label_2f04d8;
        case 0x2f04dcu: goto label_2f04dc;
        case 0x2f04e0u: goto label_2f04e0;
        case 0x2f04e4u: goto label_2f04e4;
        case 0x2f04e8u: goto label_2f04e8;
        case 0x2f04ecu: goto label_2f04ec;
        case 0x2f04f0u: goto label_2f04f0;
        case 0x2f04f4u: goto label_2f04f4;
        case 0x2f04f8u: goto label_2f04f8;
        case 0x2f04fcu: goto label_2f04fc;
        case 0x2f0500u: goto label_2f0500;
        case 0x2f0504u: goto label_2f0504;
        case 0x2f0508u: goto label_2f0508;
        case 0x2f050cu: goto label_2f050c;
        case 0x2f0510u: goto label_2f0510;
        case 0x2f0514u: goto label_2f0514;
        case 0x2f0518u: goto label_2f0518;
        case 0x2f051cu: goto label_2f051c;
        case 0x2f0520u: goto label_2f0520;
        case 0x2f0524u: goto label_2f0524;
        case 0x2f0528u: goto label_2f0528;
        case 0x2f052cu: goto label_2f052c;
        case 0x2f0530u: goto label_2f0530;
        case 0x2f0534u: goto label_2f0534;
        case 0x2f0538u: goto label_2f0538;
        case 0x2f053cu: goto label_2f053c;
        case 0x2f0540u: goto label_2f0540;
        case 0x2f0544u: goto label_2f0544;
        case 0x2f0548u: goto label_2f0548;
        case 0x2f054cu: goto label_2f054c;
        case 0x2f0550u: goto label_2f0550;
        case 0x2f0554u: goto label_2f0554;
        case 0x2f0558u: goto label_2f0558;
        case 0x2f055cu: goto label_2f055c;
        case 0x2f0560u: goto label_2f0560;
        case 0x2f0564u: goto label_2f0564;
        case 0x2f0568u: goto label_2f0568;
        case 0x2f056cu: goto label_2f056c;
        case 0x2f0570u: goto label_2f0570;
        case 0x2f0574u: goto label_2f0574;
        case 0x2f0578u: goto label_2f0578;
        case 0x2f057cu: goto label_2f057c;
        case 0x2f0580u: goto label_2f0580;
        case 0x2f0584u: goto label_2f0584;
        case 0x2f0588u: goto label_2f0588;
        case 0x2f058cu: goto label_2f058c;
        case 0x2f0590u: goto label_2f0590;
        case 0x2f0594u: goto label_2f0594;
        case 0x2f0598u: goto label_2f0598;
        case 0x2f059cu: goto label_2f059c;
        case 0x2f05a0u: goto label_2f05a0;
        case 0x2f05a4u: goto label_2f05a4;
        case 0x2f05a8u: goto label_2f05a8;
        case 0x2f05acu: goto label_2f05ac;
        case 0x2f05b0u: goto label_2f05b0;
        case 0x2f05b4u: goto label_2f05b4;
        case 0x2f05b8u: goto label_2f05b8;
        case 0x2f05bcu: goto label_2f05bc;
        case 0x2f05c0u: goto label_2f05c0;
        case 0x2f05c4u: goto label_2f05c4;
        case 0x2f05c8u: goto label_2f05c8;
        case 0x2f05ccu: goto label_2f05cc;
        case 0x2f05d0u: goto label_2f05d0;
        case 0x2f05d4u: goto label_2f05d4;
        case 0x2f05d8u: goto label_2f05d8;
        case 0x2f05dcu: goto label_2f05dc;
        case 0x2f05e0u: goto label_2f05e0;
        case 0x2f05e4u: goto label_2f05e4;
        case 0x2f05e8u: goto label_2f05e8;
        case 0x2f05ecu: goto label_2f05ec;
        case 0x2f05f0u: goto label_2f05f0;
        case 0x2f05f4u: goto label_2f05f4;
        case 0x2f05f8u: goto label_2f05f8;
        case 0x2f05fcu: goto label_2f05fc;
        case 0x2f0600u: goto label_2f0600;
        case 0x2f0604u: goto label_2f0604;
        case 0x2f0608u: goto label_2f0608;
        case 0x2f060cu: goto label_2f060c;
        case 0x2f0610u: goto label_2f0610;
        case 0x2f0614u: goto label_2f0614;
        case 0x2f0618u: goto label_2f0618;
        case 0x2f061cu: goto label_2f061c;
        case 0x2f0620u: goto label_2f0620;
        case 0x2f0624u: goto label_2f0624;
        case 0x2f0628u: goto label_2f0628;
        case 0x2f062cu: goto label_2f062c;
        case 0x2f0630u: goto label_2f0630;
        case 0x2f0634u: goto label_2f0634;
        case 0x2f0638u: goto label_2f0638;
        case 0x2f063cu: goto label_2f063c;
        case 0x2f0640u: goto label_2f0640;
        case 0x2f0644u: goto label_2f0644;
        case 0x2f0648u: goto label_2f0648;
        case 0x2f064cu: goto label_2f064c;
        case 0x2f0650u: goto label_2f0650;
        case 0x2f0654u: goto label_2f0654;
        case 0x2f0658u: goto label_2f0658;
        case 0x2f065cu: goto label_2f065c;
        case 0x2f0660u: goto label_2f0660;
        case 0x2f0664u: goto label_2f0664;
        case 0x2f0668u: goto label_2f0668;
        case 0x2f066cu: goto label_2f066c;
        case 0x2f0670u: goto label_2f0670;
        case 0x2f0674u: goto label_2f0674;
        case 0x2f0678u: goto label_2f0678;
        case 0x2f067cu: goto label_2f067c;
        case 0x2f0680u: goto label_2f0680;
        case 0x2f0684u: goto label_2f0684;
        case 0x2f0688u: goto label_2f0688;
        case 0x2f068cu: goto label_2f068c;
        case 0x2f0690u: goto label_2f0690;
        case 0x2f0694u: goto label_2f0694;
        case 0x2f0698u: goto label_2f0698;
        case 0x2f069cu: goto label_2f069c;
        case 0x2f06a0u: goto label_2f06a0;
        case 0x2f06a4u: goto label_2f06a4;
        case 0x2f06a8u: goto label_2f06a8;
        case 0x2f06acu: goto label_2f06ac;
        case 0x2f06b0u: goto label_2f06b0;
        case 0x2f06b4u: goto label_2f06b4;
        case 0x2f06b8u: goto label_2f06b8;
        case 0x2f06bcu: goto label_2f06bc;
        case 0x2f06c0u: goto label_2f06c0;
        case 0x2f06c4u: goto label_2f06c4;
        case 0x2f06c8u: goto label_2f06c8;
        case 0x2f06ccu: goto label_2f06cc;
        case 0x2f06d0u: goto label_2f06d0;
        case 0x2f06d4u: goto label_2f06d4;
        case 0x2f06d8u: goto label_2f06d8;
        case 0x2f06dcu: goto label_2f06dc;
        case 0x2f06e0u: goto label_2f06e0;
        case 0x2f06e4u: goto label_2f06e4;
        case 0x2f06e8u: goto label_2f06e8;
        default: break;
    }

    ctx->pc = 0x2f0360u;

label_2f0360:
    // 0x2f0360: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f0360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2f0364:
    // 0x2f0364: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f0364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2f0368:
    // 0x2f0368: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f0368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f036c:
    // 0x2f036c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f036cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f0370:
    // 0x2f0370: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f0370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f0374:
    // 0x2f0374: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f0374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f0378:
    // 0x2f0378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f0378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f037c:
    // 0x2f037c: 0x80822b25  lb          $v0, 0x2B25($a0)
    ctx->pc = 0x2f037cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 11045)));
label_2f0380:
    // 0x2f0380: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2f0384:
    if (ctx->pc == 0x2F0384u) {
        ctx->pc = 0x2F0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0380u;
        // 0x2f0384: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0388u;
        goto label_2f0388;
    }
    ctx->pc = 0x2F0380u;
    {
        const bool branch_taken_0x2f0380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0380u;
        // 0x2f0384: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0380) {
            ctx->pc = 0x2F03A8u;
            goto label_2f03a8;
        }
    }
    ctx->pc = 0x2F0388u;
label_2f0388:
    // 0x2f0388: 0x3c080068  lui         $t0, 0x68
    ctx->pc = 0x2f0388u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)104 << 16));
label_2f038c:
    // 0x2f038c: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2f038cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2f0390:
    // 0x2f0390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f0390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0394:
    // 0x2f0394: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0398:
    // 0x2f0398: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f0398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f039c:
    // 0x2f039c: 0xc0a2730  jal         func_289CC0
label_2f03a0:
    if (ctx->pc == 0x2F03A0u) {
        ctx->pc = 0x2F03A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F039Cu;
        // 0x2f03a0: 0x2508c640  addiu       $t0, $t0, -0x39C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03A4u;
        goto label_2f03a4;
    }
    ctx->pc = 0x2F039Cu;
    SET_GPR_U32(ctx, 31, 0x2F03A4u);
    ctx->pc = 0x2F03A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F039Cu;
    // 0x2f03a0: 0x2508c640  addiu       $t0, $t0, -0x39C0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289CC0u, 0x2F039Cu, 0x2F03A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F03A4u;
label_2f03a4:
    // 0x2f03a4: 0x0  nop
    ctx->pc = 0x2f03a4u;
    // NOP
label_2f03a8:
    // 0x2f03a8: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2f03a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2f03ac:
    // 0x2f03ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f03acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f03b0:
    // 0x2f03b0: 0xc096978  jal         func_25A5E0
label_2f03b4:
    if (ctx->pc == 0x2F03B4u) {
        ctx->pc = 0x2F03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03B0u;
        // 0x2f03b4: 0x26660090  addiu       $a2, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03B8u;
        goto label_2f03b8;
    }
    ctx->pc = 0x2F03B0u;
    SET_GPR_U32(ctx, 31, 0x2F03B8u);
    ctx->pc = 0x2F03B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F03B0u;
    // 0x2f03b4: 0x26660090  addiu       $a2, $s3, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x2F03B0u, 0x2F03B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F03B8u;
label_2f03b8:
    // 0x2f03b8: 0x82622b25  lb          $v0, 0x2B25($s3)
    ctx->pc = 0x2f03b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 11045)));
label_2f03bc:
    // 0x2f03bc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_2f03c0:
    if (ctx->pc == 0x2F03C0u) {
        ctx->pc = 0x2F03C4u;
        goto label_2f03c4;
    }
    ctx->pc = 0x2F03BCu;
    {
        const bool branch_taken_0x2f03bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f03bc) {
            ctx->pc = 0x2F04A8u;
            goto label_2f04a8;
        }
    }
    ctx->pc = 0x2F03C4u;
label_2f03c4:
    // 0x2f03c4: 0x8e652b20  lw          $a1, 0x2B20($s3)
    ctx->pc = 0x2f03c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
label_2f03c8:
    // 0x2f03c8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2f03c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_2f03cc:
    // 0x2f03cc: 0xc07cce0  jal         func_1F3380
label_2f03d0:
    if (ctx->pc == 0x2F03D0u) {
        ctx->pc = 0x2F03D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03CCu;
        // 0x2f03d0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03D4u;
        goto label_2f03d4;
    }
    ctx->pc = 0x2F03CCu;
    SET_GPR_U32(ctx, 31, 0x2F03D4u);
    ctx->pc = 0x2F03D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F03CCu;
    // 0x2f03d0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2F03CCu, 0x2F03D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F03D4u;
label_2f03d4:
    // 0x2f03d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f03d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f03d8:
    // 0x2f03d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f03d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f03dc:
    // 0x2f03dc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f03dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f03e0:
    // 0x2f03e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f03e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f03e4:
    // 0x2f03e4: 0xc09693c  jal         func_25A4F0
label_2f03e8:
    if (ctx->pc == 0x2F03E8u) {
        ctx->pc = 0x2F03E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03E4u;
        // 0x2f03e8: 0x26650090  addiu       $a1, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03ECu;
        goto label_2f03ec;
    }
    ctx->pc = 0x2F03E4u;
    SET_GPR_U32(ctx, 31, 0x2F03ECu);
    ctx->pc = 0x2F03E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F03E4u;
    // 0x2f03e8: 0x26650090  addiu       $a1, $s3, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x2F03E4u, 0x2F03ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F03ECu;
label_2f03ec:
    // 0x2f03ec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f03ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f03f0:
    // 0x2f03f0: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x2f03f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2f03f4:
    // 0x2f03f4: 0xc0414ca  jal         func_105328
label_2f03f8:
    if (ctx->pc == 0x2F03F8u) {
        ctx->pc = 0x2F03F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03F4u;
        // 0x2f03f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03FCu;
        goto label_2f03fc;
    }
    ctx->pc = 0x2F03F4u;
    SET_GPR_U32(ctx, 31, 0x2F03FCu);
    ctx->pc = 0x2F03F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F03F4u;
    // 0x2f03f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2F03F4u, 0x2F03FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F03FCu;
label_2f03fc:
    // 0x2f03fc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2f03fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
label_2f0400:
    // 0x2f0400: 0x10000025  b           . + 4 + (0x25 << 2)
label_2f0404:
    if (ctx->pc == 0x2F0404u) {
        ctx->pc = 0x2F0404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0400u;
        // 0x2f0404: 0x8c302410  lw          $s0, 0x2410($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0408u;
        goto label_2f0408;
    }
    ctx->pc = 0x2F0400u;
    {
        const bool branch_taken_0x2f0400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0400u;
        // 0x2f0404: 0x8c302410  lw          $s0, 0x2410($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0400) {
            ctx->pc = 0x2F0498u;
            goto label_2f0498;
        }
    }
    ctx->pc = 0x2F0408u;
label_2f0408:
    // 0x2f0408: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x2f0408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_2f040c:
    // 0x2f040c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2f040cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0410:
    // 0x2f0410: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2f0414:
    if (ctx->pc == 0x2F0414u) {
        ctx->pc = 0x2F0418u;
        goto label_2f0418;
    }
    ctx->pc = 0x2F0410u;
    {
        const bool branch_taken_0x2f0410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0410) {
            ctx->pc = 0x2F0490u;
            goto label_2f0490;
        }
    }
    ctx->pc = 0x2F0418u;
label_2f0418:
    // 0x2f0418: 0x1213001d  beq         $s0, $s3, . + 4 + (0x1D << 2)
label_2f041c:
    if (ctx->pc == 0x2F041Cu) {
        ctx->pc = 0x2F0420u;
        goto label_2f0420;
    }
    ctx->pc = 0x2F0418u;
    {
        const bool branch_taken_0x2f0418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x2f0418) {
            ctx->pc = 0x2F0490u;
            goto label_2f0490;
        }
    }
    ctx->pc = 0x2F0420u;
label_2f0420:
    // 0x2f0420: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x2f0420u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_2f0424:
    // 0x2f0424: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2f0424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_2f0428:
    // 0x2f0428: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f0428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f042c:
    // 0x2f042c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2f042cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_2f0430:
    // 0x2f0430: 0x2463f38c  addiu       $v1, $v1, -0xC74
    ctx->pc = 0x2f0430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964108));
label_2f0434:
    // 0x2f0434: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2f0434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2f0438:
    // 0x2f0438: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2f0438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2f043c:
    // 0x2f043c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2f043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2f0440:
    // 0x2f0440: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2f0440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2f0444:
    // 0x2f0444: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f0444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f0448:
    // 0x2f0448: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2f0448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f044c:
    // 0x2f044c: 0xc0bbcb0  jal         func_2EF2C0
label_2f0450:
    if (ctx->pc == 0x2F0450u) {
        ctx->pc = 0x2F0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F044Cu;
        // 0x2f0450: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0454u;
        goto label_2f0454;
    }
    ctx->pc = 0x2F044Cu;
    SET_GPR_U32(ctx, 31, 0x2F0454u);
    ctx->pc = 0x2F0450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F044Cu;
    // 0x2f0450: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF2C0u, 0x2F044Cu, 0x2F0454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0454u;
label_2f0454:
    // 0x2f0454: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2f0458:
    if (ctx->pc == 0x2F0458u) {
        ctx->pc = 0x2F045Cu;
        goto label_2f045c;
    }
    ctx->pc = 0x2F0454u;
    {
        const bool branch_taken_0x2f0454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0454) {
            ctx->pc = 0x2F0490u;
            goto label_2f0490;
        }
    }
    ctx->pc = 0x2F045Cu;
label_2f045c:
    // 0x2f045c: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x2f045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_2f0460:
    // 0x2f0460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0464:
    // 0x2f0464: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f0464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0468:
    // 0x2f0468: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2f0468u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_2f046c:
    // 0x2f046c: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x2f046cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_2f0470:
    // 0x2f0470: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2f0470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2f0474:
    // 0x2f0474: 0x320f809  jalr        $t9
label_2f0478:
    if (ctx->pc == 0x2F0478u) {
        ctx->pc = 0x2F0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0474u;
        // 0x2f0478: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F047Cu;
        goto label_2f047c;
    }
    ctx->pc = 0x2F0474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F047Cu);
        ctx->pc = 0x2F0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0474u;
        // 0x2f0478: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0474u, 0x2F047Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F047Cu;
label_2f047c:
    // 0x2f047c: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x2f047cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_2f0480:
    // 0x2f0480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f0480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f0484:
    // 0x2f0484: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x2f0484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_2f0488:
    // 0x2f0488: 0x320f809  jalr        $t9
label_2f048c:
    if (ctx->pc == 0x2F048Cu) {
        ctx->pc = 0x2F048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0488u;
        // 0x2f048c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0490u;
        goto label_2f0490;
    }
    ctx->pc = 0x2F0488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F0490u);
        ctx->pc = 0x2F048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0488u;
        // 0x2f048c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0488u, 0x2F0490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0490u;
label_2f0490:
    // 0x2f0490: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x2f0490u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2f0494:
    // 0x2f0494: 0x0  nop
    ctx->pc = 0x2f0494u;
    // NOP
label_2f0498:
    // 0x2f0498: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2f0498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2f049c:
    // 0x2f049c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_2f04a0:
    if (ctx->pc == 0x2F04A0u) {
        ctx->pc = 0x2F04A4u;
        goto label_2f04a4;
    }
    ctx->pc = 0x2F049Cu;
    {
        const bool branch_taken_0x2f049c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f049c) {
            ctx->pc = 0x2F0408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f0408;
        }
    }
    ctx->pc = 0x2F04A4u;
label_2f04a4:
    // 0x2f04a4: 0x0  nop
    ctx->pc = 0x2f04a4u;
    // NOP
label_2f04a8:
    // 0x2f04a8: 0x10000061  b           . + 4 + (0x61 << 2)
label_2f04ac:
    if (ctx->pc == 0x2F04ACu) {
        ctx->pc = 0x2F04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04A8u;
        // 0x2f04ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F04B0u;
        goto label_2f04b0;
    }
    ctx->pc = 0x2F04A8u;
    {
        const bool branch_taken_0x2f04a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04A8u;
        // 0x2f04ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f04a8) {
            ctx->pc = 0x2F0630u;
            goto label_2f0630;
        }
    }
    ctx->pc = 0x2F04B0u;
label_2f04b0:
    // 0x2f04b0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2f04b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_2f04b4:
    // 0x2f04b4: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x2f04b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_2f04b8:
    // 0x2f04b8: 0x24020383  addiu       $v0, $zero, 0x383
    ctx->pc = 0x2f04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 899));
label_2f04bc:
    // 0x2f04bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f04c0:
    if (ctx->pc == 0x2F04C0u) {
        ctx->pc = 0x2F04C4u;
        goto label_2f04c4;
    }
    ctx->pc = 0x2F04BCu;
    {
        const bool branch_taken_0x2f04bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f04bc) {
            ctx->pc = 0x2F04D0u;
            goto label_2f04d0;
        }
    }
    ctx->pc = 0x2F04C4u;
label_2f04c4:
    // 0x2f04c4: 0x24020393  addiu       $v0, $zero, 0x393
    ctx->pc = 0x2f04c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 915));
label_2f04c8:
    // 0x2f04c8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_2f04cc:
    if (ctx->pc == 0x2F04CCu) {
        ctx->pc = 0x2F04D0u;
        goto label_2f04d0;
    }
    ctx->pc = 0x2F04C8u;
    {
        const bool branch_taken_0x2f04c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f04c8) {
            ctx->pc = 0x2F04F8u;
            goto label_2f04f8;
        }
    }
    ctx->pc = 0x2F04D0u;
label_2f04d0:
    // 0x2f04d0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2f04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f04d4:
    // 0x2f04d4: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x2f04d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
label_2f04d8:
    // 0x2f04d8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2f04d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f04dc:
    // 0x2f04dc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f04e0:
    // 0x2f04e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f04e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f04e4:
    // 0x2f04e4: 0x0  nop
    ctx->pc = 0x2f04e4u;
    // NOP
label_2f04e8:
    // 0x2f04e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2f04e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2f04ec:
    // 0x2f04ec: 0x10000022  b           . + 4 + (0x22 << 2)
label_2f04f0:
    if (ctx->pc == 0x2F04F0u) {
        ctx->pc = 0x2F04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04ECu;
        // 0x2f04f0: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F04F4u;
        goto label_2f04f4;
    }
    ctx->pc = 0x2F04ECu;
    {
        const bool branch_taken_0x2f04ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04ECu;
        // 0x2f04f0: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f04ec) {
            ctx->pc = 0x2F0578u;
            goto label_2f0578;
        }
    }
    ctx->pc = 0x2F04F4u;
label_2f04f4:
    // 0x2f04f4: 0x0  nop
    ctx->pc = 0x2f04f4u;
    // NOP
label_2f04f8:
    // 0x2f04f8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_2f04fc:
    // 0x2f04fc: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2f04fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2f0500:
    // 0x2f0500: 0x2442c638  addiu       $v0, $v0, -0x39C8
    ctx->pc = 0x2f0500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952504));
label_2f0504:
    // 0x2f0504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f0508:
    // 0x2f0508: 0x866400c2  lh          $a0, 0xC2($s3)
    ctx->pc = 0x2f0508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
label_2f050c:
    // 0x2f050c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2f050cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0510:
    // 0x2f0510: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f0510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2f0514:
    // 0x2f0514: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2f0514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_2f0518:
    // 0x2f0518: 0xc0967cc  jal         func_259F30
label_2f051c:
    if (ctx->pc == 0x2F051Cu) {
        ctx->pc = 0x2F051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0518u;
        // 0x2f051c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0520u;
        goto label_2f0520;
    }
    ctx->pc = 0x2F0518u;
    SET_GPR_U32(ctx, 31, 0x2F0520u);
    ctx->pc = 0x2F051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0518u;
    // 0x2f051c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x2F0518u, 0x2F0520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0520u;
label_2f0520:
    // 0x2f0520: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x2f0520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
label_2f0524:
    // 0x2f0524: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f0524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f0528:
    // 0x2f0528: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2f0528u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_2f052c:
    // 0x2f052c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2f052cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2f0530:
    // 0x2f0530: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2f0530u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f0534:
    // 0x2f0534: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x2f0534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2f0538:
    // 0x2f0538: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x2f0538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_2f053c:
    // 0x2f053c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f053cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2f0540:
    // 0x2f0540: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f0540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f0544:
    // 0x2f0544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0548:
    // 0x2f0548: 0x0  nop
    ctx->pc = 0x2f0548u;
    // NOP
label_2f054c:
    // 0x2f054c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2f054cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2f0550:
    // 0x2f0550: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2f0550u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2f0554:
    // 0x2f0554: 0x0  nop
    ctx->pc = 0x2f0554u;
    // NOP
label_2f0558:
    // 0x2f0558: 0x0  nop
    ctx->pc = 0x2f0558u;
    // NOP
label_2f055c:
    // 0x2f055c: 0xc096784  jal         func_259E10
label_2f0560:
    if (ctx->pc == 0x2F0560u) {
        ctx->pc = 0x2F0564u;
        goto label_2f0564;
    }
    ctx->pc = 0x2F055Cu;
    SET_GPR_U32(ctx, 31, 0x2F0564u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x2F055Cu, 0x2F0564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0564u;
label_2f0564:
    // 0x2f0564: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x2f0564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
label_2f0568:
    // 0x2f0568: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f0568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f056c:
    // 0x2f056c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f056cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f0570:
    // 0x2f0570: 0xc0414dc  jal         func_105370
label_2f0574:
    if (ctx->pc == 0x2F0574u) {
        ctx->pc = 0x2F0574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0570u;
        // 0x2f0574: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0578u;
        goto label_2f0578;
    }
    ctx->pc = 0x2F0570u;
    SET_GPR_U32(ctx, 31, 0x2F0578u);
    ctx->pc = 0x2F0574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0570u;
    // 0x2f0574: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2F0570u, 0x2F0578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0578u;
label_2f0578:
    // 0x2f0578: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f0578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f057c:
    // 0x2f057c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f057cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f0580:
    // 0x2f0580: 0xc0414ca  jal         func_105328
label_2f0584:
    if (ctx->pc == 0x2F0584u) {
        ctx->pc = 0x2F0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0580u;
        // 0x2f0584: 0x26660020  addiu       $a2, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0588u;
        goto label_2f0588;
    }
    ctx->pc = 0x2F0580u;
    SET_GPR_U32(ctx, 31, 0x2F0588u);
    ctx->pc = 0x2F0584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0580u;
    // 0x2f0584: 0x26660020  addiu       $a2, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2F0580u, 0x2F0588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0588u;
label_2f0588:
    // 0x2f0588: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2f0588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f058c:
    // 0x2f058c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2f058cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_2f0590:
    // 0x2f0590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0594:
    // 0x2f0594: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2f0594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2f0598:
    // 0x2f0598: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x2f0598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
label_2f059c:
    // 0x2f059c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2f059cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f05a0:
    // 0x2f05a0: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x2f05a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_2f05a4:
    // 0x2f05a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f05a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f05a8:
    // 0x2f05a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f05a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f05ac:
    // 0x2f05ac: 0xc04ed64  jal         func_13B590
label_2f05b0:
    if (ctx->pc == 0x2F05B0u) {
        ctx->pc = 0x2F05B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F05ACu;
        // 0x2f05b0: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F05B4u;
        goto label_2f05b4;
    }
    ctx->pc = 0x2F05ACu;
    SET_GPR_U32(ctx, 31, 0x2F05B4u);
    ctx->pc = 0x2F05B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F05ACu;
    // 0x2f05b0: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B590u, 0x2F05ACu, 0x2F05B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F05B4u;
label_2f05b4:
    // 0x2f05b4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2f05b8:
    if (ctx->pc == 0x2F05B8u) {
        ctx->pc = 0x2F05BCu;
        goto label_2f05bc;
    }
    ctx->pc = 0x2F05B4u;
    {
        const bool branch_taken_0x2f05b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f05b4) {
            ctx->pc = 0x2F0620u;
            goto label_2f0620;
        }
    }
    ctx->pc = 0x2F05BCu;
label_2f05bc:
    // 0x2f05bc: 0xc6620024  lwc1        $f2, 0x24($s3)
    ctx->pc = 0x2f05bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f05c0:
    // 0x2f05c0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f05c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2f05c4:
    // 0x2f05c4: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x2f05c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f05c8:
    // 0x2f05c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f05c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f05cc:
    // 0x2f05cc: 0x0  nop
    ctx->pc = 0x2f05ccu;
    // NOP
label_2f05d0:
    // 0x2f05d0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2f05d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2f05d4:
    // 0x2f05d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f05d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f05d8:
    // 0x2f05d8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2f05dc:
    if (ctx->pc == 0x2F05DCu) {
        ctx->pc = 0x2F05E0u;
        goto label_2f05e0;
    }
    ctx->pc = 0x2F05D8u;
    {
        const bool branch_taken_0x2f05d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f05d8) {
            ctx->pc = 0x2F05E8u;
            goto label_2f05e8;
        }
    }
    ctx->pc = 0x2F05E0u;
label_2f05e0:
    // 0x2f05e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f05e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2f05e4:
    // 0x2f05e4: 0x0  nop
    ctx->pc = 0x2f05e4u;
    // NOP
label_2f05e8:
    // 0x2f05e8: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2f05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_2f05ec:
    // 0x2f05ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f05ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f05f0:
    // 0x2f05f0: 0x0  nop
    ctx->pc = 0x2f05f0u;
    // NOP
label_2f05f4:
    // 0x2f05f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f05f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f05f8:
    // 0x2f05f8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2f05fc:
    if (ctx->pc == 0x2F05FCu) {
        ctx->pc = 0x2F0600u;
        goto label_2f0600;
    }
    ctx->pc = 0x2F05F8u;
    {
        const bool branch_taken_0x2f05f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f05f8) {
            ctx->pc = 0x2F0628u;
            goto label_2f0628;
        }
    }
    ctx->pc = 0x2F0600u;
label_2f0600:
    // 0x2f0600: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2f0600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2f0604:
    // 0x2f0604: 0x26660090  addiu       $a2, $s3, 0x90
    ctx->pc = 0x2f0604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2f0608:
    // 0x2f0608: 0xc096980  jal         func_25A600
label_2f060c:
    if (ctx->pc == 0x2F060Cu) {
        ctx->pc = 0x2F060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0608u;
        // 0x2f060c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0610u;
        goto label_2f0610;
    }
    ctx->pc = 0x2F0608u;
    SET_GPR_U32(ctx, 31, 0x2F0610u);
    ctx->pc = 0x2F060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0608u;
    // 0x2f060c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A600u, 0x2F0608u, 0x2F0610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0610u;
label_2f0610:
    // 0x2f0610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f0610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0614:
    // 0x2f0614: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2f0618:
    if (ctx->pc == 0x2F0618u) {
        ctx->pc = 0x2F0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0614u;
        // 0x2f0618: 0xa2630780  sb          $v1, 0x780($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F061Cu;
        goto label_2f061c;
    }
    ctx->pc = 0x2F0614u;
    {
        const bool branch_taken_0x2f0614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0614u;
        // 0x2f0618: 0xa2630780  sb          $v1, 0x780($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0614) {
            ctx->pc = 0x2F06D0u;
            goto label_2f06d0;
        }
    }
    ctx->pc = 0x2F061Cu;
label_2f061c:
    // 0x2f061c: 0x0  nop
    ctx->pc = 0x2f061cu;
    // NOP
label_2f0620:
    // 0x2f0620: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f0620u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2f0624:
    // 0x2f0624: 0x0  nop
    ctx->pc = 0x2f0624u;
    // NOP
label_2f0628:
    // 0x2f0628: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f0628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f062c:
    // 0x2f062c: 0x0  nop
    ctx->pc = 0x2f062cu;
    // NOP
label_2f0630:
    // 0x2f0630: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2f0630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_2f0634:
    // 0x2f0634: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
label_2f0638:
    if (ctx->pc == 0x2F0638u) {
        ctx->pc = 0x2F063Cu;
        goto label_2f063c;
    }
    ctx->pc = 0x2F0634u;
    {
        const bool branch_taken_0x2f0634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0634) {
            ctx->pc = 0x2F04B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f04b0;
        }
    }
    ctx->pc = 0x2F063Cu;
label_2f063c:
    // 0x2f063c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f0640:
    // 0x2f0640: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
label_2f0644:
    if (ctx->pc == 0x2F0644u) {
        ctx->pc = 0x2F0648u;
        goto label_2f0648;
    }
    ctx->pc = 0x2F0640u;
    {
        const bool branch_taken_0x2f0640 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f0640) {
            ctx->pc = 0x2F0650u;
            goto label_2f0650;
        }
    }
    ctx->pc = 0x2F0648u;
label_2f0648:
    // 0x2f0648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f0648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f064c:
    // 0x2f064c: 0xa2622b26  sb          $v0, 0x2B26($s3)
    ctx->pc = 0x2f064cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11046), (uint8_t)GPR_U32(ctx, 2));
label_2f0650:
    // 0x2f0650: 0x3c080068  lui         $t0, 0x68
    ctx->pc = 0x2f0650u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)104 << 16));
label_2f0654:
    // 0x2f0654: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2f0654u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f0658:
    // 0x2f0658: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2f0658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2f065c:
    // 0x2f065c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f065cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0660:
    // 0x2f0660: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0664:
    // 0x2f0664: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2f0664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f0668:
    // 0x2f0668: 0xc0a2730  jal         func_289CC0
label_2f066c:
    if (ctx->pc == 0x2F066Cu) {
        ctx->pc = 0x2F066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0668u;
        // 0x2f066c: 0x2508c648  addiu       $t0, $t0, -0x39B8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0670u;
        goto label_2f0670;
    }
    ctx->pc = 0x2F0668u;
    SET_GPR_U32(ctx, 31, 0x2F0670u);
    ctx->pc = 0x2F066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0668u;
    // 0x2f066c: 0x2508c648  addiu       $t0, $t0, -0x39B8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289CC0u, 0x2F0668u, 0x2F0670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0670u;
label_2f0670:
    // 0x2f0670: 0x92630821  lbu         $v1, 0x821($s3)
    ctx->pc = 0x2f0670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2081)));
label_2f0674:
    // 0x2f0674: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_2f0678:
    if (ctx->pc == 0x2F0678u) {
        ctx->pc = 0x2F067Cu;
        goto label_2f067c;
    }
    ctx->pc = 0x2F0674u;
    {
        const bool branch_taken_0x2f0674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0674) {
            ctx->pc = 0x2F0698u;
            goto label_2f0698;
        }
    }
    ctx->pc = 0x2F067Cu;
label_2f067c:
    // 0x2f067c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f067cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f0680:
    // 0x2f0680: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f0680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0684:
    // 0x2f0684: 0xc0bbc74  jal         func_2EF1D0
label_2f0688:
    if (ctx->pc == 0x2F0688u) {
        ctx->pc = 0x2F0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0684u;
        // 0x2f0688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F068Cu;
        goto label_2f068c;
    }
    ctx->pc = 0x2F0684u;
    SET_GPR_U32(ctx, 31, 0x2F068Cu);
    ctx->pc = 0x2F0688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0684u;
    // 0x2f0688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF1D0u, 0x2F0684u, 0x2F068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F068Cu;
label_2f068c:
    // 0x2f068c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f068cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0690:
    // 0x2f0690: 0xa2630821  sb          $v1, 0x821($s3)
    ctx->pc = 0x2f0690u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2f0694:
    // 0x2f0694: 0x0  nop
    ctx->pc = 0x2f0694u;
    // NOP
label_2f0698:
    // 0x2f0698: 0x96630828  lhu         $v1, 0x828($s3)
    ctx->pc = 0x2f0698u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2088)));
label_2f069c:
    // 0x2f069c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f069cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2f06a0:
    // 0x2f06a0: 0xa6630828  sh          $v1, 0x828($s3)
    ctx->pc = 0x2f06a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2088), (uint16_t)GPR_U32(ctx, 3));
label_2f06a4:
    // 0x2f06a4: 0x96630828  lhu         $v1, 0x828($s3)
    ctx->pc = 0x2f06a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2088)));
label_2f06a8:
    // 0x2f06a8: 0x1c600009  bgtz        $v1, . + 4 + (0x9 << 2)
label_2f06ac:
    if (ctx->pc == 0x2F06ACu) {
        ctx->pc = 0x2F06B0u;
        goto label_2f06b0;
    }
    ctx->pc = 0x2F06A8u;
    {
        const bool branch_taken_0x2f06a8 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2f06a8) {
            ctx->pc = 0x2F06D0u;
            goto label_2f06d0;
        }
    }
    ctx->pc = 0x2F06B0u;
label_2f06b0:
    // 0x2f06b0: 0x82632b26  lb          $v1, 0x2B26($s3)
    ctx->pc = 0x2f06b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 11046)));
label_2f06b4:
    // 0x2f06b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2f06b8:
    if (ctx->pc == 0x2F06B8u) {
        ctx->pc = 0x2F06BCu;
        goto label_2f06bc;
    }
    ctx->pc = 0x2F06B4u;
    {
        const bool branch_taken_0x2f06b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f06b4) {
            ctx->pc = 0x2F06C8u;
            goto label_2f06c8;
        }
    }
    ctx->pc = 0x2F06BCu;
label_2f06bc:
    // 0x2f06bc: 0x240300e1  addiu       $v1, $zero, 0xE1
    ctx->pc = 0x2f06bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
label_2f06c0:
    // 0x2f06c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f06c4:
    if (ctx->pc == 0x2F06C4u) {
        ctx->pc = 0x2F06C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F06C0u;
        // 0x2f06c4: 0xa2630780  sb          $v1, 0x780($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F06C8u;
        goto label_2f06c8;
    }
    ctx->pc = 0x2F06C0u;
    {
        const bool branch_taken_0x2f06c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F06C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F06C0u;
        // 0x2f06c4: 0xa2630780  sb          $v1, 0x780($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f06c0) {
            ctx->pc = 0x2F06D0u;
            goto label_2f06d0;
        }
    }
    ctx->pc = 0x2F06C8u;
label_2f06c8:
    // 0x2f06c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f06c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f06cc:
    // 0x2f06cc: 0xa2630780  sb          $v1, 0x780($s3)
    ctx->pc = 0x2f06ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2f06d0:
    // 0x2f06d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f06d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f06d4:
    // 0x2f06d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f06d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f06d8:
    // 0x2f06d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f06d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f06dc:
    // 0x2f06dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f06dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f06e0:
    // 0x2f06e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f06e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f06e4:
    // 0x2f06e4: 0x3e00008  jr          $ra
label_2f06e8:
    if (ctx->pc == 0x2F06E8u) {
        ctx->pc = 0x2F06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F06E4u;
        // 0x2f06e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F06ECu;
        goto label_fallthrough_0x2f06e4;
    }
    ctx->pc = 0x2F06E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F06E4u;
        // 0x2f06e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F06E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f06e4:
    ctx->pc = 0x2F06ECu;
}
