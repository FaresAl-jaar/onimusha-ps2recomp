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

// Function: sub_001D45E0
// Address: 0x1d45e0 - 0x1d48cc
void sub_001D45E0_0x1d45e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D45E0_0x1d45e0");
#endif

    switch (ctx->pc) {
        case 0x1d4650u: goto label_1d4650;
        case 0x1d46b8u: goto label_1d46b8;
        case 0x1d46e0u: goto label_1d46e0;
        case 0x1d46f4u: goto label_1d46f4;
        case 0x1d4704u: goto label_1d4704;
        case 0x1d473cu: goto label_1d473c;
        case 0x1d4780u: goto label_1d4780;
        default: break;
    }

    ctx->pc = 0x1d45e0u;

    // 0x1d45e0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1d45e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1d45e4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1d45e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1d45e8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1d45e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1d45ec: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1d45ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1d45f0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1d45f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45f4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d45f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1d45f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d45f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1d45fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1d45fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1d4600: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1d4600u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4604: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d4604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d4608: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d4608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d460c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d460cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4610: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d4610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d4614: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d4614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d4618: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d4618u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d461c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1d461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d4620: 0xafa4012c  sw          $a0, 0x12C($sp)
    ctx->pc = 0x1d4620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 4));
    // 0x1d4624: 0xafa50128  sw          $a1, 0x128($sp)
    ctx->pc = 0x1d4624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 5));
    // 0x1d4628: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x1d4628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1d462c: 0x8fb4012c  lw          $s4, 0x12C($sp)
    ctx->pc = 0x1d462cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1d4630: 0xafa70124  sw          $a3, 0x124($sp)
    ctx->pc = 0x1d4630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 7));
    // 0x1d4634: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1d4634u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1d4638: 0xafa90120  sw          $t1, 0x120($sp)
    ctx->pc = 0x1d4638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 9));
    // 0x1d463c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1d463cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1d4640: 0xafaa011c  sw          $t2, 0x11C($sp)
    ctx->pc = 0x1d4640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 10));
    // 0x1d4644: 0xafab0118  sw          $t3, 0x118($sp)
    ctx->pc = 0x1d4644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 11));
    // 0x1d4648: 0xc0768d8  jal         func_1DA360
    ctx->pc = 0x1D4648u;
    SET_GPR_U32(ctx, 31, 0x1D4650u);
    ctx->pc = 0x1D464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4648u;
    // 0x1d464c: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA360u, 0x1D4648u, 0x1D4650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4650u;
label_1d4650:
    // 0x1d4650: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1d4650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1d4654: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d4654u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4658: 0x10200089  beqz        $at, . + 4 + (0x89 << 2)
    ctx->pc = 0x1D4658u;
    {
        const bool branch_taken_0x1d4658 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4658u;
        // 0x1d465c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4658) {
            ctx->pc = 0x1D4880u;
            goto label_1d4880;
        }
    }
    ctx->pc = 0x1D4660u;
    // 0x1d4660: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1d4660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d4664: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1d4664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4668: 0x8fb00124  lw          $s0, 0x124($sp)
    ctx->pc = 0x1d4668u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x1d466c: 0x3c0b82d  daddu       $s7, $fp, $zero
    ctx->pc = 0x1d466cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4670: 0x8fb60120  lw          $s6, 0x120($sp)
    ctx->pc = 0x1d4670u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d4674: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d4674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d4678: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1d467c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1d467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d4680: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d4680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d4684: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1d4684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1d4688: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1d4688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d468c: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x1d468cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x1d4690: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1d4690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1d4694: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1d4694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d4698: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1d4698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1d469c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1d469cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1d46a0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d46a4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1d46a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d46a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d46a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d46acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d46b0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1d46b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1d46b4: 0x0  nop
    ctx->pc = 0x1d46b4u;
    // NOP
label_1d46b8:
    // 0x1d46b8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d46bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D46BCu;
    {
        const bool branch_taken_0x1d46bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d46bc) {
            ctx->pc = 0x1D46E8u;
            goto label_1d46e8;
        }
    }
    ctx->pc = 0x1D46C4u;
    // 0x1d46c4: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x1d46c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d46c8: 0xc6ac0000  lwc1        $f12, 0x0($s5)
    ctx->pc = 0x1d46c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d46cc: 0xc6ad0004  lwc1        $f13, 0x4($s5)
    ctx->pc = 0x1d46ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d46d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d46d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d46d4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1d46d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d46d8: 0xc075140  jal         func_1D4500
    ctx->pc = 0x1D46D8u;
    SET_GPR_U32(ctx, 31, 0x1D46E0u);
    ctx->pc = 0x1D46DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46D8u;
    // 0x1d46dc: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4500u, 0x1D46D8u, 0x1D46E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46E0u;
label_1d46e0:
    // 0x1d46e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D46E0u;
    {
        const bool branch_taken_0x1d46e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d46e0) {
            ctx->pc = 0x1D46F8u;
            goto label_1d46f8;
        }
    }
    ctx->pc = 0x1D46E8u;
label_1d46e8:
    // 0x1d46e8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1d46e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1d46ec: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D46ECu;
    SET_GPR_U32(ctx, 31, 0x1D46F4u);
    ctx->pc = 0x1D46F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46ECu;
    // 0x1d46f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D46ECu, 0x1D46F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46F4u;
label_1d46f4:
    // 0x1d46f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d46f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1d46f8:
    // 0x1d46f8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1d46f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1d46fc: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D46FCu;
    SET_GPR_U32(ctx, 31, 0x1D4704u);
    ctx->pc = 0x1D4700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46FCu;
    // 0x1d4700: 0x139840  sll         $s3, $s3, 1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D46FCu, 0x1D4704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4704u;
label_1d4704:
    // 0x1d4704: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d4704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d4708: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d4708u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d470c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d4710: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D4710u;
    {
        const bool branch_taken_0x1d4710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4710) {
            ctx->pc = 0x1D4748u;
            goto label_1d4748;
        }
    }
    ctx->pc = 0x1D4718u;
    // 0x1d4718: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x1d4718u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1d471c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d471cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4720: 0x8fa90158  lw          $t1, 0x158($sp)
    ctx->pc = 0x1d4720u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1d4724: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1d4724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d4728: 0x8faa0150  lw          $t2, 0x150($sp)
    ctx->pc = 0x1d4728u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d472c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1d472cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1d4730: 0x8fab0160  lw          $t3, 0x160($sp)
    ctx->pc = 0x1d4730u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d4734: 0xc075154  jal         func_1D4550
    ctx->pc = 0x1D4734u;
    SET_GPR_U32(ctx, 31, 0x1D473Cu);
    ctx->pc = 0x1D4738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4734u;
    // 0x1d4738: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4550u, 0x1D4734u, 0x1D473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D473Cu;
label_1d473c:
    // 0x1d473c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D473Cu;
    {
        const bool branch_taken_0x1d473c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d473c) {
            ctx->pc = 0x1D4780u;
            goto label_1d4780;
        }
    }
    ctx->pc = 0x1D4744u;
    // 0x1d4744: 0x0  nop
    ctx->pc = 0x1d4744u;
    // NOP
label_1d4748:
    // 0x1d4748: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x1d4748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x1d474c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D474Cu;
    {
        const bool branch_taken_0x1d474c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d474c) {
            ctx->pc = 0x1D4780u;
            goto label_1d4780;
        }
    }
    ctx->pc = 0x1D4754u;
    // 0x1d4754: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d4754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d4758: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4758u;
    {
        const bool branch_taken_0x1d4758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4758) {
            ctx->pc = 0x1D4770u;
            goto label_1d4770;
        }
    }
    ctx->pc = 0x1D4760u;
    // 0x1d4760: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1d4760u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d4764: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4764u;
    {
        const bool branch_taken_0x1d4764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4764u;
        // 0x1d4768: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4764) {
            ctx->pc = 0x1D4780u;
            goto label_1d4780;
        }
    }
    ctx->pc = 0x1D476Cu;
    // 0x1d476c: 0x0  nop
    ctx->pc = 0x1d476cu;
    // NOP
label_1d4770:
    // 0x1d4770: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1d4770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d4774: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d4774u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d4778: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D4778u;
    SET_GPR_U32(ctx, 31, 0x1D4780u);
    ctx->pc = 0x1D477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4778u;
    // 0x1d477c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D4778u, 0x1D4780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4780u;
label_1d4780:
    // 0x1d4780: 0x27a20148  addiu       $v0, $sp, 0x148
    ctx->pc = 0x1d4780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x1d4784: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d4784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4788: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1d4788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1d478c: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1d478cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1d4790: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x1d4790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x1d4794: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d4794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d4798: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x1d4798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d479c: 0x27a20148  addiu       $v0, $sp, 0x148
    ctx->pc = 0x1d479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x1d47a0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1d47a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1d47a4: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x1d47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x1d47a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d47a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1d47ac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d47acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d47b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D47B0u;
    {
        const bool branch_taken_0x1d47b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47B0u;
        // 0x1d47b4: 0x2a410002  slti        $at, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47b0) {
            ctx->pc = 0x1D47D0u;
            goto label_1d47d0;
        }
    }
    ctx->pc = 0x1D47B8u;
    // 0x1d47b8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D47B8u;
    {
        const bool branch_taken_0x1d47b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47B8u;
        // 0x1d47bc: 0x27a2014c  addiu       $v0, $sp, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47b8) {
            ctx->pc = 0x1D47D0u;
            goto label_1d47d0;
        }
    }
    ctx->pc = 0x1D47C0u;
    // 0x1d47c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d47c4: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1d47c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1d47c8: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x1d47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x1d47cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d47ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1d47d0:
    // 0x1d47d0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1d47d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d47d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D47D4u;
    {
        const bool branch_taken_0x1d47d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d47d4) {
            ctx->pc = 0x1D47E8u;
            goto label_1d47e8;
        }
    }
    ctx->pc = 0x1D47DCu;
    // 0x1d47dc: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x1d47dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1d47e0: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x1d47e0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x1d47e4: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1d47e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1d47e8:
    // 0x1d47e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d47e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d47ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D47ECu;
    {
        const bool branch_taken_0x1d47ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d47ec) {
            ctx->pc = 0x1D4800u;
            goto label_1d4800;
        }
    }
    ctx->pc = 0x1D47F4u;
    // 0x1d47f4: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x1d47f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1d47f8: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x1d47f8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x1d47fc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1d47fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1d4800:
    // 0x1d4800: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1d4800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d4804: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d4804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4808: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4808u;
    {
        const bool branch_taken_0x1d4808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4808u;
        // 0x1d480c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4808) {
            ctx->pc = 0x1D4830u;
            goto label_1d4830;
        }
    }
    ctx->pc = 0x1D4810u;
    // 0x1d4810: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4810u;
    {
        const bool branch_taken_0x1d4810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d4810) {
            ctx->pc = 0x1D4820u;
            goto label_1d4820;
        }
    }
    ctx->pc = 0x1D4818u;
    // 0x1d4818: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D4818u;
    {
        const bool branch_taken_0x1d4818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4818) {
            ctx->pc = 0x1D4848u;
            goto label_1d4848;
        }
    }
    ctx->pc = 0x1D4820u;
label_1d4820:
    // 0x1d4820: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x1d4820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1d4824: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D4824u;
    {
        const bool branch_taken_0x1d4824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4824u;
        // 0x1d4828: 0x7e820000  sq          $v0, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4824) {
            ctx->pc = 0x1D4850u;
            goto label_1d4850;
        }
    }
    ctx->pc = 0x1D482Cu;
    // 0x1d482c: 0x0  nop
    ctx->pc = 0x1d482cu;
    // NOP
label_1d4830:
    // 0x1d4830: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1d4830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1d4834: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4838: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1d4838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1d483c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d483cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4840: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4840u;
    {
        const bool branch_taken_0x1d4840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4840u;
        // 0x1d4844: 0x7e820000  sq          $v0, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4840) {
            ctx->pc = 0x1D4850u;
            goto label_1d4850;
        }
    }
    ctx->pc = 0x1D4848u;
label_1d4848:
    // 0x1d4848: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x1d4848u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d484c: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x1d484cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_1d4850:
    // 0x1d4850: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x1d4850u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1d4854: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1d4854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1d4858: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d4858u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d485c: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1d485cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1d4860: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1d4860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1d4864: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1d4864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d4868: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1d4868u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1d486c: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1d486cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1d4870: 0x7e830010  sq          $v1, 0x10($s4)
    ctx->pc = 0x1d4870u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 3));
    // 0x1d4874: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d4874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4878: 0x1440ff8f  bnez        $v0, . + 4 + (-0x71 << 2)
    ctx->pc = 0x1D4878u;
    {
        const bool branch_taken_0x1d4878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4878u;
        // 0x1d487c: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4878) {
            ctx->pc = 0x1D46B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d46b8;
        }
    }
    ctx->pc = 0x1D4880u;
label_1d4880:
    // 0x1d4880: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x1d4880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1d4884: 0x2821823  subu        $v1, $s4, $v0
    ctx->pc = 0x1d4884u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d4888: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4888u;
    {
        const bool branch_taken_0x1d4888 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1D488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4888u;
        // 0x1d488c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4888) {
            ctx->pc = 0x1D4898u;
            goto label_1d4898;
        }
    }
    ctx->pc = 0x1D4890u;
    // 0x1d4890: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1d4890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d4894: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d4894u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1d4898:
    // 0x1d4898: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1d4898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d489c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d489cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d48a0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1d48a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d48a4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1d48a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d48a8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d48a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d48ac: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d48acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d48b0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d48b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d48b4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d48b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d48b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d48b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d48bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d48bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d48c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d48c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d48c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D48C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D48C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48C4u;
        // 0x1d48c8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D48C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D48CCu;
}
