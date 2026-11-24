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

// Function: sub_003D7500
// Address: 0x3d7500 - 0x3d75c4
void sub_003D7500_0x3d7500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7500_0x3d7500");
#endif

    switch (ctx->pc) {
        case 0x3d7560u: goto label_3d7560;
        case 0x3d756cu: goto label_3d756c;
        default: break;
    }

    ctx->pc = 0x3d7500u;

    // 0x3d7500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d7500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d7504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d7504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d7508: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d7508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d750c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d750cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d7510: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d7510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d7514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d7514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7518: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x3d7518u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3d751c: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3D751Cu;
    {
        const bool branch_taken_0x3d751c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d751c) {
            ctx->pc = 0x3D75A8u;
            goto label_3d75a8;
        }
    }
    ctx->pc = 0x3D7524u;
    // 0x3d7524: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D7524u;
    {
        const bool branch_taken_0x3d7524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7524) {
            ctx->pc = 0x3D7538u;
            goto label_3d7538;
        }
    }
    ctx->pc = 0x3D752Cu;
    // 0x3d752c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3D752Cu;
    {
        const bool branch_taken_0x3d752c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d752c) {
            ctx->pc = 0x3D75B0u;
            goto label_3d75b0;
        }
    }
    ctx->pc = 0x3D7534u;
    // 0x3d7534: 0x0  nop
    ctx->pc = 0x3d7534u;
    // NOP
label_3d7538:
    // 0x3d7538: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d7538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3d753c: 0x2442e510  addiu       $v0, $v0, -0x1AF0
    ctx->pc = 0x3d753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x3d7540: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d7540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7544: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3d7544u;
    { uint32_t bits = FAST_READ32(0x65E510u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d7548: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3d7548u;
    { uint32_t bits = FAST_READ32(0x65E514u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d754c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3d754cu;
    { uint32_t bits = FAST_READ32(0x65E518u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d7550: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x3d7550u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3d7554: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x3d7554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3d7558: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x3d7558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3d755c: 0x0  nop
    ctx->pc = 0x3d755cu;
    // NOP
label_3d7560:
    // 0x3d7560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d7560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7564: 0xc0f58e0  jal         func_3D6380
    ctx->pc = 0x3D7564u;
    SET_GPR_U32(ctx, 31, 0x3D756Cu);
    ctx->pc = 0x3D7568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7564u;
    // 0x3d7568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6380u, 0x3D7564u, 0x3D756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D756Cu;
label_3d756c:
    // 0x3d756c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d756cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3d7570: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x3d7570u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3d7574: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D7574u;
    {
        const bool branch_taken_0x3d7574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7574) {
            ctx->pc = 0x3D7560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7560;
        }
    }
    ctx->pc = 0x3D757Cu;
    // 0x3d757c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3d757cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d7580: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3d7580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d7584: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3d7584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d7588: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3d7588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d758c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3d758cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d7590: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d7590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d7594: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3d7594u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d7598: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3d7598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d759c: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3d759cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3d75a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d75a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d75a4: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3d75a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3d75a8:
    // 0x3d75a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d75a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d75ac: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3d75acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3d75b0:
    // 0x3d75b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d75b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d75b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d75b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d75b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d75b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d75bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D75BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D75BCu;
        // 0x3d75c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D75BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D75C4u;
}
