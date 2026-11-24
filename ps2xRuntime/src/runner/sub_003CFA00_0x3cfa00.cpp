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

// Function: sub_003CFA00
// Address: 0x3cfa00 - 0x3cfb48
void sub_003CFA00_0x3cfa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CFA00_0x3cfa00");
#endif

    switch (ctx->pc) {
        case 0x3cfa48u: goto label_3cfa48;
        case 0x3cfa70u: goto label_3cfa70;
        case 0x3cfa94u: goto label_3cfa94;
        default: break;
    }

    ctx->pc = 0x3cfa00u;

    // 0x3cfa00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3cfa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3cfa04: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3cfa04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3cfa08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3cfa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3cfa0c: 0x2508f990  addiu       $t0, $t0, -0x670
    ctx->pc = 0x3cfa0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965648));
    // 0x3cfa10: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3cfa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3cfa14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3cfa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3cfa18: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3cfa18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3cfa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3cfa20: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3cfa20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cfa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3cfa28: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3cfa28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa2c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3cfa2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3cfa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cfa34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cfa38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa3c: 0x24070580  addiu       $a3, $zero, 0x580
    ctx->pc = 0x3cfa3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
    // 0x3cfa40: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3CFA40u;
    SET_GPR_U32(ctx, 31, 0x3CFA48u);
    ctx->pc = 0x3CFA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFA40u;
    // 0x3cfa44: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3CFA40u, 0x3CFA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFA48u;
label_3cfa48:
    // 0x3cfa48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cfa48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa4c: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3CFA4Cu;
    {
        const bool branch_taken_0x3cfa4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA4Cu;
        // 0x3cfa50: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfa4c) {
            ctx->pc = 0x3CFB20u;
            goto label_3cfb20;
        }
    }
    ctx->pc = 0x3CFA54u;
    // 0x3cfa54: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3cfa54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cfa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa5c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3cfa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3cfa60: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x3cfa60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3cfa64: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3cfa64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa68: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3CFA68u;
    SET_GPR_U32(ctx, 31, 0x3CFA70u);
    ctx->pc = 0x3CFA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFA68u;
    // 0x3cfa6c: 0x264a0020  addiu       $t2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3CFA68u, 0x3CFA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFA70u;
label_3cfa70:
    // 0x3cfa70: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3cfa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3cfa74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cfa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cfa78: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x3cfa78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x3cfa7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cfa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa80: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3cfa80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3cfa84: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3cfa84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3cfa88: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3cfa88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cfa8c: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3CFA8Cu;
    SET_GPR_U32(ctx, 31, 0x3CFA94u);
    ctx->pc = 0x3CFA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFA8Cu;
    // 0x3cfa90: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3CFA8Cu, 0x3CFA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFA94u;
label_3cfa94:
    // 0x3cfa94: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x3cfa94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x3cfa98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3cfa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3cfa9c: 0xae020564  sw          $v0, 0x564($s0)
    ctx->pc = 0x3cfa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
    // 0x3cfaa0: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3cfaa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3cfaa4: 0xa2000568  sb          $zero, 0x568($s0)
    ctx->pc = 0x3cfaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1384), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cfaa8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3cfaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3cfaac: 0xa2110569  sb          $s1, 0x569($s0)
    ctx->pc = 0x3cfaacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1385), (uint8_t)GPR_U32(ctx, 17));
    // 0x3cfab0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3cfab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cfab4: 0x8e4529c0  lw          $a1, 0x29C0($s2)
    ctx->pc = 0x3cfab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x3cfab8: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x3cfab8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3cfabc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cfabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cfac0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3cfac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cfac4: 0x244230b4  addiu       $v0, $v0, 0x30B4
    ctx->pc = 0x3cfac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12468));
    // 0x3cfac8: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x3cfac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3cfacc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cfaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cfad0: 0x244230b8  addiu       $v0, $v0, 0x30B8
    ctx->pc = 0x3cfad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12472));
    // 0x3cfad4: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x3cfad4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3cfad8: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x3cfad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3cfadc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cfadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cfae0: 0x244230c4  addiu       $v0, $v0, 0x30C4
    ctx->pc = 0x3cfae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12484));
    // 0x3cfae4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3cfae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3cfae8: 0xa6050574  sh          $a1, 0x574($s0)
    ctx->pc = 0x3cfae8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1396), (uint16_t)GPR_U32(ctx, 5));
    // 0x3cfaec: 0xa6040576  sh          $a0, 0x576($s0)
    ctx->pc = 0x3cfaecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1398), (uint16_t)GPR_U32(ctx, 4));
    // 0x3cfaf0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3cfaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cfaf4: 0xe600056c  swc1        $f0, 0x56C($s0)
    ctx->pc = 0x3cfaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1388), bits); }
    // 0x3cfaf8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3cfaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3cfafc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3cfafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cfb00: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3cfb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cfb04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3cfb04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3cfb08: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3cfb08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3cfb0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3cfb0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3cfb10: 0xe6000570  swc1        $f0, 0x570($s0)
    ctx->pc = 0x3cfb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1392), bits); }
    // 0x3cfb14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CFB14u;
    {
        const bool branch_taken_0x3cfb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFB14u;
        // 0x3cfb18: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfb14) {
            ctx->pc = 0x3CFB28u;
            goto label_3cfb28;
        }
    }
    ctx->pc = 0x3CFB1Cu;
    // 0x3cfb1c: 0x0  nop
    ctx->pc = 0x3cfb1cu;
    // NOP
label_3cfb20:
    // 0x3cfb20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3cfb20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfb24: 0x0  nop
    ctx->pc = 0x3cfb24u;
    // NOP
label_3cfb28:
    // 0x3cfb28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3cfb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3cfb2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3cfb2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cfb30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3cfb30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cfb34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3cfb34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cfb38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cfb38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cfb3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cfb3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cfb40: 0x3e00008  jr          $ra
    ctx->pc = 0x3CFB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CFB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFB40u;
        // 0x3cfb44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CFB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CFB48u;
}
