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

// Function: sub_0028AE20
// Address: 0x28ae20 - 0x28afbc
void sub_0028AE20_0x28ae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AE20_0x28ae20");
#endif

    switch (ctx->pc) {
        case 0x28ae70u: goto label_28ae70;
        case 0x28ae78u: goto label_28ae78;
        default: break;
    }

    ctx->pc = 0x28ae20u;

    // 0x28ae20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28ae20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28ae24: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x28ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x28ae28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28ae28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28ae2c: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x28ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x28ae30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28ae30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28ae34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28ae38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28ae3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28ae3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ae40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28ae40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28ae44: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x28ae44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ae48: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x28ae48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28ae4c: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x28ae4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x28ae50: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x28ae50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x28ae54: 0x26480008  addiu       $t0, $s2, 0x8
    ctx->pc = 0x28ae54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x28ae58: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x28ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28ae5c: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x28ae5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x28ae60: 0x2649000c  addiu       $t1, $s2, 0xC
    ctx->pc = 0x28ae60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x28ae64: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x28ae64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x28ae68: 0xc096da0  jal         func_25B680
    ctx->pc = 0x28AE68u;
    SET_GPR_U32(ctx, 31, 0x28AE70u);
    ctx->pc = 0x28AE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE68u;
    // 0x28ae6c: 0x26470006  addiu       $a3, $s2, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x28AE68u, 0x28AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE70u;
label_28ae70:
    // 0x28ae70: 0xc096d80  jal         func_25B600
    ctx->pc = 0x28AE70u;
    SET_GPR_U32(ctx, 31, 0x28AE78u);
    ctx->pc = 0x28AE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE70u;
    // 0x28ae74: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B600u, 0x28AE70u, 0x28AE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE78u;
label_28ae78:
    // 0x28ae78: 0xa2020024  sb          $v0, 0x24($s0)
    ctx->pc = 0x28ae78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x28ae7c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x28ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x28ae80: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x28ae80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x28ae84: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x28ae84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x28ae88: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x28ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x28ae8c: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x28ae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28ae90: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x28ae90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x28ae94: 0x86430022  lh          $v1, 0x22($s2)
    ctx->pc = 0x28ae94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x28ae98: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x28ae98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28ae9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28aea0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28aea4: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x28aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x28aea8: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x28aea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28aeac: 0x86420020  lh          $v0, 0x20($s2)
    ctx->pc = 0x28aeacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x28aeb0: 0x42302  srl         $a0, $a0, 12
    ctx->pc = 0x28aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x28aeb4: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x28aeb4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x28aeb8: 0x0  nop
    ctx->pc = 0x28aeb8u;
    // NOP
    // 0x28aebc: 0x0  nop
    ctx->pc = 0x28aebcu;
    // NOP
    // 0x28aec0: 0x1810  mfhi        $v1
    ctx->pc = 0x28aec0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28aec4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28aec8: 0xa6020026  sh          $v0, 0x26($s0)
    ctx->pc = 0x28aec8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x28aecc: 0x86020026  lh          $v0, 0x26($s0)
    ctx->pc = 0x28aeccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x28aed0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28AED0u;
    {
        const bool branch_taken_0x28aed0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x28AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AED0u;
        // 0x28aed4: 0x28417ff1  slti        $at, $v0, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aed0) {
            ctx->pc = 0x28AEE0u;
            goto label_28aee0;
        }
    }
    ctx->pc = 0x28AED8u;
    // 0x28aed8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28AED8u;
    {
        const bool branch_taken_0x28aed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AED8u;
        // 0x28aedc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aed8) {
            ctx->pc = 0x28AEF0u;
            goto label_28aef0;
        }
    }
    ctx->pc = 0x28AEE0u;
label_28aee0:
    // 0x28aee0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x28AEE0u;
    {
        const bool branch_taken_0x28aee0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28aee0) {
            ctx->pc = 0x28AEF0u;
            goto label_28aef0;
        }
    }
    ctx->pc = 0x28AEE8u;
    // 0x28aee8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x28AEE8u;
    {
        const bool branch_taken_0x28aee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEE8u;
        // 0x28aeec: 0x24027ff0  addiu       $v0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aee8) {
            ctx->pc = 0x28AEF0u;
            goto label_28aef0;
        }
    }
    ctx->pc = 0x28AEF0u;
label_28aef0:
    // 0x28aef0: 0xa6020026  sh          $v0, 0x26($s0)
    ctx->pc = 0x28aef0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x28aef4: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x28aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28aef8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x28aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x28aefc: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x28aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x28af00: 0xc6440028  lwc1        $f4, 0x28($s2)
    ctx->pc = 0x28af00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28af04: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28af04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28af08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28af08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28af0c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x28af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x28af10: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x28af10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28af14: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x28af14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x28af18: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28AF18u;
    {
        const bool branch_taken_0x28af18 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x28AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF18u;
        // 0x28af1c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af18) {
            ctx->pc = 0x28AF2Cu;
            goto label_28af2c;
        }
    }
    ctx->pc = 0x28AF20u;
    // 0x28af20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28af20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28af24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28AF24u;
    {
        const bool branch_taken_0x28af24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF24u;
        // 0x28af28: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af24) {
            ctx->pc = 0x28AF44u;
            goto label_28af44;
        }
    }
    ctx->pc = 0x28AF2Cu;
label_28af2c:
    // 0x28af2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28af2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28af30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28af30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28af34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28af34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28af38: 0x0  nop
    ctx->pc = 0x28af38u;
    // NOP
    // 0x28af3c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x28af3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28af40: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28af40u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28af44:
    // 0x28af44: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x28af44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x28af48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28af48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28af4c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x28af4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x28af50: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28af50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28af54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28af54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28af58: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x28af58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x28af5c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x28af5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x28af60: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x28af60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28af64: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x28af64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x28af68: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x28af68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28af6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28af6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28af70: 0x0  nop
    ctx->pc = 0x28af70u;
    // NOP
    // 0x28af74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28af74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28af78: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x28AF78u;
    {
        const bool branch_taken_0x28af78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF78u;
        // 0x28af7c: 0xe6010028  swc1        $f1, 0x28($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af78) {
            ctx->pc = 0x28AF88u;
            goto label_28af88;
        }
    }
    ctx->pc = 0x28AF80u;
    // 0x28af80: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x28af80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x28af84: 0x0  nop
    ctx->pc = 0x28af84u;
    // NOP
label_28af88:
    // 0x28af88: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x28af88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x28af8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28af8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28af90: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x28af90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28af94: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28AF94u;
    {
        const bool branch_taken_0x28af94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28af94) {
            ctx->pc = 0x28AFA0u;
            goto label_28afa0;
        }
    }
    ctx->pc = 0x28AF9Cu;
    // 0x28af9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28af9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28afa0:
    // 0x28afa0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28afa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28afa4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28afa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28afa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28afa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28afac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28afacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28afb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28afb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28afb4: 0x3e00008  jr          $ra
    ctx->pc = 0x28AFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFB4u;
        // 0x28afb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AFBCu;
}
