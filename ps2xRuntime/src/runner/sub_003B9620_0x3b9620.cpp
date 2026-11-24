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

// Function: sub_003B9620
// Address: 0x3b9620 - 0x3b97e8
void sub_003B9620_0x3b9620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9620_0x3b9620");
#endif

    switch (ctx->pc) {
        case 0x3b9674u: goto label_3b9674;
        case 0x3b97d8u: goto label_3b97d8;
        default: break;
    }

    ctx->pc = 0x3b9620u;

    // 0x3b9620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b9620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b9624: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b9624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b9628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b9628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b962c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b962cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b9630: 0x90852b55  lbu         $a1, 0x2B55($a0)
    ctx->pc = 0x3b9630u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11093)));
    // 0x3b9634: 0x10a30060  beq         $a1, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x3B9634u;
    {
        const bool branch_taken_0x3b9634 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9634u;
        // 0x3b9638: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9634) {
            ctx->pc = 0x3B97B8u;
            goto label_3b97b8;
        }
    }
    ctx->pc = 0x3B963Cu;
    // 0x3b963c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b963cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b9640: 0x10a30039  beq         $a1, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3B9640u;
    {
        const bool branch_taken_0x3b9640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B9644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9640u;
        // 0x3b9644: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9640) {
            ctx->pc = 0x3B9728u;
            goto label_3b9728;
        }
    }
    ctx->pc = 0x3B9648u;
    // 0x3b9648: 0x10a3002b  beq         $a1, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x3B9648u;
    {
        const bool branch_taken_0x3b9648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b9648) {
            ctx->pc = 0x3B96F8u;
            goto label_3b96f8;
        }
    }
    ctx->pc = 0x3B9650u;
    // 0x3b9650: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B9650u;
    {
        const bool branch_taken_0x3b9650 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9650) {
            ctx->pc = 0x3B9660u;
            goto label_3b9660;
        }
    }
    ctx->pc = 0x3B9658u;
    // 0x3b9658: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x3B9658u;
    {
        const bool branch_taken_0x3b9658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9658) {
            ctx->pc = 0x3B97D8u;
            goto label_3b97d8;
        }
    }
    ctx->pc = 0x3B9660u;
label_3b9660:
    // 0x3b9660: 0xa6002b46  sh          $zero, 0x2B46($s0)
    ctx->pc = 0x3b9660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11078), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b9664: 0x92022b4b  lbu         $v0, 0x2B4B($s0)
    ctx->pc = 0x3b9664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b9668: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3b9668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3b966c: 0xc0ef288  jal         func_3BCA20
    ctx->pc = 0x3B966Cu;
    SET_GPR_U32(ctx, 31, 0x3B9674u);
    ctx->pc = 0x3B9670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B966Cu;
    // 0x3b9670: 0xa2022b4b  sb          $v0, 0x2B4B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCA20u, 0x3B966Cu, 0x3B9674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9674u;
label_3b9674:
    // 0x3b9674: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3b9674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b9678: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3b9678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x3b967c: 0xa2042b57  sb          $a0, 0x2B57($s0)
    ctx->pc = 0x3b967cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b9680: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3b9680u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b9684: 0xa2042b59  sb          $a0, 0x2B59($s0)
    ctx->pc = 0x3b9684u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b9688: 0xa2040780  sb          $a0, 0x780($s0)
    ctx->pc = 0x3b9688u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b968c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3b968cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3b9690: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b9690u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9694: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3b9694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3b9698: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3b9698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b969c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b969cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b96a0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3b96a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b96a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b96a8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3b96a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b96ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b96acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b96b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b96b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b96b4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B96B4u;
    {
        const bool branch_taken_0x3b96b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b96b4) {
            ctx->pc = 0x3B96CCu;
            goto label_3b96cc;
        }
    }
    ctx->pc = 0x3B96BCu;
    // 0x3b96bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b96bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b96c0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b96c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b96c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B96C4u;
    {
        const bool branch_taken_0x3b96c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B96C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B96C4u;
        // 0x3b96c8: 0xae042b88  sw          $a0, 0x2B88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b96c4) {
            ctx->pc = 0x3B96E8u;
            goto label_3b96e8;
        }
    }
    ctx->pc = 0x3B96CCu;
label_3b96cc:
    // 0x3b96cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b96ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b96d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b96d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3b96d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b96d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b96d8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b96d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b96dc: 0x0  nop
    ctx->pc = 0x3b96dcu;
    // NOP
    // 0x3b96e0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b96e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b96e4: 0xae042b88  sw          $a0, 0x2B88($s0)
    ctx->pc = 0x3b96e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
label_3b96e8:
    // 0x3b96e8: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b96e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b96ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b96ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b96f0: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b96f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b96f4: 0x0  nop
    ctx->pc = 0x3b96f4u;
    // NOP
label_3b96f8:
    // 0x3b96f8: 0x8e032b88  lw          $v1, 0x2B88($s0)
    ctx->pc = 0x3b96f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11144)));
    // 0x3b96fc: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3B96FCu;
    {
        const bool branch_taken_0x3b96fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b96fc) {
            ctx->pc = 0x3B97D8u;
            goto label_3b97d8;
        }
    }
    ctx->pc = 0x3B9704u;
    // 0x3b9704: 0xa2002b57  sb          $zero, 0x2B57($s0)
    ctx->pc = 0x3b9704u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9708: 0x240300f6  addiu       $v1, $zero, 0xF6
    ctx->pc = 0x3b9708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x3b970c: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b970cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9710: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3b9710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9714: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b9714u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9718: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b9718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b971c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b971cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b9720: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3B9720u;
    {
        const bool branch_taken_0x3b9720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9720u;
        // 0x3b9724: 0xa2032b55  sb          $v1, 0x2B55($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9720) {
            ctx->pc = 0x3B97D8u;
            goto label_3b97d8;
        }
    }
    ctx->pc = 0x3B9728u;
label_3b9728:
    // 0x3b9728: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x3b9728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3b972c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3b972cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b9730: 0x14640029  bne         $v1, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3B9730u;
    {
        const bool branch_taken_0x3b9730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3b9730) {
            ctx->pc = 0x3B97D8u;
            goto label_3b97d8;
        }
    }
    ctx->pc = 0x3B9738u;
    // 0x3b9738: 0xa2042b57  sb          $a0, 0x2B57($s0)
    ctx->pc = 0x3b9738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b973c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3b973cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3b9740: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b9740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9744: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b9744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b9748: 0xa2040780  sb          $a0, 0x780($s0)
    ctx->pc = 0x3b9748u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b974c: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b974cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9750: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b9750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3b9754: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3b9754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b9758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b9758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b975c: 0x0  nop
    ctx->pc = 0x3b975cu;
    // NOP
    // 0x3b9760: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b9760u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3b9764: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b9764u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b9768: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B9768u;
    {
        const bool branch_taken_0x3b9768 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b9768) {
            ctx->pc = 0x3B9780u;
            goto label_3b9780;
        }
    }
    ctx->pc = 0x3B9770u;
    // 0x3b9770: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b9770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b9774: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b9774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b9778: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B9778u;
    {
        const bool branch_taken_0x3b9778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9778u;
        // 0x3b977c: 0xae042b88  sw          $a0, 0x2B88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9778) {
            ctx->pc = 0x3B979Cu;
            goto label_3b979c;
        }
    }
    ctx->pc = 0x3B9780u;
label_3b9780:
    // 0x3b9780: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b9780u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b9784: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b9784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3b9788: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b9788u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b978c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b978cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b9790: 0x0  nop
    ctx->pc = 0x3b9790u;
    // NOP
    // 0x3b9794: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b9794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b9798: 0xae042b88  sw          $a0, 0x2B88($s0)
    ctx->pc = 0x3b9798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
label_3b979c:
    // 0x3b979c: 0x92032b4b  lbu         $v1, 0x2B4B($s0)
    ctx->pc = 0x3b979cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b97a0: 0x306300bf  andi        $v1, $v1, 0xBF
    ctx->pc = 0x3b97a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)191);
    // 0x3b97a4: 0xa2032b4b  sb          $v1, 0x2B4B($s0)
    ctx->pc = 0x3b97a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b97a8: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b97a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b97ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b97acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b97b0: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b97b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b97b4: 0x0  nop
    ctx->pc = 0x3b97b4u;
    // NOP
label_3b97b8:
    // 0x3b97b8: 0x8e032b88  lw          $v1, 0x2B88($s0)
    ctx->pc = 0x3b97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11144)));
    // 0x3b97bc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B97BCu;
    {
        const bool branch_taken_0x3b97bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b97bc) {
            ctx->pc = 0x3B97D8u;
            goto label_3b97d8;
        }
    }
    ctx->pc = 0x3B97C4u;
    // 0x3b97c4: 0x92022b4b  lbu         $v0, 0x2B4B($s0)
    ctx->pc = 0x3b97c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b97c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b97c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b97cc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3b97ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3b97d0: 0xc0ee024  jal         func_3B8090
    ctx->pc = 0x3B97D0u;
    SET_GPR_U32(ctx, 31, 0x3B97D8u);
    ctx->pc = 0x3B97D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B97D0u;
    // 0x3b97d4: 0xa2022b4b  sb          $v0, 0x2B4B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8090u, 0x3B97D0u, 0x3B97D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B97D8u;
label_3b97d8:
    // 0x3b97d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b97d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b97dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b97dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b97e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B97E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B97E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B97E0u;
        // 0x3b97e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B97E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B97E8u;
}
