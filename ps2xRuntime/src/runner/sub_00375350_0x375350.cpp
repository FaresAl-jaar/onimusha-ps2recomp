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

// Function: sub_00375350
// Address: 0x375350 - 0x375400
void sub_00375350_0x375350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375350_0x375350");
#endif

    switch (ctx->pc) {
        case 0x375384u: goto label_375384;
        case 0x3753b8u: goto label_3753b8;
        default: break;
    }

    ctx->pc = 0x375350u;

    // 0x375350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x375354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x375354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x375358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37535c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37535cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375360: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x375360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x375364: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x375364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x375368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x375368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37536c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x37536cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x375370: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x375370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x375374: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x375374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x375378: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x375378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37537c: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x37537Cu;
    SET_GPR_U32(ctx, 31, 0x375384u);
    ctx->pc = 0x375380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37537Cu;
    // 0x375380: 0xac820148  sw          $v0, 0x148($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x37537Cu, 0x375384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375384u;
label_375384:
    // 0x375384: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x375384u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x375388: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37538c: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x37538Cu;
    {
        const bool branch_taken_0x37538c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37538c) {
            ctx->pc = 0x3753E0u;
            goto label_3753e0;
        }
    }
    ctx->pc = 0x375394u;
    // 0x375394: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x375394u;
    {
        const bool branch_taken_0x375394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x375394) {
            ctx->pc = 0x3753A8u;
            goto label_3753a8;
        }
    }
    ctx->pc = 0x37539Cu;
    // 0x37539c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x37539Cu;
    {
        const bool branch_taken_0x37539c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37539c) {
            ctx->pc = 0x3753F0u;
            goto label_3753f0;
        }
    }
    ctx->pc = 0x3753A4u;
    // 0x3753a4: 0x0  nop
    ctx->pc = 0x3753a4u;
    // NOP
label_3753a8:
    // 0x3753a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3753a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3753ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3753acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3753b0: 0xc096968  jal         func_25A5A0
    ctx->pc = 0x3753B0u;
    SET_GPR_U32(ctx, 31, 0x3753B8u);
    ctx->pc = 0x3753B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3753B0u;
    // 0x3753b4: 0xc60d07a4  lwc1        $f13, 0x7A4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x3753B0u, 0x3753B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3753B8u;
label_3753b8:
    // 0x3753b8: 0xe60007a4  swc1        $f0, 0x7A4($s0)
    ctx->pc = 0x3753b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1956), bits); }
    // 0x3753bc: 0x24050097  addiu       $a1, $zero, 0x97
    ctx->pc = 0x3753bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x3753c0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3753c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3753c4: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x3753c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
    // 0x3753c8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3753c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3753cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3753ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3753d0: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x3753d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3753d4: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3753d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3753d8: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3753d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3753dc: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3753dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3753e0:
    // 0x3753e0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3753e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3753e4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3753E4u;
    {
        const bool branch_taken_0x3753e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3753E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3753E4u;
        // 0x3753e8: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3753e4) {
            ctx->pc = 0x3753F0u;
            goto label_3753f0;
        }
    }
    ctx->pc = 0x3753ECu;
    // 0x3753ec: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3753ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3753f0:
    // 0x3753f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3753f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3753f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3753f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3753f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3753F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3753FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3753F8u;
        // 0x3753fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3753F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375400u;
}
