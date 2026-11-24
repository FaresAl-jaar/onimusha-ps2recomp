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

// Function: sub_0021F360
// Address: 0x21f360 - 0x21f458
void sub_0021F360_0x21f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F360_0x21f360");
#endif

    switch (ctx->pc) {
        case 0x21f380u: goto label_21f380;
        case 0x21f3bcu: goto label_21f3bc;
        case 0x21f3d4u: goto label_21f3d4;
        case 0x21f3f0u: goto label_21f3f0;
        case 0x21f408u: goto label_21f408;
        default: break;
    }

    ctx->pc = 0x21f360u;

    // 0x21f360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21f368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f36c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21f36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21f370: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21f370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21f374: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21f374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21f378: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21F378u;
    SET_GPR_U32(ctx, 31, 0x21F380u);
    ctx->pc = 0x21F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F378u;
    // 0x21f37c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21F378u, 0x21F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F380u;
label_21f380:
    // 0x21f380: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21f380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21f384: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21F384u;
    {
        const bool branch_taken_0x21f384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F384u;
        // 0x21f388: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f384) {
            ctx->pc = 0x21F3A8u;
            goto label_21f3a8;
        }
    }
    ctx->pc = 0x21F38Cu;
    // 0x21f38c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f38cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f390: 0x34a50158  ori         $a1, $a1, 0x158
    ctx->pc = 0x21f390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)344);
    // 0x21f394: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f398: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21f398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f39c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21f39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f3a0: 0x80848e0  j           func_212380
    ctx->pc = 0x21F3A0u;
    ctx->pc = 0x21F3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F3A0u;
    // 0x21f3a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21F3A8u;
label_21f3a8:
    // 0x21f3a8: 0x8e1136b0  lw          $s1, 0x36B0($s0)
    ctx->pc = 0x21f3a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
    // 0x21f3ac: 0x52200025  beql        $s1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x21F3ACu;
    {
        const bool branch_taken_0x21f3ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f3ac) {
            ctx->pc = 0x21F3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F3ACu;
            // 0x21f3b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F444u;
            goto label_21f444;
        }
    }
    ctx->pc = 0x21F3B4u;
    // 0x21f3b4: 0xc08769a  jal         func_21DA68
    ctx->pc = 0x21F3B4u;
    SET_GPR_U32(ctx, 31, 0x21F3BCu);
    ctx->pc = 0x21F3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F3B4u;
    // 0x21f3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA68u, 0x21F3B4u, 0x21F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3BCu;
label_21f3bc:
    // 0x21f3bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f3c0: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x21f3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x21f3c4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x21F3C4u;
    {
        const bool branch_taken_0x21f3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3C4u;
        // 0x21f3c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3c4) {
            ctx->pc = 0x21F440u;
            goto label_21f440;
        }
    }
    ctx->pc = 0x21F3CCu;
    // 0x21f3cc: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x21F3CCu;
    SET_GPR_U32(ctx, 31, 0x21F3D4u);
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x21F3CCu, 0x21F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3D4u;
label_21f3d4:
    // 0x21f3d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f3d8: 0x8e220db8  lw          $v0, 0xDB8($s1)
    ctx->pc = 0x21f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3512)));
    // 0x21f3dc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x21f3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21f3e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F3E0u;
    {
        const bool branch_taken_0x21f3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3E0u;
        // 0x21f3e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3e0) {
            ctx->pc = 0x21F3F0u;
            goto label_21f3f0;
        }
    }
    ctx->pc = 0x21F3E8u;
    // 0x21f3e8: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x21F3E8u;
    SET_GPR_U32(ctx, 31, 0x21F3F0u);
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x21F3E8u, 0x21F3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3F0u;
label_21f3f0:
    // 0x21f3f0: 0x8e220dbc  lw          $v0, 0xDBC($s1)
    ctx->pc = 0x21f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3516)));
    // 0x21f3f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F3F4u;
    {
        const bool branch_taken_0x21f3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3F4u;
        // 0x21f3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3f4) {
            ctx->pc = 0x21F408u;
            goto label_21f408;
        }
    }
    ctx->pc = 0x21F3FCu;
    // 0x21f3fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x21f3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21f400: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x21F400u;
    SET_GPR_U32(ctx, 31, 0x21F408u);
    ctx->pc = 0x21F404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F400u;
    // 0x21f404: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x21F400u, 0x21F408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F408u;
label_21f408:
    // 0x21f408: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x21f408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x21f40c: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x21f40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x21f410: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x21f410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x21f414: 0xb20236bb  sdl         $v0, 0x36BB($s0)
    ctx->pc = 0x21f414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 14011); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21f418: 0xb60236b4  sdr         $v0, 0x36B4($s0)
    ctx->pc = 0x21f418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 14004); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21f41c: 0xae0336bc  sw          $v1, 0x36BC($s0)
    ctx->pc = 0x21f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14012), GPR_U32(ctx, 3));
    // 0x21f420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f428: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x21f428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x21f42c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f42cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f430: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21f430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f434: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21f434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f438: 0x80888b0  j           func_2222C0
    ctx->pc = 0x21F438u;
    ctx->pc = 0x21F43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F438u;
    // 0x21f43c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2222C0u;
    sub_002222C0_0x2222c0(rdram, ctx, runtime); return;
    ctx->pc = 0x21F440u;
label_21f440:
    // 0x21f440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21f444:
    // 0x21f444: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f448: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21f448u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f44c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21f44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f450: 0x3e00008  jr          $ra
    ctx->pc = 0x21F450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F450u;
        // 0x21f454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F458u;
}
