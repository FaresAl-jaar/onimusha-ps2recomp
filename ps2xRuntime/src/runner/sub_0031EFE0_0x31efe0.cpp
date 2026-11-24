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

// Function: sub_0031EFE0
// Address: 0x31efe0 - 0x31f178
void sub_0031EFE0_0x31efe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EFE0_0x31efe0");
#endif

    switch (ctx->pc) {
        case 0x31f00cu: goto label_31f00c;
        case 0x31f050u: goto label_31f050;
        case 0x31f06cu: goto label_31f06c;
        default: break;
    }

    ctx->pc = 0x31efe0u;

    // 0x31efe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31efe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31efe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31efe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31efe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31efe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31efec: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x31efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x31eff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31eff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eff4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x31eff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x31eff8: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x31eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x31effc: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x31effcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x31f000: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x31f000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x31f004: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x31F004u;
    SET_GPR_U32(ctx, 31, 0x31F00Cu);
    ctx->pc = 0x31F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F004u;
    // 0x31f008: 0xac820148  sw          $v0, 0x148($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x31F004u, 0x31F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F00Cu;
label_31f00c:
    // 0x31f00c: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x31f00cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x31f010: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x31f010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x31f014: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x31F014u;
    {
        const bool branch_taken_0x31f014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F014u;
        // 0x31f018: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f014) {
            ctx->pc = 0x31F058u;
            goto label_31f058;
        }
    }
    ctx->pc = 0x31F01Cu;
    // 0x31f01c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31F01Cu;
    {
        const bool branch_taken_0x31f01c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31f01c) {
            ctx->pc = 0x31F040u;
            goto label_31f040;
        }
    }
    ctx->pc = 0x31F024u;
    // 0x31f024: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31f024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31f028: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F028u;
    {
        const bool branch_taken_0x31f028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F028u;
        // 0x31f02c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f028) {
            ctx->pc = 0x31F040u;
            goto label_31f040;
        }
    }
    ctx->pc = 0x31F030u;
    // 0x31f030: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F030u;
    {
        const bool branch_taken_0x31f030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31f030) {
            ctx->pc = 0x31F040u;
            goto label_31f040;
        }
    }
    ctx->pc = 0x31F038u;
    // 0x31f038: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31F038u;
    {
        const bool branch_taken_0x31f038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f038) {
            ctx->pc = 0x31F070u;
            goto label_31f070;
        }
    }
    ctx->pc = 0x31F040u;
label_31f040:
    // 0x31f040: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x31f040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x31f044: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31f044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31f048: 0xc0c78c0  jal         func_31E300
    ctx->pc = 0x31F048u;
    SET_GPR_U32(ctx, 31, 0x31F050u);
    ctx->pc = 0x31F04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F048u;
    // 0x31f04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E300u, 0x31F048u, 0x31F050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F050u;
label_31f050:
    // 0x31f050: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31F050u;
    {
        const bool branch_taken_0x31f050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f050) {
            ctx->pc = 0x31F070u;
            goto label_31f070;
        }
    }
    ctx->pc = 0x31F058u;
label_31f058:
    // 0x31f058: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x31f058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x31f05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31f05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f060: 0x24a5ca70  addiu       $a1, $a1, -0x3590
    ctx->pc = 0x31f060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953584));
    // 0x31f064: 0xc0c7718  jal         func_31DC60
    ctx->pc = 0x31F064u;
    SET_GPR_U32(ctx, 31, 0x31F06Cu);
    ctx->pc = 0x31F068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F064u;
    // 0x31f068: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DC60u, 0x31F064u, 0x31F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F06Cu;
label_31f06c:
    // 0x31f06c: 0x0  nop
    ctx->pc = 0x31f06cu;
    // NOP
label_31f070:
    // 0x31f070: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x31f070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x31f074: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x31f074u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x31f078: 0x24030a44  addiu       $v1, $zero, 0xA44
    ctx->pc = 0x31f078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2628));
    // 0x31f07c: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x31F07Cu;
    {
        const bool branch_taken_0x31f07c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F07Cu;
        // 0x31f080: 0x2403078a  addiu       $v1, $zero, 0x78A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1930));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f07c) {
            ctx->pc = 0x31F168u;
            goto label_31f168;
        }
    }
    ctx->pc = 0x31F084u;
    // 0x31f084: 0x10830038  beq         $a0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x31F084u;
    {
        const bool branch_taken_0x31f084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31f084) {
            ctx->pc = 0x31F168u;
            goto label_31f168;
        }
    }
    ctx->pc = 0x31F08Cu;
    // 0x31f08c: 0x24030789  addiu       $v1, $zero, 0x789
    ctx->pc = 0x31f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1929));
    // 0x31f090: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x31F090u;
    {
        const bool branch_taken_0x31f090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F090u;
        // 0x31f094: 0x24030784  addiu       $v1, $zero, 0x784 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1924));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f090) {
            ctx->pc = 0x31F168u;
            goto label_31f168;
        }
    }
    ctx->pc = 0x31F098u;
    // 0x31f098: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x31F098u;
    {
        const bool branch_taken_0x31f098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31f098) {
            ctx->pc = 0x31F138u;
            goto label_31f138;
        }
    }
    ctx->pc = 0x31F0A0u;
    // 0x31f0a0: 0x24030783  addiu       $v1, $zero, 0x783
    ctx->pc = 0x31f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1923));
    // 0x31f0a4: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x31F0A4u;
    {
        const bool branch_taken_0x31f0a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0A4u;
        // 0x31f0a8: 0x24030345  addiu       $v1, $zero, 0x345 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 837));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f0a4) {
            ctx->pc = 0x31F100u;
            goto label_31f100;
        }
    }
    ctx->pc = 0x31F0ACu;
    // 0x31f0ac: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x31F0ACu;
    {
        const bool branch_taken_0x31f0ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31f0ac) {
            ctx->pc = 0x31F168u;
            goto label_31f168;
        }
    }
    ctx->pc = 0x31F0B4u;
    // 0x31f0b4: 0x240302c6  addiu       $v1, $zero, 0x2C6
    ctx->pc = 0x31f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 710));
    // 0x31f0b8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F0B8u;
    {
        const bool branch_taken_0x31f0b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31f0b8) {
            ctx->pc = 0x31F0C8u;
            goto label_31f0c8;
        }
    }
    ctx->pc = 0x31F0C0u;
    // 0x31f0c0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x31F0C0u;
    {
        const bool branch_taken_0x31f0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f0c0) {
            ctx->pc = 0x31F168u;
            goto label_31f168;
        }
    }
    ctx->pc = 0x31F0C8u;
label_31f0c8:
    // 0x31f0c8: 0x3c034564  lui         $v1, 0x4564
    ctx->pc = 0x31f0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17764 << 16));
    // 0x31f0cc: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x31f0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f0d0: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x31f0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x31f0d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31f0d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f0d8: 0x0  nop
    ctx->pc = 0x31f0d8u;
    // NOP
    // 0x31f0dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31f0dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f0e0: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x31F0E0u;
    {
        const bool branch_taken_0x31f0e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f0e0) {
            ctx->pc = 0x31F168u;
            goto label_31f168;
        }
    }
    ctx->pc = 0x31F0E8u;
    // 0x31f0e8: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x31f0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x31f0ec: 0x8e0306b4  lw          $v1, 0x6B4($s0)
    ctx->pc = 0x31f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1716)));
    // 0x31f0f0: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x31f0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x31f0f4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x31F0F4u;
    {
        const bool branch_taken_0x31f0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0F4u;
        // 0x31f0f8: 0xae0306b4  sw          $v1, 0x6B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f0f4) {
            ctx->pc = 0x31F168u;
            goto label_31f168;
        }
    }
    ctx->pc = 0x31F0FCu;
    // 0x31f0fc: 0x0  nop
    ctx->pc = 0x31f0fcu;
    // NOP
label_31f100:
    // 0x31f100: 0x3c034615  lui         $v1, 0x4615
    ctx->pc = 0x31f100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17941 << 16));
    // 0x31f104: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x31f104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f108: 0x34633800  ori         $v1, $v1, 0x3800
    ctx->pc = 0x31f108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14336);
    // 0x31f10c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31f10cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f110: 0x0  nop
    ctx->pc = 0x31f110u;
    // NOP
    // 0x31f114: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31f114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f118: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x31F118u;
    {
        const bool branch_taken_0x31f118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f118) {
            ctx->pc = 0x31F168u;
            goto label_31f168;
        }
    }
    ctx->pc = 0x31F120u;
    // 0x31f120: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x31f120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x31f124: 0x8e0306b4  lw          $v1, 0x6B4($s0)
    ctx->pc = 0x31f124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1716)));
    // 0x31f128: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x31f128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x31f12c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31F12Cu;
    {
        const bool branch_taken_0x31f12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F12Cu;
        // 0x31f130: 0xae0306b4  sw          $v1, 0x6B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f12c) {
            ctx->pc = 0x31F168u;
            goto label_31f168;
        }
    }
    ctx->pc = 0x31F134u;
    // 0x31f134: 0x0  nop
    ctx->pc = 0x31f134u;
    // NOP
label_31f138:
    // 0x31f138: 0x3c0345c8  lui         $v1, 0x45C8
    ctx->pc = 0x31f138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17864 << 16));
    // 0x31f13c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x31f13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f140: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31f140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f144: 0x0  nop
    ctx->pc = 0x31f144u;
    // NOP
    // 0x31f148: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31f148u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f14c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x31F14Cu;
    {
        const bool branch_taken_0x31f14c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f14c) {
            ctx->pc = 0x31F168u;
            goto label_31f168;
        }
    }
    ctx->pc = 0x31F154u;
    // 0x31f154: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x31f154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x31f158: 0x8e0306b4  lw          $v1, 0x6B4($s0)
    ctx->pc = 0x31f158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1716)));
    // 0x31f15c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x31f15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x31f160: 0xae0306b4  sw          $v1, 0x6B4($s0)
    ctx->pc = 0x31f160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1716), GPR_U32(ctx, 3));
    // 0x31f164: 0x0  nop
    ctx->pc = 0x31f164u;
    // NOP
label_31f168:
    // 0x31f168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31f168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f16c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31f16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f170: 0x3e00008  jr          $ra
    ctx->pc = 0x31F170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F170u;
        // 0x31f174: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F178u;
}
