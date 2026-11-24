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

// Function: sub_0031A230
// Address: 0x31a230 - 0x31a380
void sub_0031A230_0x31a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A230_0x31a230");
#endif

    ctx->pc = 0x31a230u;

    // 0x31a230: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x31a230u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31a234: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x31a234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x31a238: 0x24630b9a  addiu       $v1, $v1, 0xB9A
    ctx->pc = 0x31a238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2970));
    // 0x31a23c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x31a23cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x31a240: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x31a240u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x31a244: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x31a244u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31a248: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31a248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31a24c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x31a24cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a250: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x31a250u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x31a254: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x31A254u;
    {
        const bool branch_taken_0x31a254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a254) {
            ctx->pc = 0x31A270u;
            goto label_31a270;
        }
    }
    ctx->pc = 0x31A25Cu;
    // 0x31a25c: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x31a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x31a260: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x31a260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x31a264: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31A264u;
    {
        const bool branch_taken_0x31a264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A264u;
        // 0x31a268: 0xac830148  sw          $v1, 0x148($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a264) {
            ctx->pc = 0x31A280u;
            goto label_31a280;
        }
    }
    ctx->pc = 0x31A26Cu;
    // 0x31a26c: 0x0  nop
    ctx->pc = 0x31a26cu;
    // NOP
label_31a270:
    // 0x31a270: 0x8c8506cc  lw          $a1, 0x6CC($a0)
    ctx->pc = 0x31a270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x31a274: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x31a274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x31a278: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x31a278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x31a27c: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x31a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
label_31a280:
    // 0x31a280: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x31a280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x31a284: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x31a284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31a288: 0x1066003b  beq         $v1, $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x31A288u;
    {
        const bool branch_taken_0x31a288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x31A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A288u;
        // 0x31a28c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a288) {
            ctx->pc = 0x31A378u;
            goto label_31a378;
        }
    }
    ctx->pc = 0x31A290u;
    // 0x31a290: 0x10650021  beq         $v1, $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x31A290u;
    {
        const bool branch_taken_0x31a290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x31a290) {
            ctx->pc = 0x31A318u;
            goto label_31a318;
        }
    }
    ctx->pc = 0x31A298u;
    // 0x31a298: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A298u;
    {
        const bool branch_taken_0x31a298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a298) {
            ctx->pc = 0x31A2A8u;
            goto label_31a2a8;
        }
    }
    ctx->pc = 0x31A2A0u;
    // 0x31a2a0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x31A2A0u;
    {
        const bool branch_taken_0x31a2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a2a0) {
            ctx->pc = 0x31A378u;
            goto label_31a378;
        }
    }
    ctx->pc = 0x31A2A8u;
label_31a2a8:
    // 0x31a2a8: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x31a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x31a2ac: 0x246392d0  addiu       $v1, $v1, -0x6D30
    ctx->pc = 0x31a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939344));
    // 0x31a2b0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x31a2b0u;
    { uint32_t bits = FAST_READ32(0x4E92D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31a2b4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x31a2b4u;
    { uint32_t bits = FAST_READ32(0x4E92D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a2b8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x31a2b8u;
    { uint32_t bits = FAST_READ32(0x4E92D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a2bc: 0xe48206a0  swc1        $f2, 0x6A0($a0)
    ctx->pc = 0x31a2bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1696), bits); }
    // 0x31a2c0: 0xe48106a4  swc1        $f1, 0x6A4($a0)
    ctx->pc = 0x31a2c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1700), bits); }
    // 0x31a2c4: 0xe48006a8  swc1        $f0, 0x6A8($a0)
    ctx->pc = 0x31a2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1704), bits); }
    // 0x31a2c8: 0x9083083b  lbu         $v1, 0x83B($a0)
    ctx->pc = 0x31a2c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2107)));
    // 0x31a2cc: 0xa083083c  sb          $v1, 0x83C($a0)
    ctx->pc = 0x31a2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2108), (uint8_t)GPR_U32(ctx, 3));
    // 0x31a2d0: 0xa086083b  sb          $a2, 0x83B($a0)
    ctx->pc = 0x31a2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2107), (uint8_t)GPR_U32(ctx, 6));
    // 0x31a2d4: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x31a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x31a2d8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x31a2d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a2dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A2DCu;
    {
        const bool branch_taken_0x31a2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a2dc) {
            ctx->pc = 0x31A2F0u;
            goto label_31a2f0;
        }
    }
    ctx->pc = 0x31A2E4u;
    // 0x31a2e4: 0xa0850821  sb          $a1, 0x821($a0)
    ctx->pc = 0x31a2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x31a2e8: 0xa4800784  sh          $zero, 0x784($a0)
    ctx->pc = 0x31a2e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1924), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a2ec: 0x0  nop
    ctx->pc = 0x31a2ecu;
    // NOP
label_31a2f0:
    // 0x31a2f0: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x31a2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a2f4: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x31a2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a2f8: 0x2403009b  addiu       $v1, $zero, 0x9B
    ctx->pc = 0x31a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x31a2fc: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x31a2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x31a300: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x31a300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31a304: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x31a304u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x31a308: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31a308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31a30c: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x31a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x31a310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31a310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a314: 0xa0830821  sb          $v1, 0x821($a0)
    ctx->pc = 0x31a314u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
label_31a318:
    // 0x31a318: 0x94830784  lhu         $v1, 0x784($a0)
    ctx->pc = 0x31a318u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1924)));
    // 0x31a31c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A31Cu;
    {
        const bool branch_taken_0x31a31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a31c) {
            ctx->pc = 0x31A330u;
            goto label_31a330;
        }
    }
    ctx->pc = 0x31A324u;
    // 0x31a324: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31a324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31a328: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x31A328u;
    {
        const bool branch_taken_0x31a328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A328u;
        // 0x31a32c: 0xa4830784  sh          $v1, 0x784($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1924), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a328) {
            ctx->pc = 0x31A378u;
            goto label_31a378;
        }
    }
    ctx->pc = 0x31A330u;
label_31a330:
    // 0x31a330: 0x908307d6  lbu         $v1, 0x7D6($a0)
    ctx->pc = 0x31a330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2006)));
    // 0x31a334: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x31A334u;
    {
        const bool branch_taken_0x31a334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a334) {
            ctx->pc = 0x31A378u;
            goto label_31a378;
        }
    }
    ctx->pc = 0x31A33Cu;
    // 0x31a33c: 0x9088083b  lbu         $t0, 0x83B($a0)
    ctx->pc = 0x31a33cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2107)));
    // 0x31a340: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31a340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31a344: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x31a344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x31a348: 0x240700c8  addiu       $a3, $zero, 0xC8
    ctx->pc = 0x31a348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x31a34c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x31a34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31a350: 0x2403009d  addiu       $v1, $zero, 0x9D
    ctx->pc = 0x31a350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x31a354: 0xa088083c  sb          $t0, 0x83C($a0)
    ctx->pc = 0x31a354u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2108), (uint8_t)GPR_U32(ctx, 8));
    // 0x31a358: 0xa080083b  sb          $zero, 0x83B($a0)
    ctx->pc = 0x31a358u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2107), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a35c: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x31a35cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a360: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x31a360u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a364: 0xa48707f2  sh          $a3, 0x7F2($a0)
    ctx->pc = 0x31a364u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 7));
    // 0x31a368: 0xa08607f5  sb          $a2, 0x7F5($a0)
    ctx->pc = 0x31a368u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 6));
    // 0x31a36c: 0xac8507ec  sw          $a1, 0x7EC($a0)
    ctx->pc = 0x31a36cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 5));
    // 0x31a370: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x31a370u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x31a374: 0x0  nop
    ctx->pc = 0x31a374u;
    // NOP
label_31a378:
    // 0x31a378: 0x3e00008  jr          $ra
    ctx->pc = 0x31A378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A380u;
}
