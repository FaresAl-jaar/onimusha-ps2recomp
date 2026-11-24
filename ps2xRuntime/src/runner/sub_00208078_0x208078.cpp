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

// Function: sub_00208078
// Address: 0x208078 - 0x208164
void sub_00208078_0x208078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208078_0x208078");
#endif

    switch (ctx->pc) {
        case 0x208098u: goto label_208098;
        case 0x2080b0u: goto label_2080b0;
        case 0x2080c0u: goto label_2080c0;
        case 0x2080d0u: goto label_2080d0;
        case 0x2080ecu: goto label_2080ec;
        case 0x208100u: goto label_208100;
        case 0x208108u: goto label_208108;
        case 0x208114u: goto label_208114;
        case 0x208120u: goto label_208120;
        case 0x20812cu: goto label_20812c;
        case 0x208144u: goto label_208144;
        default: break;
    }

    ctx->pc = 0x208078u;

    // 0x208078: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x208078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x20807c: 0xffb00190  sd          $s0, 0x190($sp)
    ctx->pc = 0x20807cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 16));
    // 0x208080: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x208080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208084: 0xffb10198  sd          $s1, 0x198($sp)
    ctx->pc = 0x208084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 17));
    // 0x208088: 0xffb201a0  sd          $s2, 0x1A0($sp)
    ctx->pc = 0x208088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 18));
    // 0x20808c: 0xffbf01a8  sd          $ra, 0x1A8($sp)
    ctx->pc = 0x20808cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 31));
    // 0x208090: 0xc081d84  jal         func_207610
    ctx->pc = 0x208090u;
    SET_GPR_U32(ctx, 31, 0x208098u);
    ctx->pc = 0x208094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208090u;
    // 0x208094: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x208090u, 0x208098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208098u;
label_208098:
    // 0x208098: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x208098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x20809c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20809cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2080a0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2080A0u;
    {
        const bool branch_taken_0x2080a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2080A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080A0u;
        // 0x2080a4: 0x24847ad8  addiu       $a0, $a0, 0x7AD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080a0) {
            ctx->pc = 0x2080C8u;
            goto label_2080c8;
        }
    }
    ctx->pc = 0x2080A8u;
    // 0x2080a8: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x2080A8u;
    SET_GPR_U32(ctx, 31, 0x2080B0u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x2080A8u, 0x2080B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2080B0u;
label_2080b0:
    // 0x2080b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2080b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2080b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080b8: 0xc049590  jal         func_125640
    ctx->pc = 0x2080B8u;
    SET_GPR_U32(ctx, 31, 0x2080C0u);
    ctx->pc = 0x2080BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2080B8u;
    // 0x2080bc: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2080B8u, 0x2080C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2080C0u;
label_2080c0:
    // 0x2080c0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2080C0u;
    {
        const bool branch_taken_0x2080c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2080C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080C0u;
        // 0x2080c4: 0xdfb00190  ld          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080c0) {
            ctx->pc = 0x208150u;
            goto label_208150;
        }
    }
    ctx->pc = 0x2080C8u;
label_2080c8:
    // 0x2080c8: 0xc081c12  jal         func_207048
    ctx->pc = 0x2080C8u;
    SET_GPR_U32(ctx, 31, 0x2080D0u);
    ctx->pc = 0x2080CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2080C8u;
    // 0x2080cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x2080C8u, 0x2080D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2080D0u;
label_2080d0:
    // 0x2080d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2080d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2080d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2080d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080dc: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2080DCu;
    {
        const bool branch_taken_0x2080dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2080E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080DCu;
        // 0x2080e0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080dc) {
            ctx->pc = 0x2080F8u;
            goto label_2080f8;
        }
    }
    ctx->pc = 0x2080E4u;
    // 0x2080e4: 0xc049590  jal         func_125640
    ctx->pc = 0x2080E4u;
    SET_GPR_U32(ctx, 31, 0x2080ECu);
    ctx->pc = 0x2080E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2080E4u;
    // 0x2080e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2080E4u, 0x2080ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2080ECu;
label_2080ec:
    // 0x2080ec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2080ECu;
    {
        const bool branch_taken_0x2080ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2080F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080ECu;
        // 0x2080f0: 0xdfb00190  ld          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080ec) {
            ctx->pc = 0x208150u;
            goto label_208150;
        }
    }
    ctx->pc = 0x2080F4u;
    // 0x2080f4: 0x0  nop
    ctx->pc = 0x2080f4u;
    // NOP
label_2080f8:
    // 0x2080f8: 0xc087f0a  jal         func_21FC28
    ctx->pc = 0x2080F8u;
    SET_GPR_U32(ctx, 31, 0x208100u);
    ctx->pc = 0x2080FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2080F8u;
    // 0x2080fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FC28u, 0x2080F8u, 0x208100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208100u;
label_208100:
    // 0x208100: 0xc081c3a  jal         func_2070E8
    ctx->pc = 0x208100u;
    SET_GPR_U32(ctx, 31, 0x208108u);
    ctx->pc = 0x208104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208100u;
    // 0x208104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2070E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2070E8u, 0x208100u, 0x208108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208108u;
label_208108:
    // 0x208108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20810c: 0xc081c54  jal         func_207150
    ctx->pc = 0x20810Cu;
    SET_GPR_U32(ctx, 31, 0x208114u);
    ctx->pc = 0x208110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20810Cu;
    // 0x208110: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207150u, 0x20810Cu, 0x208114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208114u;
label_208114:
    // 0x208114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208118: 0xc08138a  jal         func_204E28
    ctx->pc = 0x208118u;
    SET_GPR_U32(ctx, 31, 0x208120u);
    ctx->pc = 0x20811Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208118u;
    // 0x20811c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204E28u, 0x208118u, 0x208120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208120u;
label_208120:
    // 0x208120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208124: 0xc081fd4  jal         func_207F50
    ctx->pc = 0x208124u;
    SET_GPR_U32(ctx, 31, 0x20812Cu);
    ctx->pc = 0x208128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208124u;
    // 0x208128: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207F50u, 0x208124u, 0x20812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20812Cu;
label_20812c:
    // 0x20812c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20812cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208130: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x208130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x208134: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x208134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x208138: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x208138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x20813c: 0xc087f32  jal         func_21FCC8
    ctx->pc = 0x20813Cu;
    SET_GPR_U32(ctx, 31, 0x208144u);
    ctx->pc = 0x208140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20813Cu;
    // 0x208140: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FCC8u, 0x20813Cu, 0x208144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208144u;
label_208144:
    // 0x208144: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x208144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208148: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x208148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x20814c: 0xdfb00190  ld          $s0, 0x190($sp)
    ctx->pc = 0x20814cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_208150:
    // 0x208150: 0xdfb10198  ld          $s1, 0x198($sp)
    ctx->pc = 0x208150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x208154: 0xdfb201a0  ld          $s2, 0x1A0($sp)
    ctx->pc = 0x208154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x208158: 0xdfbf01a8  ld          $ra, 0x1A8($sp)
    ctx->pc = 0x208158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x20815c: 0x3e00008  jr          $ra
    ctx->pc = 0x20815Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20815Cu;
        // 0x208160: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20815Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208164u;
}
