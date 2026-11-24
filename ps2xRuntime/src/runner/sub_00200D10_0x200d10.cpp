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

// Function: sub_00200D10
// Address: 0x200d10 - 0x200dcc
void sub_00200D10_0x200d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200D10_0x200d10");
#endif

    switch (ctx->pc) {
        case 0x200d78u: goto label_200d78;
        case 0x200d84u: goto label_200d84;
        case 0x200d9cu: goto label_200d9c;
        default: break;
    }

    ctx->pc = 0x200d10u;

    // 0x200d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x200d14: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x200d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x200d18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x200d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x200d1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x200d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d20: 0x1230c0  sll         $a2, $s2, 3
    ctx->pc = 0x200d20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x200d24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x200d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200d28: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x200d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x200d2c: 0x128900  sll         $s1, $s2, 4
    ctx->pc = 0x200d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x200d30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x200d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x200d34: 0x24b3003f  addiu       $s3, $a1, 0x3F
    ctx->pc = 0x200d34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x200d38: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x200d38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x200d3c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x200d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x200d40: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x200d40u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x200d44: 0xd23023  subu        $a2, $a2, $s2
    ctx->pc = 0x200d44u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x200d48: 0x118980  sll         $s1, $s1, 6
    ctx->pc = 0x200d48u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x200d4c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x200d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x200d50: 0x2718821  addu        $s1, $s3, $s1
    ctx->pc = 0x200d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x200d54: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x200d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x200d58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x200d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d5c: 0x24c60800  addiu       $a2, $a2, 0x800
    ctx->pc = 0x200d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2048));
    // 0x200d60: 0x26340420  addiu       $s4, $s1, 0x420
    ctx->pc = 0x200d60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
    // 0x200d64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200d6c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x200d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x200d70: 0xc07ec84  jal         func_1FB210
    ctx->pc = 0x200D70u;
    SET_GPR_U32(ctx, 31, 0x200D78u);
    ctx->pc = 0x200D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D70u;
    // 0x200d74: 0x3c100087  lui         $s0, 0x87 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)135 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB210u, 0x200D70u, 0x200D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D78u;
label_200d78:
    // 0x200d78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x200d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d7c: 0xc080426  jal         func_201098
    ctx->pc = 0x200D7Cu;
    SET_GPR_U32(ctx, 31, 0x200D84u);
    ctx->pc = 0x200D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D7Cu;
    // 0x200d80: 0x24051be0  addiu       $a1, $zero, 0x1BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201098u, 0x200D7Cu, 0x200D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D84u;
label_200d84:
    // 0x200d84: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x200d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x200d88: 0x26103f40  addiu       $s0, $s0, 0x3F40
    ctx->pc = 0x200d88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16192));
    // 0x200d8c: 0x24a56398  addiu       $a1, $a1, 0x6398
    ctx->pc = 0x200d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25496));
    // 0x200d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d94: 0xc07ec0c  jal         func_1FB030
    ctx->pc = 0x200D94u;
    SET_GPR_U32(ctx, 31, 0x200D9Cu);
    ctx->pc = 0x200D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D94u;
    // 0x200d98: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB030u, 0x200D94u, 0x200D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D9Cu;
label_200d9c:
    // 0x200d9c: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x200d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x200da0: 0xae130058  sw          $s3, 0x58($s0)
    ctx->pc = 0x200da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 19));
    // 0x200da4: 0xae140050  sw          $s4, 0x50($s0)
    ctx->pc = 0x200da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 20));
    // 0x200da8: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x200da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x200dac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200db4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200db4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200db8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x200db8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200dbc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x200dbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200dc0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x200dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x200dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x200DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DC4u;
        // 0x200dc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200DCCu;
}
