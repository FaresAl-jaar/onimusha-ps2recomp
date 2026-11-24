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

// Function: sub_003D4670
// Address: 0x3d4670 - 0x3d4934
void sub_003D4670_0x3d4670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4670_0x3d4670");
#endif

    switch (ctx->pc) {
        case 0x3d46ccu: goto label_3d46cc;
        case 0x3d46f4u: goto label_3d46f4;
        case 0x3d4744u: goto label_3d4744;
        case 0x3d4790u: goto label_3d4790;
        case 0x3d47e0u: goto label_3d47e0;
        case 0x3d47f0u: goto label_3d47f0;
        case 0x3d47fcu: goto label_3d47fc;
        case 0x3d4804u: goto label_3d4804;
        case 0x3d488cu: goto label_3d488c;
        case 0x3d48ecu: goto label_3d48ec;
        case 0x3d48f8u: goto label_3d48f8;
        default: break;
    }

    ctx->pc = 0x3d4670u;

    // 0x3d4670: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3d4670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3d4674: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3d4674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3d4678: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3d4678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3d467c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3d467cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3d4680: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3d4680u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4684: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3d4684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3d4688: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3d4688u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d468c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3d468cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3d4690: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3d4690u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4694: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d4694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3d4698: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3d4698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d469c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d469cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3d46a0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3d46a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d46a4: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d46a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3d46a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d46a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3d46ac: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3d46acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d46b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d46b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d46b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d46b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d46b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d46b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d46bc: 0x24070580  addiu       $a3, $zero, 0x580
    ctx->pc = 0x3d46bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
    // 0x3d46c0: 0x25084600  addiu       $t0, $t0, 0x4600
    ctx->pc = 0x3d46c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17920));
    // 0x3d46c4: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3D46C4u;
    SET_GPR_U32(ctx, 31, 0x3D46CCu);
    ctx->pc = 0x3D46C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D46C4u;
    // 0x3d46c8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3D46C4u, 0x3D46CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D46CCu;
label_3d46cc:
    // 0x3d46cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d46ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d46d0: 0x1200008b  beqz        $s0, . + 4 + (0x8B << 2)
    ctx->pc = 0x3D46D0u;
    {
        const bool branch_taken_0x3d46d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D46D0u;
        // 0x3d46d4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d46d0) {
            ctx->pc = 0x3D4900u;
            goto label_3d4900;
        }
    }
    ctx->pc = 0x3D46D8u;
    // 0x3d46d8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3d46d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d46dc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3d46dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d46e0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3d46e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d46e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d46e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d46e8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3d46e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3d46ec: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3D46ECu;
    SET_GPR_U32(ctx, 31, 0x3D46F4u);
    ctx->pc = 0x3D46F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D46ECu;
    // 0x3d46f0: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3D46ECu, 0x3D46F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D46F4u;
label_3d46f4:
    // 0x3d46f4: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3d46f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3d46f8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3d46f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3d46fc: 0x298c0  sll         $s3, $v0, 3
    ctx->pc = 0x3d46fcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3d4700: 0x24633290  addiu       $v1, $v1, 0x3290
    ctx->pc = 0x3d4700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12944));
    // 0x3d4704: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d4704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3d4708: 0x739021  addu        $s2, $v1, $s3
    ctx->pc = 0x3d4708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3d470c: 0x24423292  addiu       $v0, $v0, 0x3292
    ctx->pc = 0x3d470cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12946));
    // 0x3d4710: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x3d4710u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d4714: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3d4714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3d4718: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d4718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3d471c: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x3d471cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d4720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4724: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x3d4724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3d4728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d4728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d472c: 0xa6050526  sh          $a1, 0x526($s0)
    ctx->pc = 0x3d472cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 5));
    // 0x3d4730: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3d4730u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d4734: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3d4734u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d4738: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3d4738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d473c: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3D473Cu;
    SET_GPR_U32(ctx, 31, 0x3D4744u);
    ctx->pc = 0x3D4740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D473Cu;
    // 0x3d4740: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3D473Cu, 0x3D4744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4744u;
label_3d4744:
    // 0x3d4744: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x3d4744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x3d4748: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d4748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d474c: 0xae020564  sw          $v0, 0x564($s0)
    ctx->pc = 0x3d474cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
    // 0x3d4750: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3d4750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3d4754: 0xa2160568  sb          $s6, 0x568($s0)
    ctx->pc = 0x3d4754u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1384), (uint8_t)GPR_U32(ctx, 22));
    // 0x3d4758: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3d4758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3d475c: 0xa2110569  sb          $s1, 0x569($s0)
    ctx->pc = 0x3d475cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1385), (uint8_t)GPR_U32(ctx, 17));
    // 0x3d4760: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3d4760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3d4764: 0x78233270  lq          $v1, 0x3270($at)
    ctx->pc = 0x3d4764u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x683270u));
    // 0x3d4768: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x3d4768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3d476c: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3d476cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3d4770: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3d4770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x3d4774: 0x78223260  lq          $v0, 0x3260($at)
    ctx->pc = 0x3d4774u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x683260u));
    // 0x3d4778: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3d4778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3d477c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3d477cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x3d4780: 0xc4203268  lwc1        $f0, 0x3268($at)
    ctx->pc = 0x3d4780u;
    { uint32_t bits = FAST_READ32(0x683268u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d4784: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x3d4784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x3d4788: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3D4788u;
    SET_GPR_U32(ctx, 31, 0x3D4790u);
    ctx->pc = 0x3D478Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4788u;
    // 0x3d478c: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3D4788u, 0x3D4790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4790u;
label_3d4790:
    // 0x3d4790: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4790u;
    {
        const bool branch_taken_0x3d4790 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x3D4794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4790u;
        // 0x3d4794: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4790) {
            ctx->pc = 0x3D47A4u;
            goto label_3d47a4;
        }
    }
    ctx->pc = 0x3D4798u;
    // 0x3d4798: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x3d4798u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d479c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D479Cu;
    {
        const bool branch_taken_0x3d479c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D47A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D479Cu;
        // 0x3d47a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d479c) {
            ctx->pc = 0x3D47BCu;
            goto label_3d47bc;
        }
    }
    ctx->pc = 0x3D47A4u;
label_3d47a4:
    // 0x3d47a4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x3d47a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x3d47a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d47a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d47ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d47acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d47b0: 0x0  nop
    ctx->pc = 0x3d47b0u;
    // NOP
    // 0x3d47b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3d47b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3d47b8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3d47b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3d47bc:
    // 0x3d47bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3d47bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3d47c0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3d47c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3d47c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d47c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d47c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d47c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d47cc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3d47ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3d47d0: 0x0  nop
    ctx->pc = 0x3d47d0u;
    // NOP
    // 0x3d47d4: 0x0  nop
    ctx->pc = 0x3d47d4u;
    // NOP
    // 0x3d47d8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3D47D8u;
    SET_GPR_U32(ctx, 31, 0x3D47E0u);
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3D47D8u, 0x3D47E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D47E0u;
label_3d47e0:
    // 0x3d47e0: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x3d47e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x3d47e4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3d47e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3d47e8: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3D47E8u;
    SET_GPR_U32(ctx, 31, 0x3D47F0u);
    ctx->pc = 0x3D47ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D47E8u;
    // 0x3d47ec: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3D47E8u, 0x3D47F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D47F0u;
label_3d47f0:
    // 0x3d47f0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3d47f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3d47f4: 0xc076664  jal         func_1D9990
    ctx->pc = 0x3D47F4u;
    SET_GPR_U32(ctx, 31, 0x3D47FCu);
    ctx->pc = 0x3D47F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D47F4u;
    // 0x3d47f8: 0x26050550  addiu       $a1, $s0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x3D47F4u, 0x3D47FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D47FCu;
label_3d47fc:
    // 0x3d47fc: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x3D47FCu;
    SET_GPR_U32(ctx, 31, 0x3D4804u);
    ctx->pc = 0x3D4800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D47FCu;
    // 0x3d4800: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x3D47FCu, 0x3D4804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4804u;
label_3d4804:
    // 0x3d4804: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x3d4804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x3d4808: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x3d4808u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d480c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3d480cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3d4810: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x3d4810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x3d4814: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d4814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d4818: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d4818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3d481c: 0x24423294  addiu       $v0, $v0, 0x3294
    ctx->pc = 0x3d481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12948));
    // 0x3d4820: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x3d4820u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3d4824: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x3d4824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3d4828: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3d4828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3d482c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3d482cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3d4830: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3d4830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3d4834: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3d4834u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d4838: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3d4838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3d483c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d483cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3d4840: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x3d4840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x3d4844: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3d4844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x3d4848: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x3d4848u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x3d484c: 0xe601056c  swc1        $f1, 0x56C($s0)
    ctx->pc = 0x3d484cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1388), bits); }
    // 0x3d4850: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d4850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d4854: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x3d4854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3d4858: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d4858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3d485c: 0x46032042  mul.s       $f1, $f4, $f3
    ctx->pc = 0x3d485cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3d4860: 0xe6010570  swc1        $f1, 0x570($s0)
    ctx->pc = 0x3d4860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1392), bits); }
    // 0x3d4864: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x3d4864u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d4868: 0x46000387  neg.s       $f14, $f0
    ctx->pc = 0x3d4868u;
    ctx->f[14] = FPU_NEG_S(ctx->f[0]);
    // 0x3d486c: 0xc6000570  lwc1        $f0, 0x570($s0)
    ctx->pc = 0x3d486cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d4870: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3d4870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3d4874: 0xc60d056c  lwc1        $f13, 0x56C($s0)
    ctx->pc = 0x3d4874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3d4878: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d4878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d487c: 0x0  nop
    ctx->pc = 0x3d487cu;
    // NOP
    // 0x3d4880: 0x46001302  mul.s       $f12, $f2, $f0
    ctx->pc = 0x3d4880u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3d4884: 0xc076500  jal         func_1D9400
    ctx->pc = 0x3D4884u;
    SET_GPR_U32(ctx, 31, 0x3D488Cu);
    ctx->pc = 0x3D4888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4884u;
    // 0x3d4888: 0x46800d20  cvt.s.w     $f20, $f1 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9400u, 0x3D4884u, 0x3D488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D488Cu;
label_3d488c:
    // 0x3d488c: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x3d488cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d4890: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x3d4890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d4894: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x3d4894u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d4898: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x3D4898u;
    {
        const bool branch_taken_0x3d4898 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4898u;
        // 0x3d489c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4898) {
            ctx->pc = 0x3D48B8u;
            goto label_3d48b8;
        }
    }
    ctx->pc = 0x3D48A0u;
    // 0x3d48a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d48a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d48a4: 0x0  nop
    ctx->pc = 0x3d48a4u;
    // NOP
    // 0x3d48a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d48a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3d48ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D48ACu;
    {
        const bool branch_taken_0x3d48ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D48B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D48ACu;
        // 0x3d48b0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d48ac) {
            ctx->pc = 0x3D48D0u;
            goto label_3d48d0;
        }
    }
    ctx->pc = 0x3D48B4u;
    // 0x3d48b4: 0x0  nop
    ctx->pc = 0x3d48b4u;
    // NOP
label_3d48b8:
    // 0x3d48b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d48b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d48bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d48bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d48c0: 0x0  nop
    ctx->pc = 0x3d48c0u;
    // NOP
    // 0x3d48c4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3d48c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3d48c8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x3d48c8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3d48cc: 0x0  nop
    ctx->pc = 0x3d48ccu;
    // NOP
label_3d48d0:
    // 0x3d48d0: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3d48d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3d48d4: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d48d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3d48d8: 0x26050550  addiu       $a1, $s0, 0x550
    ctx->pc = 0x3d48d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x3d48dc: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x3d48dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3d48e0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3d48e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3d48e4: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3D48E4u;
    SET_GPR_U32(ctx, 31, 0x3D48ECu);
    ctx->pc = 0x3D48E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D48E4u;
    // 0x3d48e8: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3D48E4u, 0x3D48ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D48ECu;
label_3d48ec:
    // 0x3d48ec: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3d48ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3d48f0: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3D48F0u;
    SET_GPR_U32(ctx, 31, 0x3D48F8u);
    ctx->pc = 0x3D48F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D48F0u;
    // 0x3d48f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3D48F0u, 0x3D48F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D48F8u;
label_3d48f8:
    // 0x3d48f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D48F8u;
    {
        const bool branch_taken_0x3d48f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D48FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D48F8u;
        // 0x3d48fc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d48f8) {
            ctx->pc = 0x3D4908u;
            goto label_3d4908;
        }
    }
    ctx->pc = 0x3D4900u;
label_3d4900:
    // 0x3d4900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d4900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4904: 0x0  nop
    ctx->pc = 0x3d4904u;
    // NOP
label_3d4908:
    // 0x3d4908: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3d4908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d490c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3d490cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d4910: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3d4910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3d4914: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3d4914u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d4918: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3d4918u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d491c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3d491cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d4920: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d4920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d4924: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d4924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d4928: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d4928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d492c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D492Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D492Cu;
        // 0x3d4930: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D492Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4934u;
}
