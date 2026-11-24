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

// Function: sub_003D70D0
// Address: 0x3d70d0 - 0x3d716c
void sub_003D70D0_0x3d70d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D70D0_0x3d70d0");
#endif

    switch (ctx->pc) {
        case 0x3d7120u: goto label_3d7120;
        case 0x3d712cu: goto label_3d712c;
        case 0x3d7150u: goto label_3d7150;
        default: break;
    }

    ctx->pc = 0x3d70d0u;

    // 0x3d70d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d70d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d70d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d70d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d70d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d70d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d70dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d70dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d70e0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3d70e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3d70e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D70E4u;
    {
        const bool branch_taken_0x3d70e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D70E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D70E4u;
        // 0x3d70e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d70e4) {
            ctx->pc = 0x3D70F8u;
            goto label_3d70f8;
        }
    }
    ctx->pc = 0x3D70ECu;
    // 0x3d70ec: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3D70ECu;
    {
        const bool branch_taken_0x3d70ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d70ec) {
            ctx->pc = 0x3D7158u;
            goto label_3d7158;
        }
    }
    ctx->pc = 0x3D70F4u;
    // 0x3d70f4: 0x0  nop
    ctx->pc = 0x3d70f4u;
    // NOP
label_3d70f8:
    // 0x3d70f8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3d70fc: 0x2442e4f0  addiu       $v0, $v0, -0x1B10
    ctx->pc = 0x3d70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960368));
    // 0x3d7100: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d7100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7104: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3d7104u;
    { uint32_t bits = FAST_READ32(0x65E4F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d7108: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3d7108u;
    { uint32_t bits = FAST_READ32(0x65E4F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d710c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3d710cu;
    { uint32_t bits = FAST_READ32(0x65E4F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d7110: 0xe62206a0  swc1        $f2, 0x6A0($s1)
    ctx->pc = 0x3d7110u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1696), bits); }
    // 0x3d7114: 0xe62106a4  swc1        $f1, 0x6A4($s1)
    ctx->pc = 0x3d7114u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1700), bits); }
    // 0x3d7118: 0xe62006a8  swc1        $f0, 0x6A8($s1)
    ctx->pc = 0x3d7118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1704), bits); }
    // 0x3d711c: 0x0  nop
    ctx->pc = 0x3d711cu;
    // NOP
label_3d7120:
    // 0x3d7120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d7120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7124: 0xc0f5978  jal         func_3D65E0
    ctx->pc = 0x3D7124u;
    SET_GPR_U32(ctx, 31, 0x3D712Cu);
    ctx->pc = 0x3D7128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7124u;
    // 0x3d7128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D65E0u, 0x3D7124u, 0x3D712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D712Cu;
label_3d712c:
    // 0x3d712c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3d712cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3d7130: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x3d7130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3d7134: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D7134u;
    {
        const bool branch_taken_0x3d7134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7134) {
            ctx->pc = 0x3D7120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7120;
        }
    }
    ctx->pc = 0x3D713Cu;
    // 0x3d713c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d713cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d7140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7144: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x3d7144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3d7148: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x3D7148u;
    SET_GPR_U32(ctx, 31, 0x3D7150u);
    ctx->pc = 0x3D714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7148u;
    // 0x3d714c: 0xa2202b32  sb          $zero, 0x2B32($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 11058), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x3D7148u, 0x3D7150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7150u;
label_3d7150:
    // 0x3d7150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d7150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d7154: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3d7154u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3d7158:
    // 0x3d7158: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d7158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d715c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d715cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d7160: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d7164: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7164u;
        // 0x3d7168: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D716Cu;
}
