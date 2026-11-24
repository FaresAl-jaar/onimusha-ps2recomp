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

// Function: sub_00374560
// Address: 0x374560 - 0x374638
void sub_00374560_0x374560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374560_0x374560");
#endif

    ctx->pc = 0x374560u;

    // 0x374560: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x374560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x374564: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x374564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374568: 0x10670017  beq         $v1, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x374568u;
    {
        const bool branch_taken_0x374568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x374568) {
            ctx->pc = 0x3745C8u;
            goto label_3745c8;
        }
    }
    ctx->pc = 0x374570u;
    // 0x374570: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x374570u;
    {
        const bool branch_taken_0x374570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x374570) {
            ctx->pc = 0x374580u;
            goto label_374580;
        }
    }
    ctx->pc = 0x374578u;
    // 0x374578: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x374578u;
    {
        const bool branch_taken_0x374578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x374578) {
            ctx->pc = 0x374630u;
            goto label_374630;
        }
    }
    ctx->pc = 0x374580u;
label_374580:
    // 0x374580: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x374580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x374584: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x374584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x374588: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x374588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x37458c: 0xac830094  sw          $v1, 0x94($a0)
    ctx->pc = 0x37458cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 3));
    // 0x374590: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x374590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x374594: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x374594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x374598: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x374598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37459c: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x37459cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x3745a0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3745a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3745a4: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3745a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3745a8: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3745a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3745ac: 0xa48607f2  sh          $a2, 0x7F2($a0)
    ctx->pc = 0x3745acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x3745b0: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x3745b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3745b4: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3745b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3745b8: 0xa0872b60  sb          $a3, 0x2B60($a0)
    ctx->pc = 0x3745b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11104), (uint8_t)GPR_U32(ctx, 7));
    // 0x3745bc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3745BCu;
    {
        const bool branch_taken_0x3745bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3745C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745BCu;
        // 0x3745c0: 0xa0870821  sb          $a3, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3745bc) {
            ctx->pc = 0x374630u;
            goto label_374630;
        }
    }
    ctx->pc = 0x3745C4u;
    // 0x3745c4: 0x0  nop
    ctx->pc = 0x3745c4u;
    // NOP
label_3745c8:
    // 0x3745c8: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x3745c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3745cc: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x3745ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3745d0: 0x2c610021  sltiu       $at, $v1, 0x21
    ctx->pc = 0x3745d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x3745d4: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x3745D4u;
    {
        const bool branch_taken_0x3745d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3745d4) {
            ctx->pc = 0x374620u;
            goto label_374620;
        }
    }
    ctx->pc = 0x3745DCu;
    // 0x3745dc: 0xc4810094  lwc1        $f1, 0x94($a0)
    ctx->pc = 0x3745dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3745e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3745e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3745e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3745e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3745e8: 0x0  nop
    ctx->pc = 0x3745e8u;
    // NOP
    // 0x3745ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3745ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3745f0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x3745F0u;
    {
        const bool branch_taken_0x3745f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3745F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745F0u;
        // 0x3745f4: 0x3c033e4c  lui         $v1, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3745f0) {
            ctx->pc = 0x374610u;
            goto label_374610;
        }
    }
    ctx->pc = 0x3745F8u;
    // 0x3745f8: 0x3463cccc  ori         $v1, $v1, 0xCCCC
    ctx->pc = 0x3745f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52428);
    // 0x3745fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3745fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374600: 0x0  nop
    ctx->pc = 0x374600u;
    // NOP
    // 0x374604: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x374604u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x374608: 0xe4800094  swc1        $f0, 0x94($a0)
    ctx->pc = 0x374608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x37460c: 0x0  nop
    ctx->pc = 0x37460cu;
    // NOP
label_374610:
    // 0x374610: 0xc4810094  lwc1        $f1, 0x94($a0)
    ctx->pc = 0x374610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374614: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x374614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374618: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x374618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37461c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x37461cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_374620:
    // 0x374620: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x374620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x374624: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x374624u;
    {
        const bool branch_taken_0x374624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x374628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374624u;
        // 0x374628: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374624) {
            ctx->pc = 0x374630u;
            goto label_374630;
        }
    }
    ctx->pc = 0x37462Cu;
    // 0x37462c: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x37462cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_374630:
    // 0x374630: 0x3e00008  jr          $ra
    ctx->pc = 0x374630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374638u;
}
