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

// Function: sub_002980E0
// Address: 0x2980e0 - 0x2982d8
void sub_002980E0_0x2980e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002980E0_0x2980e0");
#endif

    switch (ctx->pc) {
        case 0x2980e0u: goto label_2980e0;
        case 0x2980e4u: goto label_2980e4;
        case 0x2980e8u: goto label_2980e8;
        case 0x2980ecu: goto label_2980ec;
        case 0x2980f0u: goto label_2980f0;
        case 0x2980f4u: goto label_2980f4;
        case 0x2980f8u: goto label_2980f8;
        case 0x2980fcu: goto label_2980fc;
        case 0x298100u: goto label_298100;
        case 0x298104u: goto label_298104;
        case 0x298108u: goto label_298108;
        case 0x29810cu: goto label_29810c;
        case 0x298110u: goto label_298110;
        case 0x298114u: goto label_298114;
        case 0x298118u: goto label_298118;
        case 0x29811cu: goto label_29811c;
        case 0x298120u: goto label_298120;
        case 0x298124u: goto label_298124;
        case 0x298128u: goto label_298128;
        case 0x29812cu: goto label_29812c;
        case 0x298130u: goto label_298130;
        case 0x298134u: goto label_298134;
        case 0x298138u: goto label_298138;
        case 0x29813cu: goto label_29813c;
        case 0x298140u: goto label_298140;
        case 0x298144u: goto label_298144;
        case 0x298148u: goto label_298148;
        case 0x29814cu: goto label_29814c;
        case 0x298150u: goto label_298150;
        case 0x298154u: goto label_298154;
        case 0x298158u: goto label_298158;
        case 0x29815cu: goto label_29815c;
        case 0x298160u: goto label_298160;
        case 0x298164u: goto label_298164;
        case 0x298168u: goto label_298168;
        case 0x29816cu: goto label_29816c;
        case 0x298170u: goto label_298170;
        case 0x298174u: goto label_298174;
        case 0x298178u: goto label_298178;
        case 0x29817cu: goto label_29817c;
        case 0x298180u: goto label_298180;
        case 0x298184u: goto label_298184;
        case 0x298188u: goto label_298188;
        case 0x29818cu: goto label_29818c;
        case 0x298190u: goto label_298190;
        case 0x298194u: goto label_298194;
        case 0x298198u: goto label_298198;
        case 0x29819cu: goto label_29819c;
        case 0x2981a0u: goto label_2981a0;
        case 0x2981a4u: goto label_2981a4;
        case 0x2981a8u: goto label_2981a8;
        case 0x2981acu: goto label_2981ac;
        case 0x2981b0u: goto label_2981b0;
        case 0x2981b4u: goto label_2981b4;
        case 0x2981b8u: goto label_2981b8;
        case 0x2981bcu: goto label_2981bc;
        case 0x2981c0u: goto label_2981c0;
        case 0x2981c4u: goto label_2981c4;
        case 0x2981c8u: goto label_2981c8;
        case 0x2981ccu: goto label_2981cc;
        case 0x2981d0u: goto label_2981d0;
        case 0x2981d4u: goto label_2981d4;
        case 0x2981d8u: goto label_2981d8;
        case 0x2981dcu: goto label_2981dc;
        case 0x2981e0u: goto label_2981e0;
        case 0x2981e4u: goto label_2981e4;
        case 0x2981e8u: goto label_2981e8;
        case 0x2981ecu: goto label_2981ec;
        case 0x2981f0u: goto label_2981f0;
        case 0x2981f4u: goto label_2981f4;
        case 0x2981f8u: goto label_2981f8;
        case 0x2981fcu: goto label_2981fc;
        case 0x298200u: goto label_298200;
        case 0x298204u: goto label_298204;
        case 0x298208u: goto label_298208;
        case 0x29820cu: goto label_29820c;
        case 0x298210u: goto label_298210;
        case 0x298214u: goto label_298214;
        case 0x298218u: goto label_298218;
        case 0x29821cu: goto label_29821c;
        case 0x298220u: goto label_298220;
        case 0x298224u: goto label_298224;
        case 0x298228u: goto label_298228;
        case 0x29822cu: goto label_29822c;
        case 0x298230u: goto label_298230;
        case 0x298234u: goto label_298234;
        case 0x298238u: goto label_298238;
        case 0x29823cu: goto label_29823c;
        case 0x298240u: goto label_298240;
        case 0x298244u: goto label_298244;
        case 0x298248u: goto label_298248;
        case 0x29824cu: goto label_29824c;
        case 0x298250u: goto label_298250;
        case 0x298254u: goto label_298254;
        case 0x298258u: goto label_298258;
        case 0x29825cu: goto label_29825c;
        case 0x298260u: goto label_298260;
        case 0x298264u: goto label_298264;
        case 0x298268u: goto label_298268;
        case 0x29826cu: goto label_29826c;
        case 0x298270u: goto label_298270;
        case 0x298274u: goto label_298274;
        case 0x298278u: goto label_298278;
        case 0x29827cu: goto label_29827c;
        case 0x298280u: goto label_298280;
        case 0x298284u: goto label_298284;
        case 0x298288u: goto label_298288;
        case 0x29828cu: goto label_29828c;
        case 0x298290u: goto label_298290;
        case 0x298294u: goto label_298294;
        case 0x298298u: goto label_298298;
        case 0x29829cu: goto label_29829c;
        case 0x2982a0u: goto label_2982a0;
        case 0x2982a4u: goto label_2982a4;
        case 0x2982a8u: goto label_2982a8;
        case 0x2982acu: goto label_2982ac;
        case 0x2982b0u: goto label_2982b0;
        case 0x2982b4u: goto label_2982b4;
        case 0x2982b8u: goto label_2982b8;
        case 0x2982bcu: goto label_2982bc;
        case 0x2982c0u: goto label_2982c0;
        case 0x2982c4u: goto label_2982c4;
        case 0x2982c8u: goto label_2982c8;
        case 0x2982ccu: goto label_2982cc;
        case 0x2982d0u: goto label_2982d0;
        case 0x2982d4u: goto label_2982d4;
        default: break;
    }

    ctx->pc = 0x2980e0u;

label_2980e0:
    // 0x2980e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2980e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2980e4:
    // 0x2980e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2980e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2980e8:
    // 0x2980e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2980e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2980ec:
    // 0x2980ec: 0xc0a6de4  jal         func_29B790
label_2980f0:
    if (ctx->pc == 0x2980F0u) {
        ctx->pc = 0x2980F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2980ECu;
        // 0x2980f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2980F4u;
        goto label_2980f4;
    }
    ctx->pc = 0x2980ECu;
    SET_GPR_U32(ctx, 31, 0x2980F4u);
    ctx->pc = 0x2980F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2980ECu;
    // 0x2980f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B790u, 0x2980ECu, 0x2980F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980F4u;
label_2980f4:
    // 0x2980f4: 0x9204000a  lbu         $a0, 0xA($s0)
    ctx->pc = 0x2980f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_2980f8:
    // 0x2980f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2980f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2980fc:
    // 0x2980fc: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_298100:
    if (ctx->pc == 0x298100u) {
        ctx->pc = 0x298104u;
        goto label_298104;
    }
    ctx->pc = 0x2980FCu;
    {
        const bool branch_taken_0x2980fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2980fc) {
            ctx->pc = 0x298130u;
            goto label_298130;
        }
    }
    ctx->pc = 0x298104u;
label_298104:
    // 0x298104: 0x92030162  lbu         $v1, 0x162($s0)
    ctx->pc = 0x298104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 354)));
label_298108:
    // 0x298108: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_29810c:
    if (ctx->pc == 0x29810Cu) {
        ctx->pc = 0x298110u;
        goto label_298110;
    }
    ctx->pc = 0x298108u;
    {
        const bool branch_taken_0x298108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298108) {
            ctx->pc = 0x298130u;
            goto label_298130;
        }
    }
    ctx->pc = 0x298110u;
label_298110:
    // 0x298110: 0x92030160  lbu         $v1, 0x160($s0)
    ctx->pc = 0x298110u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 352)));
label_298114:
    // 0x298114: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_298118:
    if (ctx->pc == 0x298118u) {
        ctx->pc = 0x29811Cu;
        goto label_29811c;
    }
    ctx->pc = 0x298114u;
    {
        const bool branch_taken_0x298114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x298114) {
            ctx->pc = 0x298130u;
            goto label_298130;
        }
    }
    ctx->pc = 0x29811Cu;
label_29811c:
    // 0x29811c: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x29811cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_298120:
    // 0x298120: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x298120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_298124:
    // 0x298124: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x298124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_298128:
    // 0x298128: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x298128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
label_29812c:
    // 0x29812c: 0x0  nop
    ctx->pc = 0x29812cu;
    // NOP
label_298130:
    // 0x298130: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x298130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_298134:
    // 0x298134: 0x8c23ced4  lw          $v1, -0x312C($at)
    ctx->pc = 0x298134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954708)));
label_298138:
    // 0x298138: 0x3c048ff8  lui         $a0, 0x8FF8
    ctx->pc = 0x298138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36856 << 16));
label_29813c:
    // 0x29813c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x29813cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_298140:
    // 0x298140: 0x10640061  beq         $v1, $a0, . + 4 + (0x61 << 2)
label_298144:
    if (ctx->pc == 0x298144u) {
        ctx->pc = 0x298148u;
        goto label_298148;
    }
    ctx->pc = 0x298140u;
    {
        const bool branch_taken_0x298140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x298140) {
            ctx->pc = 0x2982C8u;
            goto label_2982c8;
        }
    }
    ctx->pc = 0x298148u;
label_298148:
    // 0x298148: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x298148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_29814c:
    // 0x29814c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29814cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_298150:
    // 0x298150: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_298154:
    if (ctx->pc == 0x298154u) {
        ctx->pc = 0x298158u;
        goto label_298158;
    }
    ctx->pc = 0x298150u;
    {
        const bool branch_taken_0x298150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298150) {
            ctx->pc = 0x2981C8u;
            goto label_2981c8;
        }
    }
    ctx->pc = 0x298158u;
label_298158:
    // 0x298158: 0xc0b2cd0  jal         func_2CB340
label_29815c:
    if (ctx->pc == 0x29815Cu) {
        ctx->pc = 0x298160u;
        goto label_298160;
    }
    ctx->pc = 0x298158u;
    SET_GPR_U32(ctx, 31, 0x298160u);
    ctx->pc = 0x2CB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB340u, 0x298158u, 0x298160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298160u;
label_298160:
    // 0x298160: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_298164:
    if (ctx->pc == 0x298164u) {
        ctx->pc = 0x298168u;
        goto label_298168;
    }
    ctx->pc = 0x298160u;
    {
        const bool branch_taken_0x298160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298160) {
            ctx->pc = 0x298178u;
            goto label_298178;
        }
    }
    ctx->pc = 0x298168u;
label_298168:
    // 0x298168: 0x920407d6  lbu         $a0, 0x7D6($s0)
    ctx->pc = 0x298168u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2006)));
label_29816c:
    // 0x29816c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29816cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_298170:
    // 0x298170: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
label_298174:
    if (ctx->pc == 0x298174u) {
        ctx->pc = 0x298178u;
        goto label_298178;
    }
    ctx->pc = 0x298170u;
    {
        const bool branch_taken_0x298170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x298170) {
            ctx->pc = 0x2981C0u;
            goto label_2981c0;
        }
    }
    ctx->pc = 0x298178u;
label_298178:
    // 0x298178: 0xc09f918  jal         func_27E460
label_29817c:
    if (ctx->pc == 0x29817Cu) {
        ctx->pc = 0x29817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298178u;
        // 0x29817c: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298180u;
        goto label_298180;
    }
    ctx->pc = 0x298178u;
    SET_GPR_U32(ctx, 31, 0x298180u);
    ctx->pc = 0x29817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298178u;
    // 0x29817c: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E460u, 0x298178u, 0x298180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298180u;
label_298180:
    // 0x298180: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x298180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_298184:
    // 0x298184: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_298188:
    if (ctx->pc == 0x298188u) {
        ctx->pc = 0x29818Cu;
        goto label_29818c;
    }
    ctx->pc = 0x298184u;
    {
        const bool branch_taken_0x298184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x298184) {
            ctx->pc = 0x2981C0u;
            goto label_2981c0;
        }
    }
    ctx->pc = 0x29818Cu;
label_29818c:
    // 0x29818c: 0xc06039c  jal         func_180E70
label_298190:
    if (ctx->pc == 0x298190u) {
        ctx->pc = 0x298194u;
        goto label_298194;
    }
    ctx->pc = 0x29818Cu;
    SET_GPR_U32(ctx, 31, 0x298194u);
    ctx->pc = 0x180E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E70u, 0x29818Cu, 0x298194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298194u;
label_298194:
    // 0x298194: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x298194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_298198:
    // 0x298198: 0x260404a0  addiu       $a0, $s0, 0x4A0
    ctx->pc = 0x298198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1184));
label_29819c:
    // 0x29819c: 0xc09e6c4  jal         func_279B10
label_2981a0:
    if (ctx->pc == 0x2981A0u) {
        ctx->pc = 0x2981A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29819Cu;
        // 0x2981a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2981A4u;
        goto label_2981a4;
    }
    ctx->pc = 0x29819Cu;
    SET_GPR_U32(ctx, 31, 0x2981A4u);
    ctx->pc = 0x2981A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29819Cu;
    // 0x2981a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B10u, 0x29819Cu, 0x2981A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2981A4u;
label_2981a4:
    // 0x2981a4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2981a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2981a8:
    // 0x2981a8: 0xc061bc0  jal         func_186F00
label_2981ac:
    if (ctx->pc == 0x2981ACu) {
        ctx->pc = 0x2981ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981A8u;
        // 0x2981ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2981B0u;
        goto label_2981b0;
    }
    ctx->pc = 0x2981A8u;
    SET_GPR_U32(ctx, 31, 0x2981B0u);
    ctx->pc = 0x2981ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2981A8u;
    // 0x2981ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x2981A8u, 0x2981B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2981B0u;
label_2981b0:
    // 0x2981b0: 0x260404a0  addiu       $a0, $s0, 0x4A0
    ctx->pc = 0x2981b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1184));
label_2981b4:
    // 0x2981b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2981b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2981b8:
    // 0x2981b8: 0xc09e648  jal         func_279920
label_2981bc:
    if (ctx->pc == 0x2981BCu) {
        ctx->pc = 0x2981BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981B8u;
        // 0x2981bc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2981C0u;
        goto label_2981c0;
    }
    ctx->pc = 0x2981B8u;
    SET_GPR_U32(ctx, 31, 0x2981C0u);
    ctx->pc = 0x2981BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2981B8u;
    // 0x2981bc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279920u, 0x2981B8u, 0x2981C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2981C0u;
label_2981c0:
    // 0x2981c0: 0x10000041  b           . + 4 + (0x41 << 2)
label_2981c4:
    if (ctx->pc == 0x2981C4u) {
        ctx->pc = 0x2981C8u;
        goto label_2981c8;
    }
    ctx->pc = 0x2981C0u;
    {
        const bool branch_taken_0x2981c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2981c0) {
            ctx->pc = 0x2982C8u;
            goto label_2982c8;
        }
    }
    ctx->pc = 0x2981C8u;
label_2981c8:
    // 0x2981c8: 0x9202065c  lbu         $v0, 0x65C($s0)
    ctx->pc = 0x2981c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
label_2981cc:
    // 0x2981cc: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x2981ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_2981d0:
    // 0x2981d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2981d4:
    if (ctx->pc == 0x2981D4u) {
        ctx->pc = 0x2981D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981D0u;
        // 0x2981d4: 0x26040650  addiu       $a0, $s0, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2981D8u;
        goto label_2981d8;
    }
    ctx->pc = 0x2981D0u;
    {
        const bool branch_taken_0x2981d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2981D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981D0u;
        // 0x2981d4: 0x26040650  addiu       $a0, $s0, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981d0) {
            ctx->pc = 0x2981E0u;
            goto label_2981e0;
        }
    }
    ctx->pc = 0x2981D8u;
label_2981d8:
    // 0x2981d8: 0xc09d490  jal         func_275240
label_2981dc:
    if (ctx->pc == 0x2981DCu) {
        ctx->pc = 0x2981DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981D8u;
        // 0x2981dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2981E0u;
        goto label_2981e0;
    }
    ctx->pc = 0x2981D8u;
    SET_GPR_U32(ctx, 31, 0x2981E0u);
    ctx->pc = 0x2981DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2981D8u;
    // 0x2981dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275240u, 0x2981D8u, 0x2981E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2981E0u;
label_2981e0:
    // 0x2981e0: 0xc09f918  jal         func_27E460
label_2981e4:
    if (ctx->pc == 0x2981E4u) {
        ctx->pc = 0x2981E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981E0u;
        // 0x2981e4: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2981E8u;
        goto label_2981e8;
    }
    ctx->pc = 0x2981E0u;
    SET_GPR_U32(ctx, 31, 0x2981E8u);
    ctx->pc = 0x2981E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2981E0u;
    // 0x2981e4: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E460u, 0x2981E0u, 0x2981E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2981E8u;
label_2981e8:
    // 0x2981e8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2981e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2981ec:
    // 0x2981ec: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_2981f0:
    if (ctx->pc == 0x2981F0u) {
        ctx->pc = 0x2981F4u;
        goto label_2981f4;
    }
    ctx->pc = 0x2981ECu;
    {
        const bool branch_taken_0x2981ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2981ec) {
            ctx->pc = 0x298228u;
            goto label_298228;
        }
    }
    ctx->pc = 0x2981F4u;
label_2981f4:
    // 0x2981f4: 0xc06039c  jal         func_180E70
label_2981f8:
    if (ctx->pc == 0x2981F8u) {
        ctx->pc = 0x2981FCu;
        goto label_2981fc;
    }
    ctx->pc = 0x2981F4u;
    SET_GPR_U32(ctx, 31, 0x2981FCu);
    ctx->pc = 0x180E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E70u, 0x2981F4u, 0x2981FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2981FCu;
label_2981fc:
    // 0x2981fc: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x2981fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_298200:
    // 0x298200: 0x260404a0  addiu       $a0, $s0, 0x4A0
    ctx->pc = 0x298200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1184));
label_298204:
    // 0x298204: 0xc09e6c4  jal         func_279B10
label_298208:
    if (ctx->pc == 0x298208u) {
        ctx->pc = 0x298208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298204u;
        // 0x298208: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29820Cu;
        goto label_29820c;
    }
    ctx->pc = 0x298204u;
    SET_GPR_U32(ctx, 31, 0x29820Cu);
    ctx->pc = 0x298208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298204u;
    // 0x298208: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B10u, 0x298204u, 0x29820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29820Cu;
label_29820c:
    // 0x29820c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x29820cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_298210:
    // 0x298210: 0xc061bc0  jal         func_186F00
label_298214:
    if (ctx->pc == 0x298214u) {
        ctx->pc = 0x298214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298210u;
        // 0x298214: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298218u;
        goto label_298218;
    }
    ctx->pc = 0x298210u;
    SET_GPR_U32(ctx, 31, 0x298218u);
    ctx->pc = 0x298214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298210u;
    // 0x298214: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x298210u, 0x298218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298218u;
label_298218:
    // 0x298218: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x298218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29821c:
    // 0x29821c: 0x260404a0  addiu       $a0, $s0, 0x4A0
    ctx->pc = 0x29821cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1184));
label_298220:
    // 0x298220: 0xc09e648  jal         func_279920
label_298224:
    if (ctx->pc == 0x298224u) {
        ctx->pc = 0x298224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298220u;
        // 0x298224: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298228u;
        goto label_298228;
    }
    ctx->pc = 0x298220u;
    SET_GPR_U32(ctx, 31, 0x298228u);
    ctx->pc = 0x298224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298220u;
    // 0x298224: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279920u, 0x298220u, 0x298228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298228u;
label_298228:
    // 0x298228: 0xc0a60d0  jal         func_298340
label_29822c:
    if (ctx->pc == 0x29822Cu) {
        ctx->pc = 0x29822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298228u;
        // 0x29822c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298230u;
        goto label_298230;
    }
    ctx->pc = 0x298228u;
    SET_GPR_U32(ctx, 31, 0x298230u);
    ctx->pc = 0x29822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298228u;
    // 0x29822c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298340u, 0x298228u, 0x298230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298230u;
label_298230:
    // 0x298230: 0xc09d4b8  jal         func_2752E0
label_298234:
    if (ctx->pc == 0x298234u) {
        ctx->pc = 0x298234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298230u;
        // 0x298234: 0x26040650  addiu       $a0, $s0, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298238u;
        goto label_298238;
    }
    ctx->pc = 0x298230u;
    SET_GPR_U32(ctx, 31, 0x298238u);
    ctx->pc = 0x298234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298230u;
    // 0x298234: 0x26040650  addiu       $a0, $s0, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2752E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2752E0u, 0x298230u, 0x298238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298238u;
label_298238:
    // 0x298238: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x298238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29823c:
    // 0x29823c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x29823cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_298240:
    // 0x298240: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x298240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_298244:
    // 0x298244: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x298244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_298248:
    // 0x298248: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29824c:
    // 0x29824c: 0x0  nop
    ctx->pc = 0x29824cu;
    // NOP
label_298250:
    // 0x298250: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x298250u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_298254:
    // 0x298254: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x298254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_298258:
    // 0x298258: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_29825c:
    if (ctx->pc == 0x29825Cu) {
        ctx->pc = 0x298260u;
        goto label_298260;
    }
    ctx->pc = 0x298258u;
    {
        const bool branch_taken_0x298258 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x298258) {
            ctx->pc = 0x298270u;
            goto label_298270;
        }
    }
    ctx->pc = 0x298260u;
label_298260:
    // 0x298260: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x298260u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_298264:
    // 0x298264: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x298264u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_298268:
    // 0x298268: 0x10000008  b           . + 4 + (0x8 << 2)
label_29826c:
    if (ctx->pc == 0x29826Cu) {
        ctx->pc = 0x29826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298268u;
        // 0x29826c: 0x8e030928  lw          $v1, 0x928($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298270u;
        goto label_298270;
    }
    ctx->pc = 0x298268u;
    {
        const bool branch_taken_0x298268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298268u;
        // 0x29826c: 0x8e030928  lw          $v1, 0x928($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298268) {
            ctx->pc = 0x29828Cu;
            goto label_29828c;
        }
    }
    ctx->pc = 0x298270u;
label_298270:
    // 0x298270: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x298270u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_298274:
    // 0x298274: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x298274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_298278:
    // 0x298278: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x298278u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_29827c:
    // 0x29827c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x29827cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_298280:
    // 0x298280: 0x0  nop
    ctx->pc = 0x298280u;
    // NOP
label_298284:
    // 0x298284: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x298284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_298288:
    // 0x298288: 0x8e030928  lw          $v1, 0x928($s0)
    ctx->pc = 0x298288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2344)));
label_29828c:
    // 0x29828c: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x29828cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_298290:
    // 0x298290: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_298294:
    if (ctx->pc == 0x298294u) {
        ctx->pc = 0x298298u;
        goto label_298298;
    }
    ctx->pc = 0x298290u;
    {
        const bool branch_taken_0x298290 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x298290) {
            ctx->pc = 0x2982A8u;
            goto label_2982a8;
        }
    }
    ctx->pc = 0x298298u;
label_298298:
    // 0x298298: 0x8e03092c  lw          $v1, 0x92C($s0)
    ctx->pc = 0x298298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2348)));
label_29829c:
    // 0x29829c: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x29829cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2982a0:
    // 0x2982a0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_2982a4:
    if (ctx->pc == 0x2982A4u) {
        ctx->pc = 0x2982A8u;
        goto label_2982a8;
    }
    ctx->pc = 0x2982A0u;
    {
        const bool branch_taken_0x2982a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2982a0) {
            ctx->pc = 0x2982C8u;
            goto label_2982c8;
        }
    }
    ctx->pc = 0x2982A8u;
label_2982a8:
    // 0x2982a8: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x2982a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2982ac:
    // 0x2982ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2982acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2982b0:
    // 0x2982b0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_2982b4:
    if (ctx->pc == 0x2982B4u) {
        ctx->pc = 0x2982B8u;
        goto label_2982b8;
    }
    ctx->pc = 0x2982B0u;
    {
        const bool branch_taken_0x2982b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2982b0) {
            ctx->pc = 0x2982C8u;
            goto label_2982c8;
        }
    }
    ctx->pc = 0x2982B8u;
label_2982b8:
    // 0x2982b8: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x2982b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_2982bc:
    // 0x2982bc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x2982bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_2982c0:
    // 0x2982c0: 0x320f809  jalr        $t9
label_2982c4:
    if (ctx->pc == 0x2982C4u) {
        ctx->pc = 0x2982C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982C0u;
        // 0x2982c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2982C8u;
        goto label_2982c8;
    }
    ctx->pc = 0x2982C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2982C8u);
        ctx->pc = 0x2982C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982C0u;
        // 0x2982c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2982C0u, 0x2982C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2982C8u;
label_2982c8:
    // 0x2982c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2982c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2982cc:
    // 0x2982cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2982ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2982d0:
    // 0x2982d0: 0x3e00008  jr          $ra
label_2982d4:
    if (ctx->pc == 0x2982D4u) {
        ctx->pc = 0x2982D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982D0u;
        // 0x2982d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2982D8u;
        goto label_fallthrough_0x2982d0;
    }
    ctx->pc = 0x2982D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2982D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982D0u;
        // 0x2982d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2982D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2982d0:
    ctx->pc = 0x2982D8u;
}
