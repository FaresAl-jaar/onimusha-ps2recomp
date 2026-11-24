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

// Function: sub_00191140
// Address: 0x191140 - 0x1918ac
void sub_00191140_0x191140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191140_0x191140");
#endif

    switch (ctx->pc) {
        case 0x1911a8u: goto label_1911a8;
        case 0x191238u: goto label_191238;
        case 0x1912a0u: goto label_1912a0;
        case 0x19130cu: goto label_19130c;
        case 0x19136cu: goto label_19136c;
        case 0x191488u: goto label_191488;
        case 0x1914f0u: goto label_1914f0;
        case 0x1915b4u: goto label_1915b4;
        case 0x1915e8u: goto label_1915e8;
        case 0x191610u: goto label_191610;
        case 0x191660u: goto label_191660;
        case 0x1916d4u: goto label_1916d4;
        case 0x191708u: goto label_191708;
        case 0x191734u: goto label_191734;
        case 0x1917b4u: goto label_1917b4;
        case 0x1917ccu: goto label_1917cc;
        case 0x1917f8u: goto label_1917f8;
        case 0x191830u: goto label_191830;
        case 0x191860u: goto label_191860;
        default: break;
    }

    ctx->pc = 0x191140u;

    // 0x191140: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x191140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x191144: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x191144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x191148: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x191148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x19114c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x19114cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x191150: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x191150u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191154: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x191154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x191158: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x191158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x19115c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x19115cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191160: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x191160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x191164: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x191164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x191168: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x191168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19116c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19116cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x191170: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x191170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x191174: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x191174u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x191178: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x191178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x19117c: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x19117cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x191180: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191180u;
    {
        const bool branch_taken_0x191180 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x191184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191180u;
        // 0x191184: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191180) {
            ctx->pc = 0x191190u;
            goto label_191190;
        }
    }
    ctx->pc = 0x191188u;
    // 0x191188: 0x100001bb  b           . + 4 + (0x1BB << 2)
    ctx->pc = 0x191188u;
    {
        const bool branch_taken_0x191188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191188u;
        // 0x19118c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191188) {
            ctx->pc = 0x191878u;
            goto label_191878;
        }
    }
    ctx->pc = 0x191190u;
label_191190:
    // 0x191190: 0x8e170000  lw          $s7, 0x0($s0)
    ctx->pc = 0x191190u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x191194: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x191194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191198: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x191198u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x19119c: 0x102000e4  beqz        $at, . + 4 + (0xE4 << 2)
    ctx->pc = 0x19119Cu;
    {
        const bool branch_taken_0x19119c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1911A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19119Cu;
        // 0x1911a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19119c) {
            ctx->pc = 0x191530u;
            goto label_191530;
        }
    }
    ctx->pc = 0x1911A4u;
    // 0x1911a4: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1911a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1911a8:
    // 0x1911a8: 0x92a30011  lbu         $v1, 0x11($s5)
    ctx->pc = 0x1911a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 17)));
    // 0x1911ac: 0x106000dc  beqz        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x1911ACu;
    {
        const bool branch_taken_0x1911ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1911B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911ACu;
        // 0x1911b0: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911ac) {
            ctx->pc = 0x191520u;
            goto label_191520;
        }
    }
    ctx->pc = 0x1911B4u;
    // 0x1911b4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1911b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1911b8: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x1911b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1911bc: 0x102000d2  beqz        $at, . + 4 + (0xD2 << 2)
    ctx->pc = 0x1911BCu;
    {
        const bool branch_taken_0x1911bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1911C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911BCu;
        // 0x1911c0: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911bc) {
            ctx->pc = 0x191508u;
            goto label_191508;
        }
    }
    ctx->pc = 0x1911C4u;
    // 0x1911c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1911c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1911c8: 0x24845760  addiu       $a0, $a0, 0x5760
    ctx->pc = 0x1911c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22368));
    // 0x1911cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1911ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1911d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1911d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1911d4: 0x600008  jr          $v1
    ctx->pc = 0x1911D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1911E0u: goto label_1911e0;
            case 0x191248u: goto label_191248;
            case 0x1912B0u: goto label_1912b0;
            case 0x191380u: goto label_191380;
            case 0x191418u: goto label_191418;
            case 0x191500u: goto label_191500;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1911D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1911DCu;
    // 0x1911dc: 0x0  nop
    ctx->pc = 0x1911dcu;
    // NOP
label_1911e0:
    // 0x1911e0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1911e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1911e4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1911e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1911e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1911e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1911ec: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1911ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1911f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1911f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1911f4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1911F4u;
    {
        const bool branch_taken_0x1911f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1911f4) {
            ctx->pc = 0x19120Cu;
            goto label_19120c;
        }
    }
    ctx->pc = 0x1911FCu;
    // 0x1911fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1911fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191200: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x191200u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x191204: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x191204u;
    {
        const bool branch_taken_0x191204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191204u;
        // 0x191208: 0x90660008  lbu         $a2, 0x8($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191204) {
            ctx->pc = 0x191228u;
            goto label_191228;
        }
    }
    ctx->pc = 0x19120Cu;
label_19120c:
    // 0x19120c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19120cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x191210: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x191210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x191214: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191218: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x191218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19121c: 0x0  nop
    ctx->pc = 0x19121cu;
    // NOP
    // 0x191220: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191220u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191224: 0x90660008  lbu         $a2, 0x8($v1)
    ctx->pc = 0x191224u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_191228:
    // 0x191228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19122c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x19122cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191230: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x191230u;
    SET_GPR_U32(ctx, 31, 0x191238u);
    ctx->pc = 0x191234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191230u;
    // 0x191234: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x191230u, 0x191238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191238u;
label_191238:
    // 0x191238: 0x44000b9  bltz        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x191238u;
    {
        const bool branch_taken_0x191238 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x191238) {
            ctx->pc = 0x191520u;
            goto label_191520;
        }
    }
    ctx->pc = 0x191240u;
    // 0x191240: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x191240u;
    {
        const bool branch_taken_0x191240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191240) {
            ctx->pc = 0x191510u;
            goto label_191510;
        }
    }
    ctx->pc = 0x191248u;
label_191248:
    // 0x191248: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x191248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19124c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x19124cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x191250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191254: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x191254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191258: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x191258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19125c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19125Cu;
    {
        const bool branch_taken_0x19125c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19125c) {
            ctx->pc = 0x191274u;
            goto label_191274;
        }
    }
    ctx->pc = 0x191264u;
    // 0x191264: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191264u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191268: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x191268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19126c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19126Cu;
    {
        const bool branch_taken_0x19126c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19126Cu;
        // 0x191270: 0x90660008  lbu         $a2, 0x8($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19126c) {
            ctx->pc = 0x191290u;
            goto label_191290;
        }
    }
    ctx->pc = 0x191274u;
label_191274:
    // 0x191274: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x191274u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x191278: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x191278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19127c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19127cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191280: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x191280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x191284: 0x0  nop
    ctx->pc = 0x191284u;
    // NOP
    // 0x191288: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191288u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x19128c: 0x90660008  lbu         $a2, 0x8($v1)
    ctx->pc = 0x19128cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_191290:
    // 0x191290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191294: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x191294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191298: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x191298u;
    SET_GPR_U32(ctx, 31, 0x1912A0u);
    ctx->pc = 0x19129Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191298u;
    // 0x19129c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x191298u, 0x1912A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1912A0u;
label_1912a0:
    // 0x1912a0: 0x440009f  bltz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x1912A0u;
    {
        const bool branch_taken_0x1912a0 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1912a0) {
            ctx->pc = 0x191520u;
            goto label_191520;
        }
    }
    ctx->pc = 0x1912A8u;
    // 0x1912a8: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1912A8u;
    {
        const bool branch_taken_0x1912a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1912a8) {
            ctx->pc = 0x191510u;
            goto label_191510;
        }
    }
    ctx->pc = 0x1912B0u;
label_1912b0:
    // 0x1912b0: 0x8cb20004  lw          $s2, 0x4($a1)
    ctx->pc = 0x1912b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1912b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1912b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1912b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1912b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1912bc: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1912bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1912c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1912c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1912c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1912C4u;
    {
        const bool branch_taken_0x1912c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1912c4) {
            ctx->pc = 0x1912DCu;
            goto label_1912dc;
        }
    }
    ctx->pc = 0x1912CCu;
    // 0x1912cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1912ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1912d0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1912d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1912d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1912D4u;
    {
        const bool branch_taken_0x1912d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1912D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912D4u;
        // 0x1912d8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912d4) {
            ctx->pc = 0x1912F8u;
            goto label_1912f8;
        }
    }
    ctx->pc = 0x1912DCu;
label_1912dc:
    // 0x1912dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1912dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1912e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1912e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1912e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1912e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1912e8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1912e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1912ec: 0x0  nop
    ctx->pc = 0x1912ecu;
    // NOP
    // 0x1912f0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1912f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1912f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1912f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1912f8:
    // 0x1912f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1912f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1912fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191300: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x191300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191304: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x191304u;
    SET_GPR_U32(ctx, 31, 0x19130Cu);
    ctx->pc = 0x191308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191304u;
    // 0x191308: 0x24470080  addiu       $a3, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x191304u, 0x19130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19130Cu;
label_19130c:
    // 0x19130c: 0x4400084  bltz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x19130Cu;
    {
        const bool branch_taken_0x19130c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x19130c) {
            ctx->pc = 0x191520u;
            goto label_191520;
        }
    }
    ctx->pc = 0x191314u;
    // 0x191314: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x191314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191318: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x191318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x19131c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19131cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191320: 0x0  nop
    ctx->pc = 0x191320u;
    // NOP
    // 0x191324: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x191324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191328: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x191328u;
    {
        const bool branch_taken_0x191328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191328) {
            ctx->pc = 0x191340u;
            goto label_191340;
        }
    }
    ctx->pc = 0x191330u;
    // 0x191330: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191334: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x191334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x191338: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x191338u;
    {
        const bool branch_taken_0x191338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191338u;
        // 0x19133c: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191338) {
            ctx->pc = 0x19135Cu;
            goto label_19135c;
        }
    }
    ctx->pc = 0x191340u;
label_191340:
    // 0x191340: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x191340u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x191344: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x191344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x191348: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191348u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19134c: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x19134cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x191350: 0x0  nop
    ctx->pc = 0x191350u;
    // NOP
    // 0x191354: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191354u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191358: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x191358u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19135c:
    // 0x19135c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19135cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191360: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191364: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x191364u;
    SET_GPR_U32(ctx, 31, 0x19136Cu);
    ctx->pc = 0x191368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191364u;
    // 0x191368: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x191364u, 0x19136Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19136Cu;
label_19136c:
    // 0x19136c: 0x440006c  bltz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x19136Cu;
    {
        const bool branch_taken_0x19136c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x19136c) {
            ctx->pc = 0x191520u;
            goto label_191520;
        }
    }
    ctx->pc = 0x191374u;
    // 0x191374: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x191374u;
    {
        const bool branch_taken_0x191374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191374u;
        // 0x191378: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191374) {
            ctx->pc = 0x191510u;
            goto label_191510;
        }
    }
    ctx->pc = 0x19137Cu;
    // 0x19137c: 0x0  nop
    ctx->pc = 0x19137cu;
    // NOP
label_191380:
    // 0x191380: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x191380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x191384: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x191384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191388: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x191388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19138c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x19138cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191390: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x191390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191394: 0x45000062  bc1f        . + 4 + (0x62 << 2)
    ctx->pc = 0x191394u;
    {
        const bool branch_taken_0x191394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191394) {
            ctx->pc = 0x191520u;
            goto label_191520;
        }
    }
    ctx->pc = 0x19139Cu;
    // 0x19139c: 0xc4a00044  lwc1        $f0, 0x44($a1)
    ctx->pc = 0x19139cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1913a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1913a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1913a4: 0x4501005e  bc1t        . + 4 + (0x5E << 2)
    ctx->pc = 0x1913A4u;
    {
        const bool branch_taken_0x1913a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1913a4) {
            ctx->pc = 0x191520u;
            goto label_191520;
        }
    }
    ctx->pc = 0x1913ACu;
    // 0x1913ac: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1913acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1913b0: 0x8464000a  lh          $a0, 0xA($v1)
    ctx->pc = 0x1913b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1913b4: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1913b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1913b8: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x1913b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1913bc: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x1913bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1913c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1913c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1913c4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1913c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x1913c8: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1913c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1913cc: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x1913ccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1913d0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1913d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1913d4: 0x4604209c  madd.s      $f2, $f4, $f4
    ctx->pc = 0x1913d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1913d8: 0x46020084  c1          0x20084
    ctx->pc = 0x1913d8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[2]);
    // 0x1913dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1913dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1913e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1913e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1913e4: 0x0  nop
    ctx->pc = 0x1913e4u;
    // NOP
    // 0x1913e8: 0x0  nop
    ctx->pc = 0x1913e8u;
    // NOP
    // 0x1913ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1913ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1913f0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1913F0u;
    {
        const bool branch_taken_0x1913f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1913f0) {
            ctx->pc = 0x191400u;
            goto label_191400;
        }
    }
    ctx->pc = 0x1913F8u;
    // 0x1913f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1913F8u;
    {
        const bool branch_taken_0x1913f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1913f8) {
            ctx->pc = 0x191404u;
            goto label_191404;
        }
    }
    ctx->pc = 0x191400u;
label_191400:
    // 0x191400: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x191400u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_191404:
    // 0x191404: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x191404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191408: 0x45000045  bc1f        . + 4 + (0x45 << 2)
    ctx->pc = 0x191408u;
    {
        const bool branch_taken_0x191408 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191408) {
            ctx->pc = 0x191520u;
            goto label_191520;
        }
    }
    ctx->pc = 0x191410u;
    // 0x191410: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x191410u;
    {
        const bool branch_taken_0x191410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191410u;
        // 0x191414: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191410) {
            ctx->pc = 0x191510u;
            goto label_191510;
        }
    }
    ctx->pc = 0x191418u;
label_191418:
    // 0x191418: 0x938286d0  lbu         $v0, -0x7930($gp)
    ctx->pc = 0x191418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x19141c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19141cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191420: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x191420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x191424: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x191424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x191428: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x191428u;
    {
        const bool branch_taken_0x191428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191428u;
        // 0x19142c: 0x8cb20004  lw          $s2, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191428) {
            ctx->pc = 0x191490u;
            goto label_191490;
        }
    }
    ctx->pc = 0x191430u;
    // 0x191430: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x191430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191434: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x191434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x191438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19143c: 0x0  nop
    ctx->pc = 0x19143cu;
    // NOP
    // 0x191440: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x191440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191444: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x191444u;
    {
        const bool branch_taken_0x191444 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191444) {
            ctx->pc = 0x19145Cu;
            goto label_19145c;
        }
    }
    ctx->pc = 0x19144Cu;
    // 0x19144c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19144cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191450: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x191450u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x191454: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x191454u;
    {
        const bool branch_taken_0x191454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191454u;
        // 0x191458: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191454) {
            ctx->pc = 0x191478u;
            goto label_191478;
        }
    }
    ctx->pc = 0x19145Cu;
label_19145c:
    // 0x19145c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19145cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x191460: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x191460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x191464: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191464u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191468: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x191468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19146c: 0x0  nop
    ctx->pc = 0x19146cu;
    // NOP
    // 0x191470: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191470u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191474: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x191474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_191478:
    // 0x191478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19147c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19147cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191480: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x191480u;
    SET_GPR_U32(ctx, 31, 0x191488u);
    ctx->pc = 0x191484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191480u;
    // 0x191484: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x191480u, 0x191488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191488u;
label_191488:
    // 0x191488: 0x4400025  bltz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x191488u;
    {
        const bool branch_taken_0x191488 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x191488) {
            ctx->pc = 0x191520u;
            goto label_191520;
        }
    }
    ctx->pc = 0x191490u;
label_191490:
    // 0x191490: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x191490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x191494: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x191494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19149c: 0x0  nop
    ctx->pc = 0x19149cu;
    // NOP
    // 0x1914a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1914a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1914a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1914A4u;
    {
        const bool branch_taken_0x1914a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1914a4) {
            ctx->pc = 0x1914BCu;
            goto label_1914bc;
        }
    }
    ctx->pc = 0x1914ACu;
    // 0x1914ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1914acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1914b0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1914b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1914b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1914B4u;
    {
        const bool branch_taken_0x1914b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1914B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914B4u;
        // 0x1914b8: 0x92430008  lbu         $v1, 0x8($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1914b4) {
            ctx->pc = 0x1914D8u;
            goto label_1914d8;
        }
    }
    ctx->pc = 0x1914BCu;
label_1914bc:
    // 0x1914bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1914bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1914c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1914c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1914c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1914c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1914c8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1914c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1914cc: 0x0  nop
    ctx->pc = 0x1914ccu;
    // NOP
    // 0x1914d0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1914d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1914d4: 0x92430008  lbu         $v1, 0x8($s2)
    ctx->pc = 0x1914d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_1914d8:
    // 0x1914d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1914d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1914dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1914dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1914e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1914e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1914e4: 0x2466fffe  addiu       $a2, $v1, -0x2
    ctx->pc = 0x1914e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1914e8: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x1914E8u;
    SET_GPR_U32(ctx, 31, 0x1914F0u);
    ctx->pc = 0x1914ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1914E8u;
    // 0x1914ec: 0x24470080  addiu       $a3, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x1914E8u, 0x1914F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1914F0u;
label_1914f0:
    // 0x1914f0: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1914F0u;
    {
        const bool branch_taken_0x1914f0 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1914f0) {
            ctx->pc = 0x191520u;
            goto label_191520;
        }
    }
    ctx->pc = 0x1914F8u;
    // 0x1914f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1914F8u;
    {
        const bool branch_taken_0x1914f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1914FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914F8u;
        // 0x1914fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1914f8) {
            ctx->pc = 0x191510u;
            goto label_191510;
        }
    }
    ctx->pc = 0x191500u;
label_191500:
    // 0x191500: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x191500u;
    {
        const bool branch_taken_0x191500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191500u;
        // 0x191504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191500) {
            ctx->pc = 0x191878u;
            goto label_191878;
        }
    }
    ctx->pc = 0x191508u;
label_191508:
    // 0x191508: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x191508u;
    {
        const bool branch_taken_0x191508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191508u;
        // 0x19150c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191508) {
            ctx->pc = 0x191878u;
            goto label_191878;
        }
    }
    ctx->pc = 0x191510u;
label_191510:
    // 0x191510: 0xafb400bc  sw          $s4, 0xBC($sp)
    ctx->pc = 0x191510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 20));
    // 0x191514: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x191514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x191518: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x191518u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x19151c: 0x0  nop
    ctx->pc = 0x19151cu;
    // NOP
label_191520:
    // 0x191520: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x191520u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x191524: 0x297182a  slt         $v1, $s4, $s7
    ctx->pc = 0x191524u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x191528: 0x1460ff1f  bnez        $v1, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x191528u;
    {
        const bool branch_taken_0x191528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191528u;
        // 0x19152c: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191528) {
            ctx->pc = 0x1911A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1911a8;
        }
    }
    ctx->pc = 0x191530u;
label_191530:
    // 0x191530: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x191530u;
    {
        const bool branch_taken_0x191530 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x191534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191530u;
        // 0x191534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191530) {
            ctx->pc = 0x191540u;
            goto label_191540;
        }
    }
    ctx->pc = 0x191538u;
    // 0x191538: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x191538u;
    {
        const bool branch_taken_0x191538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191538) {
            ctx->pc = 0x191878u;
            goto label_191878;
        }
    }
    ctx->pc = 0x191540u;
label_191540:
    // 0x191540: 0x93a200bc  lbu         $v0, 0xBC($sp)
    ctx->pc = 0x191540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x191544: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x191544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191548: 0x93a200b8  lbu         $v0, 0xB8($sp)
    ctx->pc = 0x191548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19154c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19154cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191550: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x191550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x191554: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x191554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x191558: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x191558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x19155c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19155cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x191560: 0x1062009d  beq         $v1, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x191560u;
    {
        const bool branch_taken_0x191560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x191564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191560u;
        // 0x191564: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191560) {
            ctx->pc = 0x1917D8u;
            goto label_1917d8;
        }
    }
    ctx->pc = 0x191568u;
    // 0x191568: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x191568u;
    {
        const bool branch_taken_0x191568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x191568) {
            ctx->pc = 0x191740u;
            goto label_191740;
        }
    }
    ctx->pc = 0x191570u;
    // 0x191570: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191574: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x191574u;
    {
        const bool branch_taken_0x191574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x191578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191574u;
        // 0x191578: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191574) {
            ctx->pc = 0x1916C0u;
            goto label_1916c0;
        }
    }
    ctx->pc = 0x19157Cu;
    // 0x19157c: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x19157Cu;
    {
        const bool branch_taken_0x19157c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19157c) {
            ctx->pc = 0x191618u;
            goto label_191618;
        }
    }
    ctx->pc = 0x191584u;
    // 0x191584: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x191584u;
    {
        const bool branch_taken_0x191584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191584) {
            ctx->pc = 0x191598u;
            goto label_191598;
        }
    }
    ctx->pc = 0x19158Cu;
    // 0x19158c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x19158Cu;
    {
        const bool branch_taken_0x19158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19158c) {
            ctx->pc = 0x191860u;
            goto label_191860;
        }
    }
    ctx->pc = 0x191594u;
    // 0x191594: 0x0  nop
    ctx->pc = 0x191594u;
    // NOP
label_191598:
    // 0x191598: 0x8c940014  lw          $s4, 0x14($a0)
    ctx->pc = 0x191598u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x19159c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x19159cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1915a0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1915a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1915a4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1915a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1915a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1915a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915ac: 0xc065094  jal         func_194250
    ctx->pc = 0x1915ACu;
    SET_GPR_U32(ctx, 31, 0x1915B4u);
    ctx->pc = 0x1915B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1915ACu;
    // 0x1915b0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194250u, 0x1915ACu, 0x1915B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1915B4u;
label_1915b4:
    // 0x1915b4: 0x9289000b  lbu         $t1, 0xB($s4)
    ctx->pc = 0x1915b4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 11)));
    // 0x1915b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1915b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1915bc: 0x868a000e  lh          $t2, 0xE($s4)
    ctx->pc = 0x1915bcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x1915c0: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x1915c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1915c4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1915c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1915c8: 0x327300ff  andi        $s3, $s3, 0xFF
    ctx->pc = 0x1915c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1915cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1915ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1915d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915d4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1915d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915d8: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x1915d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1915dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1915dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1915e0: 0xc064c4c  jal         func_193130
    ctx->pc = 0x1915E0u;
    SET_GPR_U32(ctx, 31, 0x1915E8u);
    ctx->pc = 0x1915E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1915E0u;
    // 0x1915e4: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x1915E0u, 0x1915E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1915E8u;
label_1915e8:
    // 0x1915e8: 0x9289000a  lbu         $t1, 0xA($s4)
    ctx->pc = 0x1915e8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x1915ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1915ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915f0: 0x928a0008  lbu         $t2, 0x8($s4)
    ctx->pc = 0x1915f0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1915f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1915f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915f8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1915f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1915fc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1915fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191600: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x191600u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x191604: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x191604u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191608: 0xc064d04  jal         func_193410
    ctx->pc = 0x191608u;
    SET_GPR_U32(ctx, 31, 0x191610u);
    ctx->pc = 0x19160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191608u;
    // 0x19160c: 0x27a800e0  addiu       $t0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193410u, 0x191608u, 0x191610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191610u;
label_191610:
    // 0x191610: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x191610u;
    {
        const bool branch_taken_0x191610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191610) {
            ctx->pc = 0x191860u;
            goto label_191860;
        }
    }
    ctx->pc = 0x191618u;
label_191618:
    // 0x191618: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x191618u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x19161c: 0x27b200d8  addiu       $s2, $sp, 0xD8
    ctx->pc = 0x19161cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x191620: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191624: 0xaec000ac  sw          $zero, 0xAC($s6)
    ctx->pc = 0x191624u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 172), GPR_U32(ctx, 0));
    // 0x191628: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x191628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x19162c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x19162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191630: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x191630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191634: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x191634u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x191638: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x191638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x19163c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x19163cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x191640: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x191640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191644: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x191644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191648: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x191648u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19164c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x19164cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x191650: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x191650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x191654: 0x8606001c  lh          $a2, 0x1C($s0)
    ctx->pc = 0x191654u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x191658: 0xc052550  jal         func_149540
    ctx->pc = 0x191658u;
    SET_GPR_U32(ctx, 31, 0x191660u);
    ctx->pc = 0x19165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191658u;
    // 0x19165c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149540u, 0x191658u, 0x191660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191660u;
label_191660:
    // 0x191660: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x191660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191664: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191668: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x191668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19166c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19166cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191670: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x191670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x191674: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x191674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191678: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x191678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19167c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19167cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191680: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x191680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x191684: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x191684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191688: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x191688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19168c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19168cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191690: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x191690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x191694: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x191694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x191698: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x191698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19169c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x19169cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1916a0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1916a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1916a4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1916a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1916a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1916a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1916ac: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1916acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1916b0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1916b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1916b4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1916b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1916b8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1916B8u;
    {
        const bool branch_taken_0x1916b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1916BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916B8u;
        // 0x1916bc: 0xafa200fc  sw          $v0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1916b8) {
            ctx->pc = 0x191860u;
            goto label_191860;
        }
    }
    ctx->pc = 0x1916C0u;
label_1916c0:
    // 0x1916c0: 0x8c920014  lw          $s2, 0x14($a0)
    ctx->pc = 0x1916c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1916c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1916c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1916c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1916c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1916cc: 0xc065094  jal         func_194250
    ctx->pc = 0x1916CCu;
    SET_GPR_U32(ctx, 31, 0x1916D4u);
    ctx->pc = 0x1916D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1916CCu;
    // 0x1916d0: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194250u, 0x1916CCu, 0x1916D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1916D4u;
label_1916d4:
    // 0x1916d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1916d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1916d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1916d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1916dc: 0x9249000b  lbu         $t1, 0xB($s2)
    ctx->pc = 0x1916dcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x1916e0: 0x327300ff  andi        $s3, $s3, 0xFF
    ctx->pc = 0x1916e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1916e4: 0x864a000e  lh          $t2, 0xE($s2)
    ctx->pc = 0x1916e4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1916e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1916e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1916ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1916ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1916f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1916f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1916f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1916f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1916f8: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x1916f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1916fc: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x1916fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191700: 0xc064c4c  jal         func_193130
    ctx->pc = 0x191700u;
    SET_GPR_U32(ctx, 31, 0x191708u);
    ctx->pc = 0x191704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191700u;
    // 0x191704: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x191700u, 0x191708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191708u;
label_191708:
    // 0x191708: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x191708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19170c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19170cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191710: 0x9249000a  lbu         $t1, 0xA($s2)
    ctx->pc = 0x191710u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x191714: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x191714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191718: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x191718u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19171c: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x19171cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x191720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191724: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x191724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x191728: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x191728u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19172c: 0xc064d04  jal         func_193410
    ctx->pc = 0x19172Cu;
    SET_GPR_U32(ctx, 31, 0x191734u);
    ctx->pc = 0x191730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19172Cu;
    // 0x191730: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193410u, 0x19172Cu, 0x191734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191734u;
label_191734:
    // 0x191734: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x191734u;
    {
        const bool branch_taken_0x191734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191734) {
            ctx->pc = 0x191860u;
            goto label_191860;
        }
    }
    ctx->pc = 0x19173Cu;
    // 0x19173c: 0x0  nop
    ctx->pc = 0x19173cu;
    // NOP
label_191740:
    // 0x191740: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x191740u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x191744: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x191744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191748: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x191748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19174c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19174cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x191750: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x191750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191754: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x191754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191758: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x191758u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x19175c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x19175cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x191760: 0x46011503  div.s       $f20, $f2, $f1
    ctx->pc = 0x191760u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x191764: 0x0  nop
    ctx->pc = 0x191764u;
    // NOP
    // 0x191768: 0x0  nop
    ctx->pc = 0x191768u;
    // NOP
    // 0x19176c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x19176cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191770: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x191770u;
    {
        const bool branch_taken_0x191770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191770) {
            ctx->pc = 0x191780u;
            goto label_191780;
        }
    }
    ctx->pc = 0x191778u;
    // 0x191778: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x191778u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x19177c: 0x0  nop
    ctx->pc = 0x19177cu;
    // NOP
label_191780:
    // 0x191780: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191788: 0x0  nop
    ctx->pc = 0x191788u;
    // NOP
    // 0x19178c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x19178cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191790: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x191790u;
    {
        const bool branch_taken_0x191790 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191790) {
            ctx->pc = 0x1917A0u;
            goto label_1917a0;
        }
    }
    ctx->pc = 0x191798u;
    // 0x191798: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x191798u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x19179c: 0x0  nop
    ctx->pc = 0x19179cu;
    // NOP
label_1917a0:
    // 0x1917a0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1917a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1917a4: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1917a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1917a8: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x1917a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1917ac: 0xc0414c0  jal         func_105300
    ctx->pc = 0x1917ACu;
    SET_GPR_U32(ctx, 31, 0x1917B4u);
    ctx->pc = 0x1917B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917ACu;
    // 0x1917b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x1917ACu, 0x1917B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917B4u;
label_1917b4:
    // 0x1917b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1917b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1917b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1917b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1917bc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1917bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1917c0: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x1917c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1917c4: 0xc0414c0  jal         func_105300
    ctx->pc = 0x1917C4u;
    SET_GPR_U32(ctx, 31, 0x1917CCu);
    ctx->pc = 0x1917C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917C4u;
    // 0x1917c8: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x1917C4u, 0x1917CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917CCu;
label_1917cc:
    // 0x1917cc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1917CCu;
    {
        const bool branch_taken_0x1917cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1917cc) {
            ctx->pc = 0x191860u;
            goto label_191860;
        }
    }
    ctx->pc = 0x1917D4u;
    // 0x1917d4: 0x0  nop
    ctx->pc = 0x1917d4u;
    // NOP
label_1917d8:
    // 0x1917d8: 0x8c940014  lw          $s4, 0x14($a0)
    ctx->pc = 0x1917d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1917dc: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1917dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1917e0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1917e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1917e4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1917e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1917e8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1917e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1917ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1917ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917f0: 0xc065094  jal         func_194250
    ctx->pc = 0x1917F0u;
    SET_GPR_U32(ctx, 31, 0x1917F8u);
    ctx->pc = 0x1917F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917F0u;
    // 0x1917f4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194250u, 0x1917F0u, 0x1917F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917F8u;
label_1917f8:
    // 0x1917f8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1917f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1917fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1917fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x191800: 0x9289000b  lbu         $t1, 0xB($s4)
    ctx->pc = 0x191800u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 11)));
    // 0x191804: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x191804u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x191808: 0x868a000e  lh          $t2, 0xE($s4)
    ctx->pc = 0x191808u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x19180c: 0x327300ff  andi        $s3, $s3, 0xFF
    ctx->pc = 0x19180cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x191810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191814: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x191814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191818: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x191818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19181c: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x19181cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x191820: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x191820u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x191824: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x191824u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191828: 0xc064c4c  jal         func_193130
    ctx->pc = 0x191828u;
    SET_GPR_U32(ctx, 31, 0x191830u);
    ctx->pc = 0x19182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191828u;
    // 0x19182c: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x191828u, 0x191830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191830u;
label_191830:
    // 0x191830: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x191830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x191834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191838: 0x92820008  lbu         $v0, 0x8($s4)
    ctx->pc = 0x191838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x19183c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19183cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191840: 0x9289000a  lbu         $t1, 0xA($s4)
    ctx->pc = 0x191840u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x191844: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x191844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191848: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x191848u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19184c: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x19184cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191850: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x191850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x191854: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x191854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x191858: 0xc064d04  jal         func_193410
    ctx->pc = 0x191858u;
    SET_GPR_U32(ctx, 31, 0x191860u);
    ctx->pc = 0x19185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191858u;
    // 0x19185c: 0x244afffe  addiu       $t2, $v0, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193410u, 0x191858u, 0x191860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191860u;
label_191860:
    // 0x191860: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x191860u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x191864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191868: 0x7fc30000  sq          $v1, 0x0($fp)
    ctx->pc = 0x191868u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 3));
    // 0x19186c: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x19186cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x191870: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x191870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x191874: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x191874u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_191878:
    // 0x191878: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x191878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19187c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x19187cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x191880: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x191880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x191884: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x191884u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191888: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x191888u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19188c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x19188cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x191890: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x191890u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x191894: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x191894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191898: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x191898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19189c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19189cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1918a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1918a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1918a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1918A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1918A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918A4u;
        // 0x1918a8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1918A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1918ACu;
}
