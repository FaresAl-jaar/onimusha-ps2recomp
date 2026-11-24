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

// Function: sub_00254BA0
// Address: 0x254ba0 - 0x254cc0
void sub_00254BA0_0x254ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254BA0_0x254ba0");
#endif

    ctx->pc = 0x254ba0u;

    // 0x254ba0: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x254ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x254ba4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x254ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x254ba8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x254ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x254bac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x254bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x254bb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254bb4: 0x24a50860  addiu       $a1, $a1, 0x860
    ctx->pc = 0x254bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2144));
    // 0x254bb8: 0x9024fc8d  lbu         $a0, -0x373($at)
    ctx->pc = 0x254bb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966413)));
    // 0x254bbc: 0x34840  sll         $t1, $v1, 1
    ctx->pc = 0x254bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x254bc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x254bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254bc4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x254BC4u;
    {
        const bool branch_taken_0x254bc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x254BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BC4u;
        // 0x254bc8: 0xa92821  addu        $a1, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bc4) {
            ctx->pc = 0x254BD8u;
            goto label_254bd8;
        }
    }
    ctx->pc = 0x254BCCu;
    // 0x254bcc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x254BCCu;
    {
        const bool branch_taken_0x254bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254bcc) {
            ctx->pc = 0x254BE8u;
            goto label_254be8;
        }
    }
    ctx->pc = 0x254BD4u;
    // 0x254bd4: 0x0  nop
    ctx->pc = 0x254bd4u;
    // NOP
label_254bd8:
    // 0x254bd8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x254bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x254bdc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x254bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x254be0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x254BE0u;
    {
        const bool branch_taken_0x254be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254be0) {
            ctx->pc = 0x254BF0u;
            goto label_254bf0;
        }
    }
    ctx->pc = 0x254BE8u;
label_254be8:
    // 0x254be8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x254be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x254bec: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x254becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_254bf0:
    // 0x254bf0: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x254bf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x254bf4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x254BF4u;
    {
        const bool branch_taken_0x254bf4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x254BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BF4u;
        // 0x254bf8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bf4) {
            ctx->pc = 0x254C08u;
            goto label_254c08;
        }
    }
    ctx->pc = 0x254BFCu;
    // 0x254bfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x254bfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254c00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x254C00u;
    {
        const bool branch_taken_0x254c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C00u;
        // 0x254c04: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c00) {
            ctx->pc = 0x254C20u;
            goto label_254c20;
        }
    }
    ctx->pc = 0x254C08u;
label_254c08:
    // 0x254c08: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x254c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x254c0c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x254c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x254c10: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x254c10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254c14: 0x0  nop
    ctx->pc = 0x254c14u;
    // NOP
    // 0x254c18: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x254c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x254c1c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x254c1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_254c20:
    // 0x254c20: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x254c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x254c24: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x254c24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x254c28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x254c28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254c2c: 0x0  nop
    ctx->pc = 0x254c2cu;
    // NOP
    // 0x254c30: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x254c30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x254c34: 0x0  nop
    ctx->pc = 0x254c34u;
    // NOP
    // 0x254c38: 0x0  nop
    ctx->pc = 0x254c38u;
    // NOP
    // 0x254c3c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x254C3Cu;
    {
        const bool branch_taken_0x254c3c = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x254c3c) {
            ctx->pc = 0x254C50u;
            goto label_254c50;
        }
    }
    ctx->pc = 0x254C44u;
    // 0x254c44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x254c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254c48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x254C48u;
    {
        const bool branch_taken_0x254c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C48u;
        // 0x254c4c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c48) {
            ctx->pc = 0x254C6Cu;
            goto label_254c6c;
        }
    }
    ctx->pc = 0x254C50u;
label_254c50:
    // 0x254c50: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x254c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x254c54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x254c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x254c58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x254c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x254c5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x254c5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254c60: 0x0  nop
    ctx->pc = 0x254c60u;
    // NOP
    // 0x254c64: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x254c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x254c68: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x254c68u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_254c6c:
    // 0x254c6c: 0x46041002  mul.s       $f0, $f2, $f4
    ctx->pc = 0x254c6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x254c70: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x254c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x254c74: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x254c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x254c78: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x254c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254c7c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x254c7cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x254c80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x254c80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x254c84: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x254c84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x254c88: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x254c88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x254c8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x254c8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x254c90: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x254c90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x254c94: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x254c94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x254c98: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x254c98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x254c9c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x254c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254ca0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x254ca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x254ca4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x254ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x254ca8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x254ca8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x254cac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x254cacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x254cb0: 0x0  nop
    ctx->pc = 0x254cb0u;
    // NOP
    // 0x254cb4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x254cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x254cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x254CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CB8u;
        // 0x254cbc: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254CC0u;
}
