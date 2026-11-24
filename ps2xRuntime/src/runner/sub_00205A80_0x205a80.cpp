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

// Function: sub_00205A80
// Address: 0x205a80 - 0x205b24
void sub_00205A80_0x205a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205A80_0x205a80");
#endif

    switch (ctx->pc) {
        case 0x205ab4u: goto label_205ab4;
        case 0x205accu: goto label_205acc;
        case 0x205ae0u: goto label_205ae0;
        case 0x205af0u: goto label_205af0;
        case 0x205b08u: goto label_205b08;
        case 0x205b18u: goto label_205b18;
        default: break;
    }

    ctx->pc = 0x205a80u;

    // 0x205a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205a84: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x205a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x205a88: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x205a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x205a8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x205a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x205a90: 0x24486e60  addiu       $t0, $v0, 0x6E60
    ctx->pc = 0x205a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 28256));
    // 0x205a94: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x205a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x205a98: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x205a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x205a9c: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x205a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x205aa0: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x205aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x205aa4: 0x240537b0  addiu       $a1, $zero, 0x37B0
    ctx->pc = 0x205aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14256));
    // 0x205aa8: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x205aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x205aac: 0xc084858  jal         func_212160
    ctx->pc = 0x205AACu;
    SET_GPR_U32(ctx, 31, 0x205AB4u);
    ctx->pc = 0x205AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205AACu;
    // 0x205ab0: 0x24646f28  addiu       $a0, $v1, 0x6F28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212160u, 0x205AACu, 0x205AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205AB4u;
label_205ab4:
    // 0x205ab4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205ab8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x205AB8u;
    {
        const bool branch_taken_0x205ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x205ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AB8u;
        // 0x205abc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ab8) {
            ctx->pc = 0x205AD8u;
            goto label_205ad8;
        }
    }
    ctx->pc = 0x205AC0u;
    // 0x205ac0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x205ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x205ac4: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x205AC4u;
    SET_GPR_U32(ctx, 31, 0x205ACCu);
    ctx->pc = 0x205AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205AC4u;
    // 0x205ac8: 0x24846f30  addiu       $a0, $a0, 0x6F30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x205AC4u, 0x205ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205ACCu;
label_205acc:
    // 0x205acc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x205ACCu;
    {
        const bool branch_taken_0x205acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205ACCu;
        // 0x205ad0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205acc) {
            ctx->pc = 0x205B18u;
            goto label_205b18;
        }
    }
    ctx->pc = 0x205AD4u;
    // 0x205ad4: 0x0  nop
    ctx->pc = 0x205ad4u;
    // NOP
label_205ad8:
    // 0x205ad8: 0xc08485c  jal         func_212170
    ctx->pc = 0x205AD8u;
    SET_GPR_U32(ctx, 31, 0x205AE0u);
    ctx->pc = 0x212170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212170u, 0x205AD8u, 0x205AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205AE0u;
label_205ae0:
    // 0x205ae0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x205AE0u;
    {
        const bool branch_taken_0x205ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AE0u;
        // 0x205ae4: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ae0) {
            ctx->pc = 0x205AF8u;
            goto label_205af8;
        }
    }
    ctx->pc = 0x205AE8u;
    // 0x205ae8: 0xc08168c  jal         func_205A30
    ctx->pc = 0x205AE8u;
    SET_GPR_U32(ctx, 31, 0x205AF0u);
    ctx->pc = 0x205AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205AE8u;
    // 0x205aec: 0x2404fed3  addiu       $a0, $zero, -0x12D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966995));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A30u, 0x205AE8u, 0x205AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205AF0u;
label_205af0:
    // 0x205af0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x205AF0u;
    {
        const bool branch_taken_0x205af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AF0u;
        // 0x205af4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205af0) {
            ctx->pc = 0x205B1Cu;
            goto label_205b1c;
        }
    }
    ctx->pc = 0x205AF8u;
label_205af8:
    // 0x205af8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x205af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205afc: 0x24a55b48  addiu       $a1, $a1, 0x5B48
    ctx->pc = 0x205afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23368));
    // 0x205b00: 0xc08490c  jal         func_212430
    ctx->pc = 0x205B00u;
    SET_GPR_U32(ctx, 31, 0x205B08u);
    ctx->pc = 0x205B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205B00u;
    // 0x205b04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212430u, 0x205B00u, 0x205B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B08u;
label_205b08:
    // 0x205b08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205B08u;
    {
        const bool branch_taken_0x205b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B08u;
        // 0x205b0c: 0x2404fed1  addiu       $a0, $zero, -0x12F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966993));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b08) {
            ctx->pc = 0x205B18u;
            goto label_205b18;
        }
    }
    ctx->pc = 0x205B10u;
    // 0x205b10: 0xc08168c  jal         func_205A30
    ctx->pc = 0x205B10u;
    SET_GPR_U32(ctx, 31, 0x205B18u);
    ctx->pc = 0x205A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A30u, 0x205B10u, 0x205B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B18u;
label_205b18:
    // 0x205b18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x205b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_205b1c:
    // 0x205b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x205B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B1Cu;
        // 0x205b20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205B24u;
}
