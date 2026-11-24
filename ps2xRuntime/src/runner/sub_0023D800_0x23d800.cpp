#include <cstdio>
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

// Function: sub_0023D800
// Address: 0x23d800 - 0x23d97c
void sub_0023D800_0x23d800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D800_0x23d800");
#endif

    switch (ctx->pc) {
        case 0x23d800u: goto label_23d800;
        case 0x23d804u: goto label_23d804;
        case 0x23d808u: goto label_23d808;
        case 0x23d80cu: goto label_23d80c;
        case 0x23d810u: goto label_23d810;
        case 0x23d814u: goto label_23d814;
        case 0x23d818u: goto label_23d818;
        case 0x23d81cu: goto label_23d81c;
        case 0x23d820u: goto label_23d820;
        case 0x23d824u: goto label_23d824;
        case 0x23d828u: goto label_23d828;
        case 0x23d82cu: goto label_23d82c;
        case 0x23d830u: goto label_23d830;
        case 0x23d834u: goto label_23d834;
        case 0x23d838u: goto label_23d838;
        case 0x23d83cu: goto label_23d83c;
        case 0x23d840u: goto label_23d840;
        case 0x23d844u: goto label_23d844;
        case 0x23d848u: goto label_23d848;
        case 0x23d84cu: goto label_23d84c;
        case 0x23d850u: goto label_23d850;
        case 0x23d854u: goto label_23d854;
        case 0x23d858u: goto label_23d858;
        case 0x23d85cu: goto label_23d85c;
        case 0x23d860u: goto label_23d860;
        case 0x23d864u: goto label_23d864;
        case 0x23d868u: goto label_23d868;
        case 0x23d86cu: goto label_23d86c;
        case 0x23d870u: goto label_23d870;
        case 0x23d874u: goto label_23d874;
        case 0x23d878u: goto label_23d878;
        case 0x23d87cu: goto label_23d87c;
        case 0x23d880u: goto label_23d880;
        case 0x23d884u: goto label_23d884;
        case 0x23d888u: goto label_23d888;
        case 0x23d88cu: goto label_23d88c;
        case 0x23d890u: goto label_23d890;
        case 0x23d894u: goto label_23d894;
        case 0x23d898u: goto label_23d898;
        case 0x23d89cu: goto label_23d89c;
        case 0x23d8a0u: goto label_23d8a0;
        case 0x23d8a4u: goto label_23d8a4;
        case 0x23d8a8u: goto label_23d8a8;
        case 0x23d8acu: goto label_23d8ac;
        case 0x23d8b0u: goto label_23d8b0;
        case 0x23d8b4u: goto label_23d8b4;
        case 0x23d8b8u: goto label_23d8b8;
        case 0x23d8bcu: goto label_23d8bc;
        case 0x23d8c0u: goto label_23d8c0;
        case 0x23d8c4u: goto label_23d8c4;
        case 0x23d8c8u: goto label_23d8c8;
        case 0x23d8ccu: goto label_23d8cc;
        case 0x23d8d0u: goto label_23d8d0;
        case 0x23d8d4u: goto label_23d8d4;
        case 0x23d8d8u: goto label_23d8d8;
        case 0x23d8dcu: goto label_23d8dc;
        case 0x23d8e0u: goto label_23d8e0;
        case 0x23d8e4u: goto label_23d8e4;
        case 0x23d8e8u: goto label_23d8e8;
        case 0x23d8ecu: goto label_23d8ec;
        case 0x23d8f0u: goto label_23d8f0;
        case 0x23d8f4u: goto label_23d8f4;
        case 0x23d8f8u: goto label_23d8f8;
        case 0x23d8fcu: goto label_23d8fc;
        case 0x23d900u: goto label_23d900;
        case 0x23d904u: goto label_23d904;
        case 0x23d908u: goto label_23d908;
        case 0x23d90cu: goto label_23d90c;
        case 0x23d910u: goto label_23d910;
        case 0x23d914u: goto label_23d914;
        case 0x23d918u: goto label_23d918;
        case 0x23d91cu: goto label_23d91c;
        case 0x23d920u: goto label_23d920;
        case 0x23d924u: goto label_23d924;
        case 0x23d928u: goto label_23d928;
        case 0x23d92cu: goto label_23d92c;
        case 0x23d930u: goto label_23d930;
        case 0x23d934u: goto label_23d934;
        case 0x23d938u: goto label_23d938;
        case 0x23d93cu: goto label_23d93c;
        case 0x23d940u: goto label_23d940;
        case 0x23d944u: goto label_23d944;
        case 0x23d948u: goto label_23d948;
        case 0x23d94cu: goto label_23d94c;
        case 0x23d950u: goto label_23d950;
        case 0x23d954u: goto label_23d954;
        case 0x23d958u: goto label_23d958;
        case 0x23d95cu: goto label_23d95c;
        case 0x23d960u: goto label_23d960;
        case 0x23d964u: goto label_23d964;
        case 0x23d968u: goto label_23d968;
        case 0x23d96cu: goto label_23d96c;
        case 0x23d970u: goto label_23d970;
        case 0x23d974u: goto label_23d974;
        case 0x23d978u: goto label_23d978;
        default: break;
    }

    ctx->pc = 0x23d800u;

label_23d800:
    // 0x23d800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23d800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23d804:
    // 0x23d804: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23d804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_23d808:
    // 0x23d808: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23d808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_23d80c:
    // 0x23d80c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23d80cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d810:
    // 0x23d810: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x23d810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_23d814:
    // 0x23d814: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23d814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23d818:
    // 0x23d818: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x23d818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_23d81c:
    // 0x23d81c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x23d81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_23d820:
    // 0x23d820: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x23d820u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_23d824:
    // 0x23d824: 0x8e340004  lw          $s4, 0x4($s1)
    ctx->pc = 0x23d824u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23d828:
    // 0x23d828: 0xc08d564  jal         func_235590
label_23d82c:
    if (ctx->pc == 0x23D82Cu) {
        ctx->pc = 0x23D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D828u;
        // 0x23d82c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D830u;
        goto label_23d830;
    }
    ctx->pc = 0x23D828u;
    SET_GPR_U32(ctx, 31, 0x23D830u);
    ctx->pc = 0x23D82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D828u;
    // 0x23d82c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235590u, 0x23D828u, 0x23D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D830u;
label_23d830:
    // 0x23d830: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23d834:
    // 0x23d834: 0xc08d56a  jal         func_2355A8
label_23d838:
    if (ctx->pc == 0x23D838u) {
        ctx->pc = 0x23D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D834u;
        // 0x23d838: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D83Cu;
        goto label_23d83c;
    }
    ctx->pc = 0x23D834u;
    SET_GPR_U32(ctx, 31, 0x23D83Cu);
    ctx->pc = 0x23D838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D834u;
    // 0x23d838: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2355A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2355A8u, 0x23D834u, 0x23D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D83Cu;
label_23d83c:
    // 0x23d83c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23d83cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d840:
    // 0x23d840: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x23d840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_23d844:
    // 0x23d844: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x23d844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_23d848:
    // 0x23d848: 0x28432001  slti        $v1, $v0, 0x2001
    ctx->pc = 0x23d848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8193) ? 1 : 0);
label_23d84c:
    // 0x23d84c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x23d84cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_23d850:
    { static uint64_t last[4]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[4]={(uint64_t)(GPR_U32(ctx,17)),(uint64_t)((int64_t)GPR_S32(ctx,16)),(uint64_t)((int64_t)GPR_S32(ctx,2)),(uint64_t)((int64_t)GPR_S32(ctx,19)),}; bool chg=first; for(int i=0;i<4;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<300) { ++lines; first=false; for(int i=0;i<4;++i) last[i]=cur[i]; fprintf(stderr,"[px prepbuf] hit=%u " "h=0x%llx outbuf=%lld need=%lld cap=%lld" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2],(unsigned long long)cur[3]); } }
    // 0x23d850: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x23d850u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23d854:
    // 0x23d854: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_23d858:
    if (ctx->pc == 0x23D858u) {
        ctx->pc = 0x23D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D854u;
        // 0x23d858: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D85Cu;
        goto label_23d85c;
    }
    ctx->pc = 0x23D854u;
    {
        const bool branch_taken_0x23d854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d854) {
            ctx->pc = 0x23D858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D854u;
            // 0x23d858: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D888u;
            goto label_23d888;
        }
    }
    ctx->pc = 0x23D85Cu;
label_23d85c:
    // 0x23d85c: 0xc08db14  jal         func_236C50
label_23d860:
    if (ctx->pc == 0x23D860u) {
        ctx->pc = 0x23D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D85Cu;
        // 0x23d860: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D864u;
        goto label_23d864;
    }
    ctx->pc = 0x23D85Cu;
    SET_GPR_U32(ctx, 31, 0x23D864u);
    ctx->pc = 0x23D860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D85Cu;
    // 0x23d860: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C50u, 0x23D85Cu, 0x23D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D864u;
label_23d864:
    { static uint64_t last[3]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[3]={(uint64_t)(GPR_U32(ctx,17)),(uint64_t)((int64_t)GPR_S32(ctx,2)),(uint64_t)((int64_t)GPR_S32(ctx,19)),}; bool chg=first; for(int i=0;i<3;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<300) { ++lines; first=false; for(int i=0;i<3;++i) last[i]=cur[i]; fprintf(stderr,"[px prepin] hit=%u " "h=0x%llx in=%lld cap=%lld" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2]); } }
    // 0x23d864: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x23d864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_23d868:
    // 0x23d868: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_23d86c:
    if (ctx->pc == 0x23D86Cu) {
        ctx->pc = 0x23D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D868u;
        // 0x23d86c: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D870u;
        goto label_23d870;
    }
    ctx->pc = 0x23D868u;
    {
        const bool branch_taken_0x23d868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d868) {
            ctx->pc = 0x23D86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D868u;
            // 0x23d86c: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D888u;
            goto label_23d888;
        }
    }
    ctx->pc = 0x23D870u;
label_23d870:
    // 0x23d870: 0xc08d6b2  jal         func_235AC8
label_23d874:
    if (ctx->pc == 0x23D874u) {
        ctx->pc = 0x23D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D870u;
        // 0x23d874: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D878u;
        goto label_23d878;
    }
    ctx->pc = 0x23D870u;
    SET_GPR_U32(ctx, 31, 0x23D878u);
    ctx->pc = 0x23D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D870u;
    // 0x23d874: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235AC8u, 0x23D870u, 0x23D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D878u;
label_23d878:
    // 0x23d878: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23d878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23d87c:
    // 0x23d87c: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_23d880:
    if (ctx->pc == 0x23D880u) {
        ctx->pc = 0x23D884u;
        goto label_23d884;
    }
    ctx->pc = 0x23D87Cu;
    {
        const bool branch_taken_0x23d87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23d87c) {
            ctx->pc = 0x23D8CCu;
            goto label_23d8cc;
        }
    }
    ctx->pc = 0x23D884u;
label_23d884:
    { static uint64_t last[6]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[6]={(uint64_t)(GPR_U32(ctx,17)),(uint64_t)((int64_t)READ8(GPR_U32(ctx,17)+0x70)),(uint64_t)((int64_t)READ8(GPR_U32(ctx,17)+0x71)),(uint64_t)((int64_t)READ8(GPR_U32(ctx,17)+0x72)),(uint64_t)((int64_t)GPR_S32(ctx,16)),(uint64_t)((int64_t)(int32_t)READ32(GPR_U32(ctx,17)+0x48)),}; bool chg=first; for(int i=0;i<6;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<300) { ++lines; first=false; for(int i=0;i<6;++i) last[i]=cur[i]; fprintf(stderr,"[px adxtprep] hit=%u " "h=0x%llx f70=%lld f71=%lld f72=%lld buf=%lld f48=%lld" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2],(unsigned long long)cur[3],(unsigned long long)cur[4],(unsigned long long)cur[5]); } }
    // 0x23d884: 0x82220070  lb          $v0, 0x70($s1)
    ctx->pc = 0x23d884u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_23d888:
    // 0x23d888: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_23d88c:
    if (ctx->pc == 0x23D88Cu) {
        ctx->pc = 0x23D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D888u;
        // 0x23d88c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D890u;
        goto label_23d890;
    }
    ctx->pc = 0x23D888u;
    {
        const bool branch_taken_0x23d888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D888u;
        // 0x23d88c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d888) {
            ctx->pc = 0x23D8C8u;
            goto label_23d8c8;
        }
    }
    ctx->pc = 0x23D890u;
label_23d890:
    // 0x23d890: 0x82220072  lb          $v0, 0x72($s1)
    ctx->pc = 0x23d890u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
label_23d894:
    // 0x23d894: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_23d898:
    if (ctx->pc == 0x23D898u) {
        ctx->pc = 0x23D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D894u;
        // 0x23d898: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D89Cu;
        goto label_23d89c;
    }
    ctx->pc = 0x23D894u;
    {
        const bool branch_taken_0x23d894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d894) {
            ctx->pc = 0x23D898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D894u;
            // 0x23d898: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D8C0u;
            goto label_23d8c0;
        }
    }
    ctx->pc = 0x23D89Cu;
label_23d89c:
    // 0x23d89c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23d8a0:
    // 0x23d8a0: 0xc08d558  jal         func_235560
label_23d8a4:
    if (ctx->pc == 0x23D8A4u) {
        ctx->pc = 0x23D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8A0u;
        // 0x23d8a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8A8u;
        goto label_23d8a8;
    }
    ctx->pc = 0x23D8A0u;
    SET_GPR_U32(ctx, 31, 0x23D8A8u);
    ctx->pc = 0x23D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D8A0u;
    // 0x23d8a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235560u, 0x23D8A0u, 0x23D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8A8u;
label_23d8a8:
    // 0x23d8a8: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x23d8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_23d8ac:
    // 0x23d8ac: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x23d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_23d8b0:
    // 0x23d8b0: 0x2442ef80  addiu       $v0, $v0, -0x1080
    ctx->pc = 0x23d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963072));
label_23d8b4:
    // 0x23d8b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23d8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23d8b8:
    // 0x23d8b8: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x23d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
label_23d8bc:
    // 0x23d8bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23d8c0:
    // 0x23d8c0: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x23d8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_23d8c4:
    // 0x23d8c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d8c8:
    // 0x23d8c8: 0xa2220071  sb          $v0, 0x71($s1)
    ctx->pc = 0x23d8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 2));
label_23d8cc:
    { static uint64_t last[5]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[5]={(uint64_t)(GPR_U32(ctx,17)),(uint64_t)((int64_t)READ8(GPR_U32(ctx,17)+0x70)),(uint64_t)((int64_t)READ8(GPR_U32(ctx,17)+0x71)),(uint64_t)((int64_t)READ8(GPR_U32(ctx,17)+0x72)),(uint64_t)((int64_t)READ8(GPR_U32(ctx,17)+1)),}; bool chg=first; for(int i=0;i<5;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<300) { ++lines; first=false; for(int i=0;i<5;++i) last[i]=cur[i]; fprintf(stderr,"[px adxtprep2] hit=%u " "h=0x%llx f70=%lld f71=%lld f72=%lld st=%lld" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2],(unsigned long long)cur[3],(unsigned long long)cur[4]); } }
    // 0x23d8cc: 0xc08d6b2  jal         func_235AC8
label_23d8d0:
    if (ctx->pc == 0x23D8D0u) {
        ctx->pc = 0x23D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8CCu;
        // 0x23d8d0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8D4u;
        goto label_23d8d4;
    }
    ctx->pc = 0x23D8CCu;
    SET_GPR_U32(ctx, 31, 0x23D8D4u);
    ctx->pc = 0x23D8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D8CCu;
    // 0x23d8d0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235AC8u, 0x23D8CCu, 0x23D8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8D4u;
label_23d8d4:
    // 0x23d8d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23d8d8:
    // 0x23d8d8: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
label_23d8dc:
    if (ctx->pc == 0x23D8DCu) {
        ctx->pc = 0x23D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8D8u;
        // 0x23d8dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8E0u;
        goto label_23d8e0;
    }
    ctx->pc = 0x23D8D8u;
    {
        const bool branch_taken_0x23d8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8D8u;
        // 0x23d8dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d8d8) {
            ctx->pc = 0x23D960u;
            goto label_23d960;
        }
    }
    ctx->pc = 0x23D8E0u;
label_23d8e0:
    // 0x23d8e0: 0xc08e948  jal         func_23A520
label_23d8e4:
    if (ctx->pc == 0x23D8E4u) {
        ctx->pc = 0x23D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8E0u;
        // 0x23d8e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8E8u;
        goto label_23d8e8;
    }
    ctx->pc = 0x23D8E0u;
    SET_GPR_U32(ctx, 31, 0x23D8E8u);
    ctx->pc = 0x23D8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D8E0u;
    // 0x23d8e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A520u, 0x23D8E0u, 0x23D8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8E8u;
label_23d8e8:
    // 0x23d8e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d8e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d8ec:
    // 0x23d8ec: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x23d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_23d8f0:
    // 0x23d8f0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x23d8f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_23d8f4:
    // 0x23d8f4: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
label_23d8f8:
    if (ctx->pc == 0x23D8F8u) {
        ctx->pc = 0x23D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8F4u;
        // 0x23d8f8: 0x29840  sll         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8FCu;
        goto label_23d8fc;
    }
    ctx->pc = 0x23D8F4u;
    {
        const bool branch_taken_0x23d8f4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x23D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8F4u;
        // 0x23d8f8: 0x29840  sll         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d8f4) {
            ctx->pc = 0x23D95Cu;
            goto label_23d95c;
        }
    }
    ctx->pc = 0x23D8FCu;
label_23d8fc:
    // 0x23d8fc: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x23d8fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_23d900:
    // 0x23d900: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x23d900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23d904:
    // 0x23d904: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x23d904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23d908:
    // 0x23d908: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x23d908u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_23d90c:
    // 0x23d90c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x23d90cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23d910:
    // 0x23d910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23d910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d914:
    // 0x23d914: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23d914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23d918:
    // 0x23d918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d91c:
    // 0x23d91c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23d91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23d920:
    // 0x23d920: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23d920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_23d924:
    // 0x23d924: 0x40f809  jalr        $v0
label_23d928:
    if (ctx->pc == 0x23D928u) {
        ctx->pc = 0x23D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D924u;
        // 0x23d928: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D92Cu;
        goto label_23d92c;
    }
    ctx->pc = 0x23D924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D92Cu);
        ctx->pc = 0x23D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D924u;
        // 0x23d928: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D924u, 0x23D92Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D92Cu;
label_23d92c:
    // 0x23d92c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23d92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d930:
    // 0x23d930: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23d930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23d934:
    // 0x23d934: 0xc049590  jal         func_125640
label_23d938:
    if (ctx->pc == 0x23D938u) {
        ctx->pc = 0x23D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D934u;
        // 0x23d938: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D93Cu;
        goto label_23d93c;
    }
    ctx->pc = 0x23D934u;
    SET_GPR_U32(ctx, 31, 0x23D93Cu);
    ctx->pc = 0x23D938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D934u;
    // 0x23d938: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23D934u, 0x23D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D93Cu;
label_23d93c:
    // 0x23d93c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23d940:
    // 0x23d940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d944:
    // 0x23d944: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23d944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d948:
    // 0x23d948: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23d948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_23d94c:
    // 0x23d94c: 0x40f809  jalr        $v0
label_23d950:
    if (ctx->pc == 0x23D950u) {
        ctx->pc = 0x23D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D94Cu;
        // 0x23d950: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D954u;
        goto label_23d954;
    }
    ctx->pc = 0x23D94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D954u);
        ctx->pc = 0x23D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D94Cu;
        // 0x23d950: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D94Cu, 0x23D954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D954u;
label_23d954:
    // 0x23d954: 0x5620ffec  bnel        $s1, $zero, . + 4 + (-0x14 << 2)
label_23d958:
    if (ctx->pc == 0x23D958u) {
        ctx->pc = 0x23D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D954u;
        // 0x23d958: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D95Cu;
        goto label_23d95c;
    }
    ctx->pc = 0x23D954u;
    {
        const bool branch_taken_0x23d954 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d954) {
            ctx->pc = 0x23D958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D954u;
            // 0x23d958: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d908;
        }
    }
    ctx->pc = 0x23D95Cu;
label_23d95c:
    // 0x23d95c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23d95cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23d960:
    // 0x23d960: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23d960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23d964:
    // 0x23d964: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23d964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23d968:
    // 0x23d968: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x23d968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23d96c:
    // 0x23d96c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x23d96cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23d970:
    // 0x23d970: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x23d970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23d974:
    // 0x23d974: 0x3e00008  jr          $ra
label_23d978:
    if (ctx->pc == 0x23D978u) {
        ctx->pc = 0x23D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D974u;
        // 0x23d978: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D97Cu;
        goto label_fallthrough_0x23d974;
    }
    ctx->pc = 0x23D974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D974u;
        // 0x23d978: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23d974:
    ctx->pc = 0x23D97Cu;
}
