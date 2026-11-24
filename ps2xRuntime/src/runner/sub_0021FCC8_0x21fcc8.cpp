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

// Function: sub_0021FCC8
// Address: 0x21fcc8 - 0x21fde8
void sub_0021FCC8_0x21fcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FCC8_0x21fcc8");
#endif

    switch (ctx->pc) {
        case 0x21fce4u: goto label_21fce4;
        case 0x21fd14u: goto label_21fd14;
        case 0x21fd58u: goto label_21fd58;
        case 0x21fdd0u: goto label_21fdd0;
        default: break;
    }

    ctx->pc = 0x21fcc8u;

    // 0x21fcc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21fcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21fccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21fcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21fcd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21fcd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fcd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21fcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21fcd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21fcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21fcdc: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21FCDCu;
    SET_GPR_U32(ctx, 31, 0x21FCE4u);
    ctx->pc = 0x21FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCDCu;
    // 0x21fce0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21FCDCu, 0x21FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCE4u;
label_21fce4:
    // 0x21fce4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FCE4u;
    {
        const bool branch_taken_0x21fce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCE4u;
        // 0x21fce8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fce4) {
            ctx->pc = 0x21FD08u;
            goto label_21fd08;
        }
    }
    ctx->pc = 0x21FCECu;
    // 0x21fcec: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21fcecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21fcf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21fcf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fcf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21fcf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fcf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21fcf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fcfc: 0x34a5011a  ori         $a1, $a1, 0x11A
    ctx->pc = 0x21fcfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)282);
    // 0x21fd00: 0x80848e0  j           func_212380
    ctx->pc = 0x21FD00u;
    ctx->pc = 0x21FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD00u;
    // 0x21fd04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21FD08u;
label_21fd08:
    // 0x21fd08: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x21fd08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd0c: 0x262236c0  addiu       $v0, $s1, 0x36C0
    ctx->pc = 0x21fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 14016));
    // 0x21fd10: 0x262437a0  addiu       $a0, $s1, 0x37A0
    ctx->pc = 0x21fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
label_21fd14:
    // 0x21fd14: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x21fd14u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21fd18: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x21fd18u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21fd1c: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x21fd1cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21fd20: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x21fd20u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x21fd24: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x21fd24u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x21fd28: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x21fd28u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x21fd2c: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x21fd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x21fd30: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x21fd30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x21fd34: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x21fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x21fd38: 0x0  nop
    ctx->pc = 0x21fd38u;
    // NOP
    // 0x21fd3c: 0x0  nop
    ctx->pc = 0x21fd3cu;
    // NOP
    // 0x21fd40: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x21FD40u;
    {
        const bool branch_taken_0x21fd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x21FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD40u;
        // 0x21fd44: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd40) {
            ctx->pc = 0x21FD14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fd14;
        }
    }
    ctx->pc = 0x21FD48u;
    // 0x21fd48: 0x260c0008  addiu       $t4, $s0, 0x8
    ctx->pc = 0x21fd48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21fd4c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x21fd4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fd50: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x21fd50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd54: 0x26090030  addiu       $t1, $s0, 0x30
    ctx->pc = 0x21fd54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_21fd58:
    // 0x21fd58: 0xdd23fff0  ld          $v1, -0x10($t1)
    ctx->pc = 0x21fd58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 4294967280)));
    // 0x21fd5c: 0xa3140  sll         $a2, $t2, 5
    ctx->pc = 0x21fd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x21fd60: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x21fd60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21fd64: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x21fd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x21fd68: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x21fd68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x21fd6c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x21fd6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x21fd70: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x21fd70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x21fd74: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x21fd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x21fd78: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x21fd78u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x21fd7c: 0x29480004  slti        $t0, $t2, 0x4
    ctx->pc = 0x21fd7cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21fd80: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x21fd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x21fd84: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x21fd84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21fd88: 0xdd630000  ld          $v1, 0x0($t3)
    ctx->pc = 0x21fd88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x21fd8c: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x21fd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x21fd90: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x21fd90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21fd94: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x21fd94u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x21fd98: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x21fd98u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x21fd9c: 0xdd240000  ld          $a0, 0x0($t1)
    ctx->pc = 0x21fd9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x21fda0: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x21fda0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x21fda4: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x21fda4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21fda8: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x21fda8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21fdac: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x21fdacu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x21fdb0: 0x1500ffe9  bnez        $t0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x21FDB0u;
    {
        const bool branch_taken_0x21fdb0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDB0u;
        // 0x21fdb4: 0xfe020010  sd          $v0, 0x10($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fdb0) {
            ctx->pc = 0x21FD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fd58;
        }
    }
    ctx->pc = 0x21FDB8u;
    // 0x21fdb8: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x21fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x21fdbc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21fdc0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FDC0u;
    {
        const bool branch_taken_0x21fdc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21fdc0) {
            ctx->pc = 0x21FDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FDC0u;
            // 0x21fdc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FDD4u;
            goto label_21fdd4;
        }
    }
    ctx->pc = 0x21FDC8u;
    // 0x21fdc8: 0xc087854  jal         func_21E150
    ctx->pc = 0x21FDC8u;
    SET_GPR_U32(ctx, 31, 0x21FDD0u);
    ctx->pc = 0x21FDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDC8u;
    // 0x21fdcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E150u, 0x21FDC8u, 0x21FDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDD0u;
label_21fdd0:
    // 0x21fdd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21fdd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21fdd4:
    // 0x21fdd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21fdd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fdd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21fdd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fddc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21fddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fde0: 0x3e00008  jr          $ra
    ctx->pc = 0x21FDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDE0u;
        // 0x21fde4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FDE8u;
}
