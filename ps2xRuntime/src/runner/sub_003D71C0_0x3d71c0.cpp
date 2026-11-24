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

// Function: sub_003D71C0
// Address: 0x3d71c0 - 0x3d74c8
void sub_003D71C0_0x3d71c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D71C0_0x3d71c0");
#endif

    switch (ctx->pc) {
        case 0x3d721cu: goto label_3d721c;
        case 0x3d7320u: goto label_3d7320;
        case 0x3d7398u: goto label_3d7398;
        case 0x3d73a8u: goto label_3d73a8;
        case 0x3d73b8u: goto label_3d73b8;
        case 0x3d73ecu: goto label_3d73ec;
        case 0x3d742cu: goto label_3d742c;
        case 0x3d7490u: goto label_3d7490;
        default: break;
    }

    ctx->pc = 0x3d71c0u;

    // 0x3d71c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d71c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d71c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d71c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d71c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d71c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d71cc: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3d71ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3d71d0: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x3d71d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3d71d4: 0x102000b8  beqz        $at, . + 4 + (0xB8 << 2)
    ctx->pc = 0x3D71D4u;
    {
        const bool branch_taken_0x3d71d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D71D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D71D4u;
        // 0x3d71d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d71d4) {
            ctx->pc = 0x3D74B8u;
            goto label_3d74b8;
        }
    }
    ctx->pc = 0x3D71DCu;
    // 0x3d71dc: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3d71dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3d71e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d71e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d71e4: 0x24a54640  addiu       $a1, $a1, 0x4640
    ctx->pc = 0x3d71e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17984));
    // 0x3d71e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d71ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d71ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d71f0: 0x600008  jr          $v1
    ctx->pc = 0x3D71F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D71F8u: goto label_3d71f8;
            case 0x3D7250u: goto label_3d7250;
            case 0x3D7290u: goto label_3d7290;
            case 0x3D72F8u: goto label_3d72f8;
            case 0x3D7328u: goto label_3d7328;
            case 0x3D73C0u: goto label_3d73c0;
            case 0x3D7408u: goto label_3d7408;
            case 0x3D7418u: goto label_3d7418;
            case 0x3D74B8u: goto label_3d74b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D71F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D71F8u;
label_3d71f8:
    // 0x3d71f8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3d71fc: 0x2442e500  addiu       $v0, $v0, -0x1B00
    ctx->pc = 0x3d71fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960384));
    // 0x3d7200: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3d7200u;
    { uint32_t bits = FAST_READ32(0x65E500u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d7204: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3d7204u;
    { uint32_t bits = FAST_READ32(0x65E504u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d7208: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3d7208u;
    { uint32_t bits = FAST_READ32(0x65E508u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d720c: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x3d720cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3d7210: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x3d7210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3d7214: 0xc0f5874  jal         func_3D61D0
    ctx->pc = 0x3D7214u;
    SET_GPR_U32(ctx, 31, 0x3D721Cu);
    ctx->pc = 0x3D7218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7214u;
    // 0x3d7218: 0xe60006a8  swc1        $f0, 0x6A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D61D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D61D0u, 0x3D7214u, 0x3D721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D721Cu;
label_3d721c:
    // 0x3d721c: 0xa6002b96  sh          $zero, 0x2B96($s0)
    ctx->pc = 0x3d721cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11158), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d7220: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x3d7220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3d7224: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3d7224u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d7228: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3d7228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d722c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3d722cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d7230: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d7230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d7234: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x3d7234u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d7238: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3d7238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d723c: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x3d723cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d7240: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d7240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d7244: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3d7244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3d7248: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3d7248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d724c: 0x0  nop
    ctx->pc = 0x3d724cu;
    // NOP
label_3d7250:
    // 0x3d7250: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3d7250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3d7254: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x3D7254u;
    {
        const bool branch_taken_0x3d7254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7254) {
            ctx->pc = 0x3D74B8u;
            goto label_3d74b8;
        }
    }
    ctx->pc = 0x3D725Cu;
    // 0x3d725c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3d725cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d7260: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3d7260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d7264: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3d7264u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d7268: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3d7268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d726c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3d726cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d7270: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d7270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d7274: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3d7274u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d7278: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3d7278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d727c: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3d727cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3d7280: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d7280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d7284: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x3D7284u;
    {
        const bool branch_taken_0x3d7284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7284u;
        // 0x3d7288: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7284) {
            ctx->pc = 0x3D74B8u;
            goto label_3d74b8;
        }
    }
    ctx->pc = 0x3D728Cu;
    // 0x3d728c: 0x0  nop
    ctx->pc = 0x3d728cu;
    // NOP
label_3d7290:
    // 0x3d7290: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d7290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d7294: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3d7294u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d7298: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3d7298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3d729c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3d729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d72a0: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x3d72a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x3d72a4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3d72a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3d72a8: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3d72a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3d72ac: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3d72acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d72b0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3d72b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3d72b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d72b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d72b8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3d72b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3d72bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d72bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d72c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d72c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d72c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D72C4u;
    {
        const bool branch_taken_0x3d72c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d72c4) {
            ctx->pc = 0x3D72DCu;
            goto label_3d72dc;
        }
    }
    ctx->pc = 0x3D72CCu;
    // 0x3d72cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d72ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d72d0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3d72d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3d72d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D72D4u;
    {
        const bool branch_taken_0x3d72d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D72D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D72D4u;
        // 0x3d72d8: 0xa6042b28  sh          $a0, 0x2B28($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d72d4) {
            ctx->pc = 0x3D72F8u;
            goto label_3d72f8;
        }
    }
    ctx->pc = 0x3D72DCu;
label_3d72dc:
    // 0x3d72dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d72dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d72e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d72e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d72e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d72e8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3d72e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3d72ec: 0x0  nop
    ctx->pc = 0x3d72ecu;
    // NOP
    // 0x3d72f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d72f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3d72f4: 0xa6042b28  sh          $a0, 0x2B28($s0)
    ctx->pc = 0x3d72f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 4));
label_3d72f8:
    // 0x3d72f8: 0x86032b28  lh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d72f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3d72fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d72fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d7300: 0xa6032b28  sh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d7300u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d7304: 0x86032b28  lh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d7304u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3d7308: 0x1c60006b  bgtz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x3D7308u;
    {
        const bool branch_taken_0x3d7308 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3d7308) {
            ctx->pc = 0x3D74B8u;
            goto label_3d74b8;
        }
    }
    ctx->pc = 0x3D7310u;
    // 0x3d7310: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3d7310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d7314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d7314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7318: 0xc0f57a0  jal         func_3D5E80
    ctx->pc = 0x3D7318u;
    SET_GPR_U32(ctx, 31, 0x3D7320u);
    ctx->pc = 0x3D731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7318u;
    // 0x3d731c: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5E80u, 0x3D7318u, 0x3D7320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7320u;
label_3d7320:
    // 0x3d7320: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x3D7320u;
    {
        const bool branch_taken_0x3d7320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7320) {
            ctx->pc = 0x3D74B8u;
            goto label_3d74b8;
        }
    }
    ctx->pc = 0x3D7328u;
label_3d7328:
    // 0x3d7328: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3d7328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3d732c: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3d732cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d7330: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3d7330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3d7334: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3d7334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d7338: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x3d7338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x3d733c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3d733cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3d7340: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3d7340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3d7344: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d7344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d7348: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3d7348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3d734c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d734cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d7350: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3d7350u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3d7354: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d7354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d7358: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d7358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d735c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D735Cu;
    {
        const bool branch_taken_0x3d735c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d735c) {
            ctx->pc = 0x3D7374u;
            goto label_3d7374;
        }
    }
    ctx->pc = 0x3D7364u;
    // 0x3d7364: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d7364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d7368: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3d7368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3d736c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D736Cu;
    {
        const bool branch_taken_0x3d736c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D736Cu;
        // 0x3d7370: 0xa6032b28  sh          $v1, 0x2B28($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d736c) {
            ctx->pc = 0x3D7390u;
            goto label_3d7390;
        }
    }
    ctx->pc = 0x3D7374u;
label_3d7374:
    // 0x3d7374: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d7374u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d7378: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d7378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d737c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d737cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d7380: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3d7380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3d7384: 0x0  nop
    ctx->pc = 0x3d7384u;
    // NOP
    // 0x3d7388: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d7388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d738c: 0xa6032b28  sh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d738cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 3));
label_3d7390:
    // 0x3d7390: 0xc0f57cc  jal         func_3D5F30
    ctx->pc = 0x3D7390u;
    SET_GPR_U32(ctx, 31, 0x3D7398u);
    ctx->pc = 0x3D7394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7390u;
    // 0x3d7394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5F30u, 0x3D7390u, 0x3D7398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7398u;
label_3d7398:
    // 0x3d7398: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x3d7398u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3d739c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d739cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d73a0: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3D73A0u;
    SET_GPR_U32(ctx, 31, 0x3D73A8u);
    ctx->pc = 0x3D73A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D73A0u;
    // 0x3d73a4: 0x7e022b40  sq          $v0, 0x2B40($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 11072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3D73A0u, 0x3D73A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D73A8u;
label_3d73a8:
    // 0x3d73a8: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x3d73a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3d73ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d73acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d73b0: 0xc0aaab4  jal         func_2AAAD0
    ctx->pc = 0x3D73B0u;
    SET_GPR_U32(ctx, 31, 0x3D73B8u);
    ctx->pc = 0x3D73B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D73B0u;
    // 0x3d73b4: 0x26062b40  addiu       $a2, $s0, 0x2B40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAAD0u, 0x3D73B0u, 0x3D73B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D73B8u;
label_3d73b8:
    // 0x3d73b8: 0xae022b50  sw          $v0, 0x2B50($s0)
    ctx->pc = 0x3d73b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11088), GPR_U32(ctx, 2));
    // 0x3d73bc: 0x0  nop
    ctx->pc = 0x3d73bcu;
    // NOP
label_3d73c0:
    // 0x3d73c0: 0x86032b28  lh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d73c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3d73c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d73c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d73c8: 0xa6032b28  sh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d73c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d73cc: 0x86032b28  lh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d73ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3d73d0: 0x1c600039  bgtz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3D73D0u;
    {
        const bool branch_taken_0x3d73d0 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3d73d0) {
            ctx->pc = 0x3D74B8u;
            goto label_3d74b8;
        }
    }
    ctx->pc = 0x3D73D8u;
    // 0x3d73d8: 0x86052b94  lh          $a1, 0x2B94($s0)
    ctx->pc = 0x3d73d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11156)));
    // 0x3d73dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d73dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d73e0: 0x8e072b50  lw          $a3, 0x2B50($s0)
    ctx->pc = 0x3d73e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11088)));
    // 0x3d73e4: 0xc0f5890  jal         func_3D6240
    ctx->pc = 0x3D73E4u;
    SET_GPR_U32(ctx, 31, 0x3D73ECu);
    ctx->pc = 0x3D73E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D73E4u;
    // 0x3d73e8: 0x26062b40  addiu       $a2, $s0, 0x2B40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6240u, 0x3D73E4u, 0x3D73ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D73ECu;
label_3d73ec:
    // 0x3d73ec: 0x86042b94  lh          $a0, 0x2B94($s0)
    ctx->pc = 0x3d73ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11156)));
    // 0x3d73f0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3d73f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d73f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d73f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d73f8: 0xa6042b94  sh          $a0, 0x2B94($s0)
    ctx->pc = 0x3d73f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11156), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d73fc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3D73FCu;
    {
        const bool branch_taken_0x3d73fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D73FCu;
        // 0x3d7400: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d73fc) {
            ctx->pc = 0x3D74B8u;
            goto label_3d74b8;
        }
    }
    ctx->pc = 0x3D7404u;
    // 0x3d7404: 0x0  nop
    ctx->pc = 0x3d7404u;
    // NOP
label_3d7408:
    // 0x3d7408: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3d7408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3d740c: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3d740cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d7410: 0xa6002b28  sh          $zero, 0x2B28($s0)
    ctx->pc = 0x3d7410u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d7414: 0x0  nop
    ctx->pc = 0x3d7414u;
    // NOP
label_3d7418:
    // 0x3d7418: 0x86022b28  lh          $v0, 0x2B28($s0)
    ctx->pc = 0x3d7418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3d741c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d741cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7420: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d7420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d7424: 0xc0f5908  jal         func_3D6420
    ctx->pc = 0x3D7424u;
    SET_GPR_U32(ctx, 31, 0x3D742Cu);
    ctx->pc = 0x3D7428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7424u;
    // 0x3d7428: 0xa6022b28  sh          $v0, 0x2B28($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6420u, 0x3D7424u, 0x3D742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D742Cu;
label_3d742c:
    // 0x3d742c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3d742cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d7430: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d7430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d7434: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3D7434u;
    {
        const bool branch_taken_0x3d7434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7434u;
        // 0x3d7438: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7434) {
            ctx->pc = 0x3D74A8u;
            goto label_3d74a8;
        }
    }
    ctx->pc = 0x3D743Cu;
    // 0x3d743c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D743Cu;
    {
        const bool branch_taken_0x3d743c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d743c) {
            ctx->pc = 0x3D7460u;
            goto label_3d7460;
        }
    }
    ctx->pc = 0x3D7444u;
    // 0x3d7444: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d7444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d7448: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D7448u;
    {
        const bool branch_taken_0x3d7448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d7448) {
            ctx->pc = 0x3D7460u;
            goto label_3d7460;
        }
    }
    ctx->pc = 0x3D7450u;
    // 0x3d7450: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3D7450u;
    {
        const bool branch_taken_0x3d7450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7450) {
            ctx->pc = 0x3D74B8u;
            goto label_3d74b8;
        }
    }
    ctx->pc = 0x3D7458u;
    // 0x3d7458: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3D7458u;
    {
        const bool branch_taken_0x3d7458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7458) {
            ctx->pc = 0x3D74B8u;
            goto label_3d74b8;
        }
    }
    ctx->pc = 0x3D7460u;
label_3d7460:
    // 0x3d7460: 0x86022b94  lh          $v0, 0x2B94($s0)
    ctx->pc = 0x3d7460u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11156)));
    // 0x3d7464: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x3d7464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3d7468: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D7468u;
    {
        const bool branch_taken_0x3d7468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7468) {
            ctx->pc = 0x3D7480u;
            goto label_3d7480;
        }
    }
    ctx->pc = 0x3D7470u;
    // 0x3d7470: 0xa6042b96  sh          $a0, 0x2B96($s0)
    ctx->pc = 0x3d7470u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11158), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d7474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d7474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d7478: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D7478u;
    {
        const bool branch_taken_0x3d7478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7478u;
        // 0x3d747c: 0xa2020780  sb          $v0, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7478) {
            ctx->pc = 0x3D7488u;
            goto label_3d7488;
        }
    }
    ctx->pc = 0x3D7480u;
label_3d7480:
    // 0x3d7480: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3d7480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d7484: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3d7484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
label_3d7488:
    // 0x3d7488: 0xc0f5830  jal         func_3D60C0
    ctx->pc = 0x3D7488u;
    SET_GPR_U32(ctx, 31, 0x3D7490u);
    ctx->pc = 0x3D748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7488u;
    // 0x3d748c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D60C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D60C0u, 0x3D7488u, 0x3D7490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7490u;
label_3d7490:
    // 0x3d7490: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D7490u;
    {
        const bool branch_taken_0x3d7490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7490u;
        // 0x3d7494: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7490) {
            ctx->pc = 0x3D74B8u;
            goto label_3d74b8;
        }
    }
    ctx->pc = 0x3D7498u;
    // 0x3d7498: 0xa6032b96  sh          $v1, 0x2B96($s0)
    ctx->pc = 0x3d7498u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11158), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d749c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D749Cu;
    {
        const bool branch_taken_0x3d749c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D74A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D749Cu;
        // 0x3d74a0: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d749c) {
            ctx->pc = 0x3D74B8u;
            goto label_3d74b8;
        }
    }
    ctx->pc = 0x3D74A4u;
    // 0x3d74a4: 0x0  nop
    ctx->pc = 0x3d74a4u;
    // NOP
label_3d74a8:
    // 0x3d74a8: 0xa6042b96  sh          $a0, 0x2B96($s0)
    ctx->pc = 0x3d74a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11158), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d74ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d74acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d74b0: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3d74b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d74b4: 0x0  nop
    ctx->pc = 0x3d74b4u;
    // NOP
label_3d74b8:
    // 0x3d74b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d74b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d74bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d74bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d74c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D74C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74C0u;
        // 0x3d74c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D74C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D74C8u;
}
