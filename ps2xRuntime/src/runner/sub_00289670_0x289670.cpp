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

// Function: sub_00289670
// Address: 0x289670 - 0x289894
void sub_00289670_0x289670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289670_0x289670");
#endif

    switch (ctx->pc) {
        case 0x289724u: goto label_289724;
        case 0x28973cu: goto label_28973c;
        case 0x289798u: goto label_289798;
        case 0x2897b8u: goto label_2897b8;
        case 0x2897d0u: goto label_2897d0;
        case 0x2897f4u: goto label_2897f4;
        case 0x289848u: goto label_289848;
        case 0x289860u: goto label_289860;
        default: break;
    }

    ctx->pc = 0x289670u;

    // 0x289670: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x289670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x289674: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x289674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x289678: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x289678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28967c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28967cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x289680: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x289680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x289684: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x289684u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x289688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x289688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28968c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28968cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x289690: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x289690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289694: 0x90870002  lbu         $a3, 0x2($a0)
    ctx->pc = 0x289694u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x289698: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x289698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28969c: 0x8c8806ac  lw          $t0, 0x6AC($a0)
    ctx->pc = 0x28969cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x2896a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2896a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2896a4: 0x24c60b98  addiu       $a2, $a2, 0xB98
    ctx->pc = 0x2896a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2968));
    // 0x2896a8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2896a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2896ac: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2896acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2896b0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x2896b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2896b4: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x2896b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x2896b8: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x2896b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2896bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2896bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2896c0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2896c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2896c4: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x2896c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2896c8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2896c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2896cc: 0x0  nop
    ctx->pc = 0x2896ccu;
    // NOP
    // 0x2896d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2896d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2896d4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2896d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2896d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2896d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2896dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2896dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2896e0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2896e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2896e4: 0x0  nop
    ctx->pc = 0x2896e4u;
    // NOP
    // 0x2896e8: 0x4843c  dsll32      $s0, $a0, 16
    ctx->pc = 0x2896e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2896ec: 0x14600064  bnez        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x2896ECu;
    {
        const bool branch_taken_0x2896ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2896F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2896ECu;
        // 0x2896f0: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2896ec) {
            ctx->pc = 0x289880u;
            goto label_289880;
        }
    }
    ctx->pc = 0x2896F4u;
    // 0x2896f4: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x2896f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2896f8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2896f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2896fc: 0x14600060  bnez        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x2896FCu;
    {
        const bool branch_taken_0x2896fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2896FCu;
        // 0x289700: 0x31030040  andi        $v1, $t0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2896fc) {
            ctx->pc = 0x289880u;
            goto label_289880;
        }
    }
    ctx->pc = 0x289704u;
    // 0x289704: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x289704u;
    {
        const bool branch_taken_0x289704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x289704) {
            ctx->pc = 0x289880u;
            goto label_289880;
        }
    }
    ctx->pc = 0x28970Cu;
    // 0x28970c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28970Cu;
    {
        const bool branch_taken_0x28970c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28970c) {
            ctx->pc = 0x28972Cu;
            goto label_28972c;
        }
    }
    ctx->pc = 0x289714u;
    // 0x289714: 0x8e2507c4  lw          $a1, 0x7C4($s1)
    ctx->pc = 0x289714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1988)));
    // 0x289718: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x289718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x28971c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x28971Cu;
    SET_GPR_U32(ctx, 31, 0x289724u);
    ctx->pc = 0x289720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28971Cu;
    // 0x289720: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x28971Cu, 0x289724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289724u;
label_289724:
    // 0x289724: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x289724u;
    {
        const bool branch_taken_0x289724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289724) {
            ctx->pc = 0x28973Cu;
            goto label_28973c;
        }
    }
    ctx->pc = 0x28972Cu;
label_28972c:
    // 0x28972c: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x28972cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x289730: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x289730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x289734: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x289734u;
    SET_GPR_U32(ctx, 31, 0x28973Cu);
    ctx->pc = 0x289738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289734u;
    // 0x289738: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x289734u, 0x28973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28973Cu;
label_28973c:
    // 0x28973c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x28973Cu;
    {
        const bool branch_taken_0x28973c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28973c) {
            ctx->pc = 0x289880u;
            goto label_289880;
        }
    }
    ctx->pc = 0x289744u;
    // 0x289744: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x289744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x289748: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x289748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x28974c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x28974cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x289750: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x289750u;
    {
        const bool branch_taken_0x289750 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x289754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289750u;
        // 0x289754: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289750) {
            ctx->pc = 0x289760u;
            goto label_289760;
        }
    }
    ctx->pc = 0x289758u;
    // 0x289758: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x289758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28975c: 0x0  nop
    ctx->pc = 0x28975cu;
    // NOP
label_289760:
    // 0x289760: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x289760u;
    {
        const bool branch_taken_0x289760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x289760) {
            ctx->pc = 0x2897A0u;
            goto label_2897a0;
        }
    }
    ctx->pc = 0x289768u;
    // 0x289768: 0x90430733  lbu         $v1, 0x733($v0)
    ctx->pc = 0x289768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1843)));
    // 0x28976c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x28976cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x289770: 0x8c46004c  lw          $a2, 0x4C($v0)
    ctx->pc = 0x289770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x289774: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x289774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x289778: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x289778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28977c: 0x90a50730  lbu         $a1, 0x730($a1)
    ctx->pc = 0x28977cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1840)));
    // 0x289780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x289780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x289784: 0x8cc30094  lw          $v1, 0x94($a2)
    ctx->pc = 0x289784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x289788: 0x24460700  addiu       $a2, $v0, 0x700
    ctx->pc = 0x289788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x28978c: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x28978cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x289790: 0xc041442  jal         func_105108
    ctx->pc = 0x289790u;
    SET_GPR_U32(ctx, 31, 0x289798u);
    ctx->pc = 0x289794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289790u;
    // 0x289794: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x289790u, 0x289798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289798u;
label_289798:
    // 0x289798: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x289798u;
    {
        const bool branch_taken_0x289798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289798) {
            ctx->pc = 0x2897A8u;
            goto label_2897a8;
        }
    }
    ctx->pc = 0x2897A0u;
label_2897a0:
    // 0x2897a0: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x2897a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2897a4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2897a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2897a8:
    // 0x2897a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2897a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2897ac: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2897acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2897b0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2897B0u;
    SET_GPR_U32(ctx, 31, 0x2897B8u);
    ctx->pc = 0x2897B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2897B0u;
    // 0x2897b4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2897B0u, 0x2897B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2897B8u;
label_2897b8:
    // 0x2897b8: 0x9223000a  lbu         $v1, 0xA($s1)
    ctx->pc = 0x2897b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2897bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2897bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2897c0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2897C0u;
    {
        const bool branch_taken_0x2897c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2897C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2897C0u;
        // 0x2897c4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2897c0) {
            ctx->pc = 0x2897E8u;
            goto label_2897e8;
        }
    }
    ctx->pc = 0x2897C8u;
    // 0x2897c8: 0xc0968fc  jal         func_25A3F0
    ctx->pc = 0x2897C8u;
    SET_GPR_U32(ctx, 31, 0x2897D0u);
    ctx->pc = 0x25A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3F0u, 0x2897C8u, 0x2897D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2897D0u;
label_2897d0:
    // 0x2897d0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2897d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2897d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2897d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2897d8: 0x0  nop
    ctx->pc = 0x2897d8u;
    // NOP
    // 0x2897dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2897dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2897e0: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x2897E0u;
    {
        const bool branch_taken_0x2897e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2897e0) {
            ctx->pc = 0x289880u;
            goto label_289880;
        }
    }
    ctx->pc = 0x2897E8u;
label_2897e8:
    // 0x2897e8: 0xc7ad0048  lwc1        $f13, 0x48($sp)
    ctx->pc = 0x2897e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2897ec: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x2897ECu;
    SET_GPR_U32(ctx, 31, 0x2897F4u);
    ctx->pc = 0x2897F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2897ECu;
    // 0x2897f0: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x2897ECu, 0x2897F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2897F4u;
label_2897f4:
    // 0x2897f4: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2897f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x2897f8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2897f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2897fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2897fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x289800: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x289800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x289804: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289808: 0x0  nop
    ctx->pc = 0x289808u;
    // NOP
    // 0x28980c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x28980cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x289810: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x289810u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x289814: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x289814u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x289818: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x289818u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28981c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x28981cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x289820: 0x0  nop
    ctx->pc = 0x289820u;
    // NOP
    // 0x289824: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x289824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x289828: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x289828u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x28982c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x28982cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x289830: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x289830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x289834: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x289834u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x289838: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x289838u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28983c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x28983cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x289840: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x289840u;
    SET_GPR_U32(ctx, 31, 0x289848u);
    ctx->pc = 0x289844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289840u;
    // 0x289844: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x289840u, 0x289848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289848u;
label_289848:
    // 0x289848: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x289848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
    // 0x28984c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x28984cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x289850: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x289850u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x289854: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x289854u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x289858: 0xc09696c  jal         func_25A5B0
    ctx->pc = 0x289858u;
    SET_GPR_U32(ctx, 31, 0x289860u);
    ctx->pc = 0x28985Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289858u;
    // 0x28985c: 0x52023  negu        $a0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5B0u, 0x289858u, 0x289860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289860u;
label_289860:
    // 0x289860: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x289860u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x289864: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x289864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x289868: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x289868u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x28986c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28986cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x289870: 0xa62300c2  sh          $v1, 0xC2($s1)
    ctx->pc = 0x289870u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x289874: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x289874u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x289878: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x289878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x28987c: 0xa62300c2  sh          $v1, 0xC2($s1)
    ctx->pc = 0x28987cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 3));
label_289880:
    // 0x289880: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x289880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x289884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x289888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28988c: 0x3e00008  jr          $ra
    ctx->pc = 0x28988Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28988Cu;
        // 0x289890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28988Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289894u;
}
