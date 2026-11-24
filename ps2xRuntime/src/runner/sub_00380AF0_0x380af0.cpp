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

// Function: sub_00380AF0
// Address: 0x380af0 - 0x380b5c
void sub_00380AF0_0x380af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380AF0_0x380af0");
#endif

    switch (ctx->pc) {
        case 0x380b14u: goto label_380b14;
        case 0x380b24u: goto label_380b24;
        case 0x380b44u: goto label_380b44;
        default: break;
    }

    ctx->pc = 0x380af0u;

    // 0x380af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x380af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x380af4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x380af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x380af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x380af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x380afc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x380afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x380b00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x380b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380b04: 0xa0802bb4  sb          $zero, 0x2BB4($a0)
    ctx->pc = 0x380b04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11188), (uint8_t)GPR_U32(ctx, 0));
    // 0x380b08: 0xa4802bb6  sh          $zero, 0x2BB6($a0)
    ctx->pc = 0x380b08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11190), (uint16_t)GPR_U32(ctx, 0));
    // 0x380b0c: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x380B0Cu;
    SET_GPR_U32(ctx, 31, 0x380B14u);
    ctx->pc = 0x380B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B0Cu;
    // 0x380b10: 0xa4802bb8  sh          $zero, 0x2BB8($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 11192), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x380B0Cu, 0x380B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B14u;
label_380b14:
    // 0x380b14: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x380b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x380b18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x380b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380b1c: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x380B1Cu;
    SET_GPR_U32(ctx, 31, 0x380B24u);
    ctx->pc = 0x380B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B1Cu;
    // 0x380b20: 0x280c2  srl         $s0, $v0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x380B1Cu, 0x380B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B24u;
label_380b24:
    // 0x380b24: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x380b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x380b28: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x380b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x380b2c: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x380b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x380b30: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x380b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x380b34: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x380b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x380b38: 0xa6232bba  sh          $v1, 0x2BBA($s1)
    ctx->pc = 0x380b38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11194), (uint16_t)GPR_U32(ctx, 3));
    // 0x380b3c: 0xc0c9640  jal         func_325900
    ctx->pc = 0x380B3Cu;
    SET_GPR_U32(ctx, 31, 0x380B44u);
    ctx->pc = 0x380B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B3Cu;
    // 0x380b40: 0x34454902  ori         $a1, $v0, 0x4902 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    ctx->in_delay_slot = false;
    ctx->pc = 0x325900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325900u, 0x380B3Cu, 0x380B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B44u;
label_380b44:
    // 0x380b44: 0xae222bb0  sw          $v0, 0x2BB0($s1)
    ctx->pc = 0x380b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11184), GPR_U32(ctx, 2));
    // 0x380b48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x380b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380b4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x380b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380b50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x380b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380b54: 0x3e00008  jr          $ra
    ctx->pc = 0x380B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380B54u;
        // 0x380b58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380B5Cu;
}
