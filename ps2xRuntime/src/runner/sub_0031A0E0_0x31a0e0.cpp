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

// Function: sub_0031A0E0
// Address: 0x31a0e0 - 0x31a230
void sub_0031A0E0_0x31a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A0E0_0x31a0e0");
#endif

    ctx->pc = 0x31a0e0u;

    // 0x31a0e0: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x31a0e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31a0e4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x31a0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x31a0e8: 0x24630b9a  addiu       $v1, $v1, 0xB9A
    ctx->pc = 0x31a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2970));
    // 0x31a0ec: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x31a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x31a0f0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x31a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x31a0f4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x31a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31a0f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31a0fc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x31a0fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a100: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x31a100u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x31a104: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x31A104u;
    {
        const bool branch_taken_0x31a104 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a104) {
            ctx->pc = 0x31A120u;
            goto label_31a120;
        }
    }
    ctx->pc = 0x31A10Cu;
    // 0x31a10c: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x31a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x31a110: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x31a110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x31a114: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31A114u;
    {
        const bool branch_taken_0x31a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A114u;
        // 0x31a118: 0xac830148  sw          $v1, 0x148($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a114) {
            ctx->pc = 0x31A130u;
            goto label_31a130;
        }
    }
    ctx->pc = 0x31A11Cu;
    // 0x31a11c: 0x0  nop
    ctx->pc = 0x31a11cu;
    // NOP
label_31a120:
    // 0x31a120: 0x8c8506cc  lw          $a1, 0x6CC($a0)
    ctx->pc = 0x31a120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x31a124: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x31a124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x31a128: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x31a128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x31a12c: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x31a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
label_31a130:
    // 0x31a130: 0x90860821  lbu         $a2, 0x821($a0)
    ctx->pc = 0x31a130u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x31a134: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31a134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31a138: 0x10c3003b  beq         $a2, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x31A138u;
    {
        const bool branch_taken_0x31a138 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x31A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A138u;
        // 0x31a13c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a138) {
            ctx->pc = 0x31A228u;
            goto label_31a228;
        }
    }
    ctx->pc = 0x31A140u;
    // 0x31a140: 0x10c50023  beq         $a2, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x31A140u;
    {
        const bool branch_taken_0x31a140 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x31a140) {
            ctx->pc = 0x31A1D0u;
            goto label_31a1d0;
        }
    }
    ctx->pc = 0x31A148u;
    // 0x31a148: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A148u;
    {
        const bool branch_taken_0x31a148 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a148) {
            ctx->pc = 0x31A158u;
            goto label_31a158;
        }
    }
    ctx->pc = 0x31A150u;
    // 0x31a150: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x31A150u;
    {
        const bool branch_taken_0x31a150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a150) {
            ctx->pc = 0x31A228u;
            goto label_31a228;
        }
    }
    ctx->pc = 0x31A158u;
label_31a158:
    // 0x31a158: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x31a158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x31a15c: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x31a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x31a160: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x31a160u;
    { uint32_t bits = FAST_READ32(0x4E92C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31a164: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x31a164u;
    { uint32_t bits = FAST_READ32(0x4E92C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a168: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x31a168u;
    { uint32_t bits = FAST_READ32(0x4E92C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a16c: 0xe48206a0  swc1        $f2, 0x6A0($a0)
    ctx->pc = 0x31a16cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1696), bits); }
    // 0x31a170: 0xe48106a4  swc1        $f1, 0x6A4($a0)
    ctx->pc = 0x31a170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1700), bits); }
    // 0x31a174: 0xe48006a8  swc1        $f0, 0x6A8($a0)
    ctx->pc = 0x31a174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1704), bits); }
    // 0x31a178: 0x9083083b  lbu         $v1, 0x83B($a0)
    ctx->pc = 0x31a178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2107)));
    // 0x31a17c: 0xa083083c  sb          $v1, 0x83C($a0)
    ctx->pc = 0x31a17cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2108), (uint8_t)GPR_U32(ctx, 3));
    // 0x31a180: 0xa085083b  sb          $a1, 0x83B($a0)
    ctx->pc = 0x31a180u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2107), (uint8_t)GPR_U32(ctx, 5));
    // 0x31a184: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x31a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x31a188: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x31a188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a18c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A18Cu;
    {
        const bool branch_taken_0x31a18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a18c) {
            ctx->pc = 0x31A1A0u;
            goto label_31a1a0;
        }
    }
    ctx->pc = 0x31A194u;
    // 0x31a194: 0xa0850821  sb          $a1, 0x821($a0)
    ctx->pc = 0x31a194u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x31a198: 0xa4800784  sh          $zero, 0x784($a0)
    ctx->pc = 0x31a198u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1924), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a19c: 0x0  nop
    ctx->pc = 0x31a19cu;
    // NOP
label_31a1a0:
    // 0x31a1a0: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x31a1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a1a4: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x31a1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a1a8: 0x2403009c  addiu       $v1, $zero, 0x9C
    ctx->pc = 0x31a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x31a1ac: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x31a1acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x31a1b0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x31a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31a1b4: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x31a1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x31a1b8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31a1bc: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x31a1bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x31a1c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a1c4: 0xac8507ec  sw          $a1, 0x7EC($a0)
    ctx->pc = 0x31a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 5));
    // 0x31a1c8: 0xa0830821  sb          $v1, 0x821($a0)
    ctx->pc = 0x31a1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x31a1cc: 0x0  nop
    ctx->pc = 0x31a1ccu;
    // NOP
label_31a1d0:
    // 0x31a1d0: 0x94830784  lhu         $v1, 0x784($a0)
    ctx->pc = 0x31a1d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1924)));
    // 0x31a1d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A1D4u;
    {
        const bool branch_taken_0x31a1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a1d4) {
            ctx->pc = 0x31A1E8u;
            goto label_31a1e8;
        }
    }
    ctx->pc = 0x31A1DCu;
    // 0x31a1dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31a1e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31A1E0u;
    {
        const bool branch_taken_0x31a1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1E0u;
        // 0x31a1e4: 0xa4830784  sh          $v1, 0x784($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1924), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a1e0) {
            ctx->pc = 0x31A228u;
            goto label_31a228;
        }
    }
    ctx->pc = 0x31A1E8u;
label_31a1e8:
    // 0x31a1e8: 0x908307d6  lbu         $v1, 0x7D6($a0)
    ctx->pc = 0x31a1e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2006)));
    // 0x31a1ec: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x31A1ECu;
    {
        const bool branch_taken_0x31a1ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a1ec) {
            ctx->pc = 0x31A228u;
            goto label_31a228;
        }
    }
    ctx->pc = 0x31A1F4u;
    // 0x31a1f4: 0x9087083b  lbu         $a3, 0x83B($a0)
    ctx->pc = 0x31a1f4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2107)));
    // 0x31a1f8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x31a1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x31a1fc: 0x240600c9  addiu       $a2, $zero, 0xC9
    ctx->pc = 0x31a1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x31a200: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x31a200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x31a204: 0x2403009d  addiu       $v1, $zero, 0x9D
    ctx->pc = 0x31a204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x31a208: 0xa087083c  sb          $a3, 0x83C($a0)
    ctx->pc = 0x31a208u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2108), (uint8_t)GPR_U32(ctx, 7));
    // 0x31a20c: 0xa080083b  sb          $zero, 0x83B($a0)
    ctx->pc = 0x31a20cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2107), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a210: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x31a210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a214: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x31a214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a218: 0xa48607f2  sh          $a2, 0x7F2($a0)
    ctx->pc = 0x31a218u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x31a21c: 0xa08007f5  sb          $zero, 0x7F5($a0)
    ctx->pc = 0x31a21cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a220: 0xac8507ec  sw          $a1, 0x7EC($a0)
    ctx->pc = 0x31a220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 5));
    // 0x31a224: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x31a224u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_31a228:
    // 0x31a228: 0x3e00008  jr          $ra
    ctx->pc = 0x31A228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A230u;
}
