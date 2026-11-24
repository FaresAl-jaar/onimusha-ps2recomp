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

// Function: sub_002406D8
// Address: 0x2406d8 - 0x240770
void sub_002406D8_0x2406d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002406D8_0x2406d8");
#endif

    switch (ctx->pc) {
        case 0x240718u: goto label_240718;
        case 0x240734u: goto label_240734;
        case 0x24073cu: goto label_24073c;
        case 0x240744u: goto label_240744;
        case 0x24074cu: goto label_24074c;
        default: break;
    }

    ctx->pc = 0x2406d8u;

    // 0x2406d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2406d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2406dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2406dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2406e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2406e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2406e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2406e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2406e8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2406E8u;
    {
        const bool branch_taken_0x2406e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2406ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406E8u;
        // 0x2406ec: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406e8) {
            ctx->pc = 0x240710u;
            goto label_240710;
        }
    }
    ctx->pc = 0x2406F0u;
    // 0x2406f0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2406f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2406f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2406f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2406f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2406f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2406fc: 0x2484ba80  addiu       $a0, $a0, -0x4580
    ctx->pc = 0x2406fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949504));
    // 0x240700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240704: 0x808baa4  j           func_22EA90
    ctx->pc = 0x240704u;
    ctx->pc = 0x240708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240704u;
    // 0x240708: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x24070Cu;
    // 0x24070c: 0x0  nop
    ctx->pc = 0x24070cu;
    // NOP
label_240710:
    // 0x240710: 0xc08e6f4  jal         func_239BD0
    ctx->pc = 0x240710u;
    SET_GPR_U32(ctx, 31, 0x240718u);
    ctx->pc = 0x239BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239BD0u, 0x240710u, 0x240718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240718u;
label_240718:
    // 0x240718: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x240718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24071c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x24071cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x240720: 0x8e3000b4  lw          $s0, 0xB4($s1)
    ctx->pc = 0x240720u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x240724: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x240724u;
    {
        const bool branch_taken_0x240724 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x240724) {
            ctx->pc = 0x240728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240724u;
            // 0x240728: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240760u;
            goto label_240760;
        }
    }
    ctx->pc = 0x24072Cu;
    // 0x24072c: 0xc08d1f6  jal         func_2347D8
    ctx->pc = 0x24072Cu;
    SET_GPR_U32(ctx, 31, 0x240734u);
    ctx->pc = 0x2347D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347D8u, 0x24072Cu, 0x240734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240734u;
label_240734:
    // 0x240734: 0xc090bb0  jal         func_242EC0
    ctx->pc = 0x240734u;
    SET_GPR_U32(ctx, 31, 0x24073Cu);
    ctx->pc = 0x240738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240734u;
    // 0x240738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242EC0u, 0x240734u, 0x24073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24073Cu;
label_24073c:
    // 0x24073c: 0xc090b78  jal         func_242DE0
    ctx->pc = 0x24073Cu;
    SET_GPR_U32(ctx, 31, 0x240744u);
    ctx->pc = 0x240740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24073Cu;
    // 0x240740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242DE0u, 0x24073Cu, 0x240744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240744u;
label_240744:
    // 0x240744: 0xc08d1fc  jal         func_2347F0
    ctx->pc = 0x240744u;
    SET_GPR_U32(ctx, 31, 0x24074Cu);
    ctx->pc = 0x240748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240744u;
    // 0x240748: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2347F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347F0u, 0x240744u, 0x24074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24074Cu;
label_24074c:
    // 0x24074c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24074cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240750: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x240750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240758: 0x8090b02  j           func_242C08
    ctx->pc = 0x240758u;
    ctx->pc = 0x24075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240758u;
    // 0x24075c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242C08u;
    sub_00242C08_0x242c08(rdram, ctx, runtime); return;
    ctx->pc = 0x240760u;
label_240760:
    // 0x240760: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x240760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240768: 0x3e00008  jr          $ra
    ctx->pc = 0x240768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240768u;
        // 0x24076c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240770u;
}
