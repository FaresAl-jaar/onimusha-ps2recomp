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

// Function: sub_002363A8
// Address: 0x2363a8 - 0x23658c
void sub_002363A8_0x2363a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002363A8_0x2363a8");
#endif

    switch (ctx->pc) {
        case 0x2363a8u: goto label_2363a8;
        case 0x2363acu: goto label_2363ac;
        case 0x2363b0u: goto label_2363b0;
        case 0x2363b4u: goto label_2363b4;
        case 0x2363b8u: goto label_2363b8;
        case 0x2363bcu: goto label_2363bc;
        case 0x2363c0u: goto label_2363c0;
        case 0x2363c4u: goto label_2363c4;
        case 0x2363c8u: goto label_2363c8;
        case 0x2363ccu: goto label_2363cc;
        case 0x2363d0u: goto label_2363d0;
        case 0x2363d4u: goto label_2363d4;
        case 0x2363d8u: goto label_2363d8;
        case 0x2363dcu: goto label_2363dc;
        case 0x2363e0u: goto label_2363e0;
        case 0x2363e4u: goto label_2363e4;
        case 0x2363e8u: goto label_2363e8;
        case 0x2363ecu: goto label_2363ec;
        case 0x2363f0u: goto label_2363f0;
        case 0x2363f4u: goto label_2363f4;
        case 0x2363f8u: goto label_2363f8;
        case 0x2363fcu: goto label_2363fc;
        case 0x236400u: goto label_236400;
        case 0x236404u: goto label_236404;
        case 0x236408u: goto label_236408;
        case 0x23640cu: goto label_23640c;
        case 0x236410u: goto label_236410;
        case 0x236414u: goto label_236414;
        case 0x236418u: goto label_236418;
        case 0x23641cu: goto label_23641c;
        case 0x236420u: goto label_236420;
        case 0x236424u: goto label_236424;
        case 0x236428u: goto label_236428;
        case 0x23642cu: goto label_23642c;
        case 0x236430u: goto label_236430;
        case 0x236434u: goto label_236434;
        case 0x236438u: goto label_236438;
        case 0x23643cu: goto label_23643c;
        case 0x236440u: goto label_236440;
        case 0x236444u: goto label_236444;
        case 0x236448u: goto label_236448;
        case 0x23644cu: goto label_23644c;
        case 0x236450u: goto label_236450;
        case 0x236454u: goto label_236454;
        case 0x236458u: goto label_236458;
        case 0x23645cu: goto label_23645c;
        case 0x236460u: goto label_236460;
        case 0x236464u: goto label_236464;
        case 0x236468u: goto label_236468;
        case 0x23646cu: goto label_23646c;
        case 0x236470u: goto label_236470;
        case 0x236474u: goto label_236474;
        case 0x236478u: goto label_236478;
        case 0x23647cu: goto label_23647c;
        case 0x236480u: goto label_236480;
        case 0x236484u: goto label_236484;
        case 0x236488u: goto label_236488;
        case 0x23648cu: goto label_23648c;
        case 0x236490u: goto label_236490;
        case 0x236494u: goto label_236494;
        case 0x236498u: goto label_236498;
        case 0x23649cu: goto label_23649c;
        case 0x2364a0u: goto label_2364a0;
        case 0x2364a4u: goto label_2364a4;
        case 0x2364a8u: goto label_2364a8;
        case 0x2364acu: goto label_2364ac;
        case 0x2364b0u: goto label_2364b0;
        case 0x2364b4u: goto label_2364b4;
        case 0x2364b8u: goto label_2364b8;
        case 0x2364bcu: goto label_2364bc;
        case 0x2364c0u: goto label_2364c0;
        case 0x2364c4u: goto label_2364c4;
        case 0x2364c8u: goto label_2364c8;
        case 0x2364ccu: goto label_2364cc;
        case 0x2364d0u: goto label_2364d0;
        case 0x2364d4u: goto label_2364d4;
        case 0x2364d8u: goto label_2364d8;
        case 0x2364dcu: goto label_2364dc;
        case 0x2364e0u: goto label_2364e0;
        case 0x2364e4u: goto label_2364e4;
        case 0x2364e8u: goto label_2364e8;
        case 0x2364ecu: goto label_2364ec;
        case 0x2364f0u: goto label_2364f0;
        case 0x2364f4u: goto label_2364f4;
        case 0x2364f8u: goto label_2364f8;
        case 0x2364fcu: goto label_2364fc;
        case 0x236500u: goto label_236500;
        case 0x236504u: goto label_236504;
        case 0x236508u: goto label_236508;
        case 0x23650cu: goto label_23650c;
        case 0x236510u: goto label_236510;
        case 0x236514u: goto label_236514;
        case 0x236518u: goto label_236518;
        case 0x23651cu: goto label_23651c;
        case 0x236520u: goto label_236520;
        case 0x236524u: goto label_236524;
        case 0x236528u: goto label_236528;
        case 0x23652cu: goto label_23652c;
        case 0x236530u: goto label_236530;
        case 0x236534u: goto label_236534;
        case 0x236538u: goto label_236538;
        case 0x23653cu: goto label_23653c;
        case 0x236540u: goto label_236540;
        case 0x236544u: goto label_236544;
        case 0x236548u: goto label_236548;
        case 0x23654cu: goto label_23654c;
        case 0x236550u: goto label_236550;
        case 0x236554u: goto label_236554;
        case 0x236558u: goto label_236558;
        case 0x23655cu: goto label_23655c;
        case 0x236560u: goto label_236560;
        case 0x236564u: goto label_236564;
        case 0x236568u: goto label_236568;
        case 0x23656cu: goto label_23656c;
        case 0x236570u: goto label_236570;
        case 0x236574u: goto label_236574;
        case 0x236578u: goto label_236578;
        case 0x23657cu: goto label_23657c;
        case 0x236580u: goto label_236580;
        case 0x236584u: goto label_236584;
        case 0x236588u: goto label_236588;
        default: break;
    }

    ctx->pc = 0x2363a8u;

label_2363a8:
    // 0x2363a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2363a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2363ac:
    // 0x2363ac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2363acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2363b0:
    // 0x2363b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2363b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2363b4:
    // 0x2363b4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2363b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2363b8:
    // 0x2363b8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2363b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2363bc:
    // 0x2363bc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2363bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2363c0:
    // 0x2363c0: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x2363c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_2363c4:
    // 0x2363c4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2363c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2363c8:
    // 0x2363c8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2363c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_2363cc:
    // 0x2363cc: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2363ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_2363d0:
    // 0x2363d0: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2363d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_2363d4:
    // 0x2363d4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2363d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_2363d8:
    // 0x2363d8: 0x8e160004  lw          $s6, 0x4($s0)
    ctx->pc = 0x2363d8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2363dc:
    // 0x2363dc: 0x8e150008  lw          $s5, 0x8($s0)
    ctx->pc = 0x2363dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2363e0:
    // 0x2363e0: 0xc08af1c  jal         func_22BC70
label_2363e4:
    if (ctx->pc == 0x2363E4u) {
        ctx->pc = 0x2363E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363E0u;
        // 0x2363e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363E8u;
        goto label_2363e8;
    }
    ctx->pc = 0x2363E0u;
    SET_GPR_U32(ctx, 31, 0x2363E8u);
    ctx->pc = 0x2363E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2363E0u;
    // 0x2363e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BC70u, 0x2363E0u, 0x2363E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363E8u;
label_2363e8:
    // 0x2363e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2363e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2363ec:
    // 0x2363ec: 0xc08b01c  jal         func_22C070
label_2363f0:
    if (ctx->pc == 0x2363F0u) {
        ctx->pc = 0x2363F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363ECu;
        // 0x2363f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363F4u;
        goto label_2363f4;
    }
    ctx->pc = 0x2363ECu;
    SET_GPR_U32(ctx, 31, 0x2363F4u);
    ctx->pc = 0x2363F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2363ECu;
    // 0x2363f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C070u, 0x2363ECu, 0x2363F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363F4u;
label_2363f4:
    // 0x2363f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2363f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2363f8:
    // 0x2363f8: 0xc08b01e  jal         func_22C078
label_2363fc:
    if (ctx->pc == 0x2363FCu) {
        ctx->pc = 0x2363FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363F8u;
        // 0x2363fc: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236400u;
        goto label_236400;
    }
    ctx->pc = 0x2363F8u;
    SET_GPR_U32(ctx, 31, 0x236400u);
    ctx->pc = 0x2363FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2363F8u;
    // 0x2363fc: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C078u, 0x2363F8u, 0x236400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236400u;
label_236400:
    // 0x236400: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x236400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_236404:
    // 0x236404: 0xc08aee6  jal         func_22BB98
label_236408:
    if (ctx->pc == 0x236408u) {
        ctx->pc = 0x236408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236404u;
        // 0x236408: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23640Cu;
        goto label_23640c;
    }
    ctx->pc = 0x236404u;
    SET_GPR_U32(ctx, 31, 0x23640Cu);
    ctx->pc = 0x236408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236404u;
    // 0x236408: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BB98u, 0x236404u, 0x23640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23640Cu;
label_23640c:
    // 0x23640c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23640cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236410:
    // 0x236410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236414:
    // 0x236414: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
label_236418:
    if (ctx->pc == 0x236418u) {
        ctx->pc = 0x236418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236414u;
        // 0x236418: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23641Cu;
        goto label_23641c;
    }
    ctx->pc = 0x236414u;
    {
        const bool branch_taken_0x236414 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x236414) {
            ctx->pc = 0x236418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236414u;
            // 0x236418: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236430u;
            goto label_236430;
        }
    }
    ctx->pc = 0x23641Cu;
label_23641c:
    // 0x23641c: 0xc08dbba  jal         func_236EE8
label_236420:
    if (ctx->pc == 0x236420u) {
        ctx->pc = 0x236420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23641Cu;
        // 0x236420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236424u;
        goto label_236424;
    }
    ctx->pc = 0x23641Cu;
    SET_GPR_U32(ctx, 31, 0x236424u);
    ctx->pc = 0x236420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23641Cu;
    // 0x236420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236EE8u, 0x23641Cu, 0x236424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236424u;
label_236424:
    // 0x236424: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_236428:
    if (ctx->pc == 0x236428u) {
        ctx->pc = 0x236428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236424u;
        // 0x236428: 0x27b70010  addiu       $s7, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23642Cu;
        goto label_23642c;
    }
    ctx->pc = 0x236424u;
    {
        const bool branch_taken_0x236424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x236428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236424u;
        // 0x236428: 0x27b70010  addiu       $s7, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236424) {
            ctx->pc = 0x236440u;
            goto label_236440;
        }
    }
    ctx->pc = 0x23642Cu;
label_23642c:
    // 0x23642c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x23642cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_236430:
    // 0x236430: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x236430u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_236434:
    // 0x236434: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x236434u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_236438:
    // 0x236438: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x236438u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_23643c:
    // 0x23643c: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x23643cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_236440:
    // 0x236440: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x236440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_236444:
    // 0x236444: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x236444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_236448:
    // 0x236448: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x236448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_23644c:
    // 0x23644c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x23644cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_236450:
    // 0x236450: 0xc094854  jal         func_252150
label_236454:
    if (ctx->pc == 0x236454u) {
        ctx->pc = 0x236454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236450u;
        // 0x236454: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236458u;
        goto label_236458;
    }
    ctx->pc = 0x236450u;
    SET_GPR_U32(ctx, 31, 0x236458u);
    ctx->pc = 0x236454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236450u;
    // 0x236454: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x236450u, 0x236458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236458u;
label_236458:
    // 0x236458: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x236458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_23645c:
    // 0x23645c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x23645cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_236460:
    // 0x236460: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x236460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_236464:
    // 0x236464: 0x8c470020  lw          $a3, 0x20($v0)
    ctx->pc = 0x236464u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_236468:
    // 0x236468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x236468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23646c:
    // 0x23646c: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x23646cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_236470:
    // 0x236470: 0xe0f809  jalr        $a3
label_236474:
    if (ctx->pc == 0x236474u) {
        ctx->pc = 0x236474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236470u;
        // 0x236474: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236478u;
        goto label_236478;
    }
    ctx->pc = 0x236470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x236478u);
        ctx->pc = 0x236474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236470u;
        // 0x236474: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236470u, 0x236478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236478u;
label_236478:
    // 0x236478: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x236478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_23647c:
    // 0x23647c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23647cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_236480:
    // 0x236480: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x236480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236484:
    // 0x236484: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x236484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_236488:
    // 0x236488: 0x40f809  jalr        $v0
label_23648c:
    if (ctx->pc == 0x23648Cu) {
        ctx->pc = 0x23648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236488u;
        // 0x23648c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236490u;
        goto label_236490;
    }
    ctx->pc = 0x236488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236490u);
        ctx->pc = 0x23648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236488u;
        // 0x23648c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236488u, 0x236490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236490u;
label_236490:
    // 0x236490: 0x10000019  b           . + 4 + (0x19 << 2)
label_236494:
    if (ctx->pc == 0x236494u) {
        ctx->pc = 0x236498u;
        goto label_236498;
    }
    ctx->pc = 0x236490u;
    {
        const bool branch_taken_0x236490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236490) {
            ctx->pc = 0x2364F8u;
            goto label_2364f8;
        }
    }
    ctx->pc = 0x236498u;
label_236498:
    // 0x236498: 0xc094854  jal         func_252150
label_23649c:
    if (ctx->pc == 0x23649Cu) {
        ctx->pc = 0x2364A0u;
        goto label_2364a0;
    }
    ctx->pc = 0x236498u;
    SET_GPR_U32(ctx, 31, 0x2364A0u);
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x236498u, 0x2364A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2364A0u;
label_2364a0:
    // 0x2364a0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2364a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2364a4:
    // 0x2364a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2364a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2364a8:
    // 0x2364a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2364ac:
    if (ctx->pc == 0x2364ACu) {
        ctx->pc = 0x2364ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364A8u;
        // 0x2364ac: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364B0u;
        goto label_2364b0;
    }
    ctx->pc = 0x2364A8u;
    {
        const bool branch_taken_0x2364a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2364ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364A8u;
        // 0x2364ac: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364a8) {
            ctx->pc = 0x2364C0u;
            goto label_2364c0;
        }
    }
    ctx->pc = 0x2364B0u;
label_2364b0:
    // 0x2364b0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2364b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2364b4:
    // 0x2364b4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2364b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2364b8:
    // 0x2364b8: 0x40f809  jalr        $v0
label_2364bc:
    if (ctx->pc == 0x2364BCu) {
        ctx->pc = 0x2364BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364B8u;
        // 0x2364bc: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364C0u;
        goto label_2364c0;
    }
    ctx->pc = 0x2364B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2364C0u);
        ctx->pc = 0x2364BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364B8u;
        // 0x2364bc: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2364B8u, 0x2364C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2364C0u;
label_2364c0:
    // 0x2364c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2364c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2364c4:
    // 0x2364c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2364c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2364c8:
    // 0x2364c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2364c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2364cc:
    // 0x2364cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2364ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2364d0:
    // 0x2364d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2364d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2364d4:
    // 0x2364d4: 0x40f809  jalr        $v0
label_2364d8:
    if (ctx->pc == 0x2364D8u) {
        ctx->pc = 0x2364D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364D4u;
        // 0x2364d8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364DCu;
        goto label_2364dc;
    }
    ctx->pc = 0x2364D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2364DCu);
        ctx->pc = 0x2364D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364D4u;
        // 0x2364d8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2364D4u, 0x2364DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2364DCu;
label_2364dc:
    // 0x2364dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2364dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2364e0:
    // 0x2364e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2364e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2364e4:
    // 0x2364e4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2364e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2364e8:
    // 0x2364e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2364e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2364ec:
    // 0x2364ec: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2364ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2364f0:
    // 0x2364f0: 0x40f809  jalr        $v0
label_2364f4:
    if (ctx->pc == 0x2364F4u) {
        ctx->pc = 0x2364F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364F0u;
        // 0x2364f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364F8u;
        goto label_2364f8;
    }
    ctx->pc = 0x2364F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2364F8u);
        ctx->pc = 0x2364F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364F0u;
        // 0x2364f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2364F0u, 0x2364F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2364F8u;
label_2364f8:
    // 0x2364f8: 0xc08aeea  jal         func_22BBA8
label_2364fc:
    if (ctx->pc == 0x2364FCu) {
        ctx->pc = 0x2364FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364F8u;
        // 0x2364fc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236500u;
        goto label_236500;
    }
    ctx->pc = 0x2364F8u;
    SET_GPR_U32(ctx, 31, 0x236500u);
    ctx->pc = 0x2364FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2364F8u;
    // 0x2364fc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BBA8u, 0x2364F8u, 0x236500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236500u;
label_236500:
    // 0x236500: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x236500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_236504:
    // 0x236504: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x236504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_236508:
    // 0x236508: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x236508u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_23650c:
    // 0x23650c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x23650cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_236510:
    // 0x236510: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_236514:
    if (ctx->pc == 0x236514u) {
        ctx->pc = 0x236514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236510u;
        // 0x236514: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236518u;
        goto label_236518;
    }
    ctx->pc = 0x236510u;
    {
        const bool branch_taken_0x236510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236510u;
        // 0x236514: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236510) {
            ctx->pc = 0x236498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236498;
        }
    }
    ctx->pc = 0x236518u;
label_236518:
    // 0x236518: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x236518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_23651c:
    // 0x23651c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23651cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_236520:
    // 0x236520: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x236520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_236524:
    // 0x236524: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x236524u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_236528:
    // 0x236528: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x236528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_23652c:
    // 0x23652c: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x23652cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_236530:
    // 0x236530: 0xbe2821  addu        $a1, $a1, $fp
    ctx->pc = 0x236530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_236534:
    // 0x236534: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x236534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_236538:
    // 0x236538: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x236538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
label_23653c:
    // 0x23653c: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x23653cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_236540:
    // 0x236540: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x236540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_236544:
    // 0x236544: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x236544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_236548:
    // 0x236548: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x236548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_23654c:
    // 0x23654c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x23654cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_236550:
    // 0x236550: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x236550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
label_236554:
    // 0x236554: 0xc08b00c  jal         func_22C030
label_236558:
    if (ctx->pc == 0x236558u) {
        ctx->pc = 0x236558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236554u;
        // 0x236558: 0xae060040  sw          $a2, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23655Cu;
        goto label_23655c;
    }
    ctx->pc = 0x236554u;
    SET_GPR_U32(ctx, 31, 0x23655Cu);
    ctx->pc = 0x236558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236554u;
    // 0x236558: 0xae060040  sw          $a2, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C030u, 0x236554u, 0x23655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23655Cu;
label_23655c:
    // 0x23655c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23655cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236560:
    // 0x236560: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x236560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_236564:
    // 0x236564: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x236564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_236568:
    // 0x236568: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x236568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23656c:
    // 0x23656c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23656cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_236570:
    // 0x236570: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x236570u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_236574:
    // 0x236574: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x236574u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_236578:
    // 0x236578: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x236578u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_23657c:
    // 0x23657c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x23657cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_236580:
    // 0x236580: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x236580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_236584:
    // 0x236584: 0x3e00008  jr          $ra
label_236588:
    if (ctx->pc == 0x236588u) {
        ctx->pc = 0x236588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236584u;
        // 0x236588: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23658Cu;
        goto label_fallthrough_0x236584;
    }
    ctx->pc = 0x236584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236584u;
        // 0x236588: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x236584:
    ctx->pc = 0x23658Cu;
}
