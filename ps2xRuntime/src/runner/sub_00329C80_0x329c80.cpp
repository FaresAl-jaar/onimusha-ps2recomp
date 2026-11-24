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

// Function: sub_00329C80
// Address: 0x329c80 - 0x329db8
void sub_00329C80_0x329c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329C80_0x329c80");
#endif

    switch (ctx->pc) {
        case 0x329cd8u: goto label_329cd8;
        case 0x329cf4u: goto label_329cf4;
        case 0x329d04u: goto label_329d04;
        case 0x329d24u: goto label_329d24;
        default: break;
    }

    ctx->pc = 0x329c80u;

    // 0x329c80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x329c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x329c84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x329c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x329c88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x329c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x329c8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x329c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x329c90: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x329c90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329c94: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x329c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x329c98: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x329c98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329c9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x329c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x329ca0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x329ca0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329ca4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x329ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x329ca8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x329ca8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329cac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x329cb0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x329cb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329cb4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x329cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329cb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x329cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329cbc: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x329cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x329cc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x329cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329cc8: 0x24070610  addiu       $a3, $zero, 0x610
    ctx->pc = 0x329cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x329ccc: 0x25089c20  addiu       $t0, $t0, -0x63E0
    ctx->pc = 0x329cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941728));
    // 0x329cd0: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x329CD0u;
    SET_GPR_U32(ctx, 31, 0x329CD8u);
    ctx->pc = 0x329CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CD0u;
    // 0x329cd4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x329CD0u, 0x329CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CD8u;
label_329cd8:
    // 0x329cd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329cdc: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x329CDCu;
    {
        const bool branch_taken_0x329cdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x329CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CDCu;
        // 0x329ce0: 0x324700ff  andi        $a3, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x329cdc) {
            ctx->pc = 0x329D88u;
            goto label_329d88;
        }
    }
    ctx->pc = 0x329CE4u;
    // 0x329ce4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x329ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x329ce8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x329ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329cec: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x329CECu;
    SET_GPR_U32(ctx, 31, 0x329CF4u);
    ctx->pc = 0x329CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CECu;
    // 0x329cf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x329CECu, 0x329CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CF4u;
label_329cf4:
    // 0x329cf4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x329cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x329cf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x329cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329cfc: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x329CFCu;
    SET_GPR_U32(ctx, 31, 0x329D04u);
    ctx->pc = 0x329D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CFCu;
    // 0x329d00: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x329CFCu, 0x329D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D04u;
label_329d04:
    // 0x329d04: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x329d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d08: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x329d08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d0c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x329d0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x329d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x329d18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x329d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329d1c: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x329D1Cu;
    SET_GPR_U32(ctx, 31, 0x329D24u);
    ctx->pc = 0x329D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D1Cu;
    // 0x329d20: 0x27aa0080  addiu       $t2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x329D1Cu, 0x329D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D24u;
label_329d24:
    // 0x329d24: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x329d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x329d28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x329d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329d2c: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x329d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x329d30: 0xa600052a  sh          $zero, 0x52A($s0)
    ctx->pc = 0x329d30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 0));
    // 0x329d34: 0xa6000528  sh          $zero, 0x528($s0)
    ctx->pc = 0x329d34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 0));
    // 0x329d38: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x329d38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x329d3c: 0xa2020520  sb          $v0, 0x520($s0)
    ctx->pc = 0x329d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    // 0x329d40: 0xa2160604  sb          $s6, 0x604($s0)
    ctx->pc = 0x329d40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1540), (uint8_t)GPR_U32(ctx, 22));
    // 0x329d44: 0xa2000606  sb          $zero, 0x606($s0)
    ctx->pc = 0x329d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1542), (uint8_t)GPR_U32(ctx, 0));
    // 0x329d48: 0xa2120605  sb          $s2, 0x605($s0)
    ctx->pc = 0x329d48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1541), (uint8_t)GPR_U32(ctx, 18));
    // 0x329d4c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x329d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x329d50: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x329d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x329d54: 0xa6000564  sh          $zero, 0x564($s0)
    ctx->pc = 0x329d54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1380), (uint16_t)GPR_U32(ctx, 0));
    // 0x329d58: 0xae000580  sw          $zero, 0x580($s0)
    ctx->pc = 0x329d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 0));
    // 0x329d5c: 0xa6000584  sh          $zero, 0x584($s0)
    ctx->pc = 0x329d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1412), (uint16_t)GPR_U32(ctx, 0));
    // 0x329d60: 0xae0005a0  sw          $zero, 0x5A0($s0)
    ctx->pc = 0x329d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 0));
    // 0x329d64: 0xa60005a4  sh          $zero, 0x5A4($s0)
    ctx->pc = 0x329d64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1444), (uint16_t)GPR_U32(ctx, 0));
    // 0x329d68: 0xae0005c0  sw          $zero, 0x5C0($s0)
    ctx->pc = 0x329d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1472), GPR_U32(ctx, 0));
    // 0x329d6c: 0xa60005c4  sh          $zero, 0x5C4($s0)
    ctx->pc = 0x329d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1476), (uint16_t)GPR_U32(ctx, 0));
    // 0x329d70: 0xae0005e0  sw          $zero, 0x5E0($s0)
    ctx->pc = 0x329d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1504), GPR_U32(ctx, 0));
    // 0x329d74: 0xa60005e4  sh          $zero, 0x5E4($s0)
    ctx->pc = 0x329d74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1508), (uint16_t)GPR_U32(ctx, 0));
    // 0x329d78: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x329d78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x329d7c: 0x7e0205f0  sq          $v0, 0x5F0($s0)
    ctx->pc = 0x329d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1520), GPR_VEC(ctx, 2));
    // 0x329d80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x329D80u;
    {
        const bool branch_taken_0x329d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D80u;
        // 0x329d84: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329d80) {
            ctx->pc = 0x329D90u;
            goto label_329d90;
        }
    }
    ctx->pc = 0x329D88u;
label_329d88:
    // 0x329d88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x329d88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d8c: 0x0  nop
    ctx->pc = 0x329d8cu;
    // NOP
label_329d90:
    // 0x329d90: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x329d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x329d94: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x329d94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x329d98: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x329d98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x329d9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x329d9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x329da0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x329da0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x329da4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x329da4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329da8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x329da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329dac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329db0: 0x3e00008  jr          $ra
    ctx->pc = 0x329DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DB0u;
        // 0x329db4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329DB8u;
}
