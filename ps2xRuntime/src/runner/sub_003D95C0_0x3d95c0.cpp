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

// Function: sub_003D95C0
// Address: 0x3d95c0 - 0x3d9710
void sub_003D95C0_0x3d95c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D95C0_0x3d95c0");
#endif

    switch (ctx->pc) {
        case 0x3d9644u: goto label_3d9644;
        case 0x3d9678u: goto label_3d9678;
        case 0x3d96fcu: goto label_3d96fc;
        default: break;
    }

    ctx->pc = 0x3d95c0u;

    // 0x3d95c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d95c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d95c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d95c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d95c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d95c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d95cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d95ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d95d0: 0x90852be1  lbu         $a1, 0x2BE1($a0)
    ctx->pc = 0x3d95d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d95d4: 0x10a30044  beq         $a1, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3D95D4u;
    {
        const bool branch_taken_0x3d95d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D95D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D95D4u;
        // 0x3d95d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d95d4) {
            ctx->pc = 0x3D96E8u;
            goto label_3d96e8;
        }
    }
    ctx->pc = 0x3D95DCu;
    // 0x3d95dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d95dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d95e0: 0x10a30023  beq         $a1, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3D95E0u;
    {
        const bool branch_taken_0x3d95e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D95E0u;
        // 0x3d95e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d95e0) {
            ctx->pc = 0x3D9670u;
            goto label_3d9670;
        }
    }
    ctx->pc = 0x3D95E8u;
    // 0x3d95e8: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D95E8u;
    {
        const bool branch_taken_0x3d95e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d95e8) {
            ctx->pc = 0x3D9630u;
            goto label_3d9630;
        }
    }
    ctx->pc = 0x3D95F0u;
    // 0x3d95f0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D95F0u;
    {
        const bool branch_taken_0x3d95f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d95f0) {
            ctx->pc = 0x3D9600u;
            goto label_3d9600;
        }
    }
    ctx->pc = 0x3D95F8u;
    // 0x3d95f8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3D95F8u;
    {
        const bool branch_taken_0x3d95f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d95f8) {
            ctx->pc = 0x3D9700u;
            goto label_3d9700;
        }
    }
    ctx->pc = 0x3D9600u;
label_3d9600:
    // 0x3d9600: 0x240300f8  addiu       $v1, $zero, 0xF8
    ctx->pc = 0x3d9600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x3d9604: 0xa2032be4  sb          $v1, 0x2BE4($s0)
    ctx->pc = 0x3d9604u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9608: 0xa2002be5  sb          $zero, 0x2BE5($s0)
    ctx->pc = 0x3d9608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d960c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3d960cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9610: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d9610u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9614: 0xa6002be6  sh          $zero, 0x2BE6($s0)
    ctx->pc = 0x3d9614u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9618: 0xa6002bea  sh          $zero, 0x2BEA($s0)
    ctx->pc = 0x3d9618u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d961c: 0xa6002be8  sh          $zero, 0x2BE8($s0)
    ctx->pc = 0x3d961cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9620: 0x92032be1  lbu         $v1, 0x2BE1($s0)
    ctx->pc = 0x3d9620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d9624: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9628: 0xa2032be1  sb          $v1, 0x2BE1($s0)
    ctx->pc = 0x3d9628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d962c: 0x0  nop
    ctx->pc = 0x3d962cu;
    // NOP
label_3d9630:
    // 0x3d9630: 0x92032be3  lbu         $v1, 0x2BE3($s0)
    ctx->pc = 0x3d9630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11235)));
    // 0x3d9634: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x3D9634u;
    {
        const bool branch_taken_0x3d9634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9634u;
        // 0x3d9638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9634) {
            ctx->pc = 0x3D9700u;
            goto label_3d9700;
        }
    }
    ctx->pc = 0x3D963Cu;
    // 0x3d963c: 0xc0f6dd0  jal         func_3DB740
    ctx->pc = 0x3D963Cu;
    SET_GPR_U32(ctx, 31, 0x3D9644u);
    ctx->pc = 0x3D9640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D963Cu;
    // 0x3d9640: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB740u, 0x3D963Cu, 0x3D9644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9644u;
label_3d9644:
    // 0x3d9644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d9644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9648: 0xa2022be4  sb          $v0, 0x2BE4($s0)
    ctx->pc = 0x3d9648u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d964c: 0xa2002be5  sb          $zero, 0x2BE5($s0)
    ctx->pc = 0x3d964cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9650: 0xa2020780  sb          $v0, 0x780($s0)
    ctx->pc = 0x3d9650u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d9654: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d9654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9658: 0xa6002be6  sh          $zero, 0x2BE6($s0)
    ctx->pc = 0x3d9658u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d965c: 0xa6002bea  sh          $zero, 0x2BEA($s0)
    ctx->pc = 0x3d965cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9660: 0xa6002be8  sh          $zero, 0x2BE8($s0)
    ctx->pc = 0x3d9660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9664: 0x92022be1  lbu         $v0, 0x2BE1($s0)
    ctx->pc = 0x3d9664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d9668: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d9668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d966c: 0xa2022be1  sb          $v0, 0x2BE1($s0)
    ctx->pc = 0x3d966cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 2));
label_3d9670:
    // 0x3d9670: 0xc0f6e08  jal         func_3DB820
    ctx->pc = 0x3D9670u;
    SET_GPR_U32(ctx, 31, 0x3D9678u);
    ctx->pc = 0x3D9674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9670u;
    // 0x3d9674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB820u, 0x3D9670u, 0x3D9678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9678u;
label_3d9678:
    // 0x3d9678: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3D9678u;
    {
        const bool branch_taken_0x3d9678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9678) {
            ctx->pc = 0x3D9700u;
            goto label_3d9700;
        }
    }
    ctx->pc = 0x3D9680u;
    // 0x3d9680: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3d9680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d9684: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3d9684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3d9688: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3d9688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3d968c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3d968cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3d9690: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d9690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d9694: 0x0  nop
    ctx->pc = 0x3d9694u;
    // NOP
    // 0x3d9698: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3d9698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3d969c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d969cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d96a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D96A0u;
    {
        const bool branch_taken_0x3d96a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d96a0) {
            ctx->pc = 0x3D96B8u;
            goto label_3d96b8;
        }
    }
    ctx->pc = 0x3D96A8u;
    // 0x3d96a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d96a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d96ac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3d96acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3d96b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D96B0u;
    {
        const bool branch_taken_0x3d96b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D96B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D96B0u;
        // 0x3d96b4: 0xae042bf8  sw          $a0, 0x2BF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11256), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d96b0) {
            ctx->pc = 0x3D96D4u;
            goto label_3d96d4;
        }
    }
    ctx->pc = 0x3D96B8u;
label_3d96b8:
    // 0x3d96b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d96b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d96bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d96bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d96c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d96c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d96c4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3d96c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3d96c8: 0x0  nop
    ctx->pc = 0x3d96c8u;
    // NOP
    // 0x3d96cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d96ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3d96d0: 0xae042bf8  sw          $a0, 0x2BF8($s0)
    ctx->pc = 0x3d96d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11256), GPR_U32(ctx, 4));
label_3d96d4:
    // 0x3d96d4: 0x92032be1  lbu         $v1, 0x2BE1($s0)
    ctx->pc = 0x3d96d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d96d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d96d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d96dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D96DCu;
    {
        const bool branch_taken_0x3d96dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D96E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D96DCu;
        // 0x3d96e0: 0xa2032be1  sb          $v1, 0x2BE1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d96dc) {
            ctx->pc = 0x3D9700u;
            goto label_3d9700;
        }
    }
    ctx->pc = 0x3D96E4u;
    // 0x3d96e4: 0x0  nop
    ctx->pc = 0x3d96e4u;
    // NOP
label_3d96e8:
    // 0x3d96e8: 0x8e032bf8  lw          $v1, 0x2BF8($s0)
    ctx->pc = 0x3d96e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11256)));
    // 0x3d96ec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D96ECu;
    {
        const bool branch_taken_0x3d96ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d96ec) {
            ctx->pc = 0x3D9700u;
            goto label_3d9700;
        }
    }
    ctx->pc = 0x3D96F4u;
    // 0x3d96f4: 0xc0f6180  jal         func_3D8600
    ctx->pc = 0x3D96F4u;
    SET_GPR_U32(ctx, 31, 0x3D96FCu);
    ctx->pc = 0x3D8600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8600u, 0x3D96F4u, 0x3D96FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D96FCu;
label_3d96fc:
    // 0x3d96fc: 0x0  nop
    ctx->pc = 0x3d96fcu;
    // NOP
label_3d9700:
    // 0x3d9700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d9700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d9704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d9704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9708: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9708u;
        // 0x3d970c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9710u;
}
