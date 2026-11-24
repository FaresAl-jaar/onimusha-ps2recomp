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

// Function: sub_001936E0
// Address: 0x1936e0 - 0x193798
void sub_001936E0_0x1936e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001936E0_0x1936e0");
#endif

    ctx->pc = 0x1936e0u;

    // 0x1936e0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1936e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1936e4: 0x2463d7c0  addiu       $v1, $v1, -0x2840
    ctx->pc = 0x1936e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956992));
    // 0x1936e8: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x1936e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1936ec: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1936ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1936f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1936f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1936f4: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1936F4u;
    {
        const bool branch_taken_0x1936f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1936f4) {
            ctx->pc = 0x193788u;
            goto label_193788;
        }
    }
    ctx->pc = 0x1936FCu;
    // 0x1936fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1936FCu;
    {
        const bool branch_taken_0x1936fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1936fc) {
            ctx->pc = 0x193710u;
            goto label_193710;
        }
    }
    ctx->pc = 0x193704u;
    // 0x193704: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x193704u;
    {
        const bool branch_taken_0x193704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193704) {
            ctx->pc = 0x193790u;
            goto label_193790;
        }
    }
    ctx->pc = 0x19370Cu;
    // 0x19370c: 0x0  nop
    ctx->pc = 0x19370cu;
    // NOP
label_193710:
    // 0x193710: 0x71980  sll         $v1, $a3, 6
    ctx->pc = 0x193710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x193714: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x193714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x193718: 0x8465002c  lh          $a1, 0x2C($v1)
    ctx->pc = 0x193718u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x19371c: 0x8464006c  lh          $a0, 0x6C($v1)
    ctx->pc = 0x19371cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x193720: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x193720u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x193724: 0x28610800  slti        $at, $v1, 0x800
    ctx->pc = 0x193724u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x193728: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x193728u;
    {
        const bool branch_taken_0x193728 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x193728) {
            ctx->pc = 0x193738u;
            goto label_193738;
        }
    }
    ctx->pc = 0x193730u;
    // 0x193730: 0x24a31000  addiu       $v1, $a1, 0x1000
    ctx->pc = 0x193730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4096));
    // 0x193734: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x193734u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_193738:
    // 0x193738: 0x2861f801  slti        $at, $v1, -0x7FF
    ctx->pc = 0x193738u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294965249) ? 1 : 0);
    // 0x19373c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x19373Cu;
    {
        const bool branch_taken_0x19373c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19373c) {
            ctx->pc = 0x193750u;
            goto label_193750;
        }
    }
    ctx->pc = 0x193744u;
    // 0x193744: 0x24831000  addiu       $v1, $a0, 0x1000
    ctx->pc = 0x193744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4096));
    // 0x193748: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x193748u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19374c: 0x0  nop
    ctx->pc = 0x19374cu;
    // NOP
label_193750:
    // 0x193750: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193754: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x193754u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193758: 0x0  nop
    ctx->pc = 0x193758u;
    // NOP
    // 0x19375c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19375cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x193760: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x193760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193764: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x193764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x193768: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x193768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19376c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19376cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193770: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x193770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x193774: 0x0  nop
    ctx->pc = 0x193774u;
    // NOP
    // 0x193778: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x193778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x19377c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19377Cu;
    {
        const bool branch_taken_0x19377c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19377Cu;
        // 0x193780: 0xa5030000  sh          $v1, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19377c) {
            ctx->pc = 0x193790u;
            goto label_193790;
        }
    }
    ctx->pc = 0x193784u;
    // 0x193784: 0x0  nop
    ctx->pc = 0x193784u;
    // NOP
label_193788:
    // 0x193788: 0x84a3002c  lh          $v1, 0x2C($a1)
    ctx->pc = 0x193788u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x19378c: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x19378cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
label_193790:
    // 0x193790: 0x3e00008  jr          $ra
    ctx->pc = 0x193790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193798u;
}
