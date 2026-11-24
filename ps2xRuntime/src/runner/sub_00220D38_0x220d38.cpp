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

// Function: sub_00220D38
// Address: 0x220d38 - 0x220e28
void sub_00220D38_0x220d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220D38_0x220d38");
#endif

    switch (ctx->pc) {
        case 0x220d68u: goto label_220d68;
        case 0x220dbcu: goto label_220dbc;
        case 0x220dccu: goto label_220dcc;
        case 0x220de8u: goto label_220de8;
        case 0x220df8u: goto label_220df8;
        default: break;
    }

    ctx->pc = 0x220d38u;

    // 0x220d38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x220d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x220d3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x220d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x220d40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x220d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x220d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x220d48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x220d48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x220d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x220d50: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x220d50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d54: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x220d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x220d58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220d5c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x220d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x220d60: 0xc084968  jal         func_2125A0
    ctx->pc = 0x220D60u;
    SET_GPR_U32(ctx, 31, 0x220D68u);
    ctx->pc = 0x220D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D60u;
    // 0x220d64: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x220D60u, 0x220D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D68u;
label_220d68:
    // 0x220d68: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x220d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x220d6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x220D6Cu;
    {
        const bool branch_taken_0x220d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D6Cu;
        // 0x220d70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d6c) {
            ctx->pc = 0x220D98u;
            goto label_220d98;
        }
    }
    ctx->pc = 0x220D74u;
    // 0x220d74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220d78: 0x34a50129  ori         $a1, $a1, 0x129
    ctx->pc = 0x220d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)297);
    // 0x220d7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220d7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220d80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x220d80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220d84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x220d84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220d88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x220d88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220d8c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x220d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x220d90: 0x80848e0  j           func_212380
    ctx->pc = 0x220D90u;
    ctx->pc = 0x220D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D90u;
    // 0x220d94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x220D98u;
label_220d98:
    // 0x220d98: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x220D98u;
    {
        const bool branch_taken_0x220d98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x220D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D98u;
        // 0x220d9c: 0x26300d30  addiu       $s0, $s1, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d98) {
            ctx->pc = 0x220DD8u;
            goto label_220dd8;
        }
    }
    ctx->pc = 0x220DA0u;
    // 0x220da0: 0xae1302e8  sw          $s3, 0x2E8($s0)
    ctx->pc = 0x220da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 19));
    // 0x220da4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x220da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x220da8: 0xae1202d4  sw          $s2, 0x2D4($s0)
    ctx->pc = 0x220da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 18));
    // 0x220dac: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x220dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220db0: 0xae1402e4  sw          $s4, 0x2E4($s0)
    ctx->pc = 0x220db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 20));
    // 0x220db4: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x220DB4u;
    SET_GPR_U32(ctx, 31, 0x220DBCu);
    ctx->pc = 0x220DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220DB4u;
    // 0x220db8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x220DB4u, 0x220DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DBCu;
label_220dbc:
    // 0x220dbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220dc0: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x220dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x220dc4: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x220DC4u;
    SET_GPR_U32(ctx, 31, 0x220DCCu);
    ctx->pc = 0x220DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220DC4u;
    // 0x220dc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x220DC4u, 0x220DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DCCu;
label_220dcc:
    // 0x220dcc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x220DCCu;
    {
        const bool branch_taken_0x220dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DCCu;
        // 0x220dd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220dcc) {
            ctx->pc = 0x220E08u;
            goto label_220e08;
        }
    }
    ctx->pc = 0x220DD4u;
    // 0x220dd4: 0x0  nop
    ctx->pc = 0x220dd4u;
    // NOP
label_220dd8:
    // 0x220dd8: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x220dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x220ddc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x220ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220de0: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x220DE0u;
    SET_GPR_U32(ctx, 31, 0x220DE8u);
    ctx->pc = 0x220DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220DE0u;
    // 0x220de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x220DE0u, 0x220DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DE8u;
label_220de8:
    // 0x220de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220dec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x220decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x220df0: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x220DF0u;
    SET_GPR_U32(ctx, 31, 0x220DF8u);
    ctx->pc = 0x220DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220DF0u;
    // 0x220df4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x220DF0u, 0x220DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DF8u;
label_220df8:
    // 0x220df8: 0xae1302e8  sw          $s3, 0x2E8($s0)
    ctx->pc = 0x220df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 19));
    // 0x220dfc: 0xae1402e4  sw          $s4, 0x2E4($s0)
    ctx->pc = 0x220dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 20));
    // 0x220e00: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x220e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
    // 0x220e04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_220e08:
    // 0x220e08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x220e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220e0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220e10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x220e10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220e14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x220e14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220e18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x220e18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220e1c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x220e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x220e20: 0x3e00008  jr          $ra
    ctx->pc = 0x220E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E20u;
        // 0x220e24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220E28u;
}
