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

// Function: sub_00368D60
// Address: 0x368d60 - 0x368eb4
void sub_00368D60_0x368d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368D60_0x368d60");
#endif

    switch (ctx->pc) {
        case 0x368da8u: goto label_368da8;
        case 0x368e20u: goto label_368e20;
        default: break;
    }

    ctx->pc = 0x368d60u;

    // 0x368d60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x368d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x368d64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x368d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x368d6c: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x368d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x368d70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x368d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x368d74: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x368d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x368d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x368d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x368d7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x368d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d80: 0x8782836c  lh          $v0, -0x7C94($gp)
    ctx->pc = 0x368d80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935404)));
    // 0x368d84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x368d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d88: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x368d88u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x368d8c: 0x87828370  lh          $v0, -0x7C90($gp)
    ctx->pc = 0x368d8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935408)));
    // 0x368d90: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x368d90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x368d94: 0xac8007a4  sw          $zero, 0x7A4($a0)
    ctx->pc = 0x368d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1956), GPR_U32(ctx, 0));
    // 0x368d98: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x368d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x368d9c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x368d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x368da0: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x368DA0u;
    SET_GPR_U32(ctx, 31, 0x368DA8u);
    ctx->pc = 0x368DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368DA0u;
    // 0x368da4: 0xac820148  sw          $v0, 0x148($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x368DA0u, 0x368DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368DA8u;
label_368da8:
    // 0x368da8: 0x92240821  lbu         $a0, 0x821($s1)
    ctx->pc = 0x368da8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x368dac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x368dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x368db0: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x368DB0u;
    {
        const bool branch_taken_0x368db0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x368DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368DB0u;
        // 0x368db4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368db0) {
            ctx->pc = 0x368E90u;
            goto label_368e90;
        }
    }
    ctx->pc = 0x368DB8u;
    // 0x368db8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x368db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368dbc: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x368DBCu;
    {
        const bool branch_taken_0x368dbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x368DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368DBCu;
        // 0x368dc0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368dbc) {
            ctx->pc = 0x368E80u;
            goto label_368e80;
        }
    }
    ctx->pc = 0x368DC4u;
    // 0x368dc4: 0x10870016  beq         $a0, $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x368DC4u;
    {
        const bool branch_taken_0x368dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x368dc4) {
            ctx->pc = 0x368E20u;
            goto label_368e20;
        }
    }
    ctx->pc = 0x368DCCu;
    // 0x368dcc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x368DCCu;
    {
        const bool branch_taken_0x368dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x368dcc) {
            ctx->pc = 0x368DE0u;
            goto label_368de0;
        }
    }
    ctx->pc = 0x368DD4u;
    // 0x368dd4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x368DD4u;
    {
        const bool branch_taken_0x368dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368dd4) {
            ctx->pc = 0x368EA0u;
            goto label_368ea0;
        }
    }
    ctx->pc = 0x368DDCu;
    // 0x368ddc: 0x0  nop
    ctx->pc = 0x368ddcu;
    // NOP
label_368de0:
    // 0x368de0: 0x92260839  lbu         $a2, 0x839($s1)
    ctx->pc = 0x368de0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2105)));
    // 0x368de4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x368de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x368de8: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x368de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x368dec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x368decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x368df0: 0x262407a0  addiu       $a0, $s1, 0x7A0
    ctx->pc = 0x368df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
    // 0x368df4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x368df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x368df8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x368df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368dfc: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x368dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x368e00: 0x9042003c  lbu         $v0, 0x3C($v0)
    ctx->pc = 0x368e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x368e04: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x368e04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x368e08: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x368e08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x368e0c: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x368e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x368e10: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x368e10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x368e14: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x368e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x368e18: 0xc0414dc  jal         func_105370
    ctx->pc = 0x368E18u;
    SET_GPR_U32(ctx, 31, 0x368E20u);
    ctx->pc = 0x368E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368E18u;
    // 0x368e1c: 0xa2270821  sb          $a3, 0x821($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x368E18u, 0x368E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E20u;
label_368e20:
    // 0x368e20: 0x9224000a  lbu         $a0, 0xA($s1)
    ctx->pc = 0x368e20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x368e24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x368e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368e28: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x368E28u;
    {
        const bool branch_taken_0x368e28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x368e28) {
            ctx->pc = 0x368E68u;
            goto label_368e68;
        }
    }
    ctx->pc = 0x368E30u;
    // 0x368e30: 0x92240640  lbu         $a0, 0x640($s1)
    ctx->pc = 0x368e30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x368e34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x368e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368e38: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x368E38u;
    {
        const bool branch_taken_0x368e38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x368e38) {
            ctx->pc = 0x368E68u;
            goto label_368e68;
        }
    }
    ctx->pc = 0x368E40u;
    // 0x368e40: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x368e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x368e44: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x368e44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368e48: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x368E48u;
    {
        const bool branch_taken_0x368e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x368e48) {
            ctx->pc = 0x368E68u;
            goto label_368e68;
        }
    }
    ctx->pc = 0x368E50u;
    // 0x368e50: 0x96230786  lhu         $v1, 0x786($s1)
    ctx->pc = 0x368e50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1926)));
    // 0x368e54: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x368E54u;
    {
        const bool branch_taken_0x368e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x368E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E54u;
        // 0x368e58: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368e54) {
            ctx->pc = 0x368E68u;
            goto label_368e68;
        }
    }
    ctx->pc = 0x368E5Cu;
    // 0x368e5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x368E5Cu;
    {
        const bool branch_taken_0x368e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E5Cu;
        // 0x368e60: 0xa62307f0  sh          $v1, 0x7F0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368e5c) {
            ctx->pc = 0x368E70u;
            goto label_368e70;
        }
    }
    ctx->pc = 0x368E64u;
    // 0x368e64: 0x0  nop
    ctx->pc = 0x368e64u;
    // NOP
label_368e68:
    // 0x368e68: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x368e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x368e6c: 0xa62307f0  sh          $v1, 0x7F0($s1)
    ctx->pc = 0x368e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 3));
label_368e70:
    // 0x368e70: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x368e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x368e74: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x368E74u;
    {
        const bool branch_taken_0x368e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x368E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E74u;
        // 0x368e78: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368e74) {
            ctx->pc = 0x368EA0u;
            goto label_368ea0;
        }
    }
    ctx->pc = 0x368E7Cu;
    // 0x368e7c: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x368e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_368e80:
    // 0x368e80: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x368E80u;
    {
        const bool branch_taken_0x368e80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x368E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E80u;
        // 0x368e84: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368e80) {
            ctx->pc = 0x368EA0u;
            goto label_368ea0;
        }
    }
    ctx->pc = 0x368E88u;
    // 0x368e88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x368E88u;
    {
        const bool branch_taken_0x368e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E88u;
        // 0x368e8c: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368e88) {
            ctx->pc = 0x368EA0u;
            goto label_368ea0;
        }
    }
    ctx->pc = 0x368E90u;
label_368e90:
    // 0x368e90: 0x92230839  lbu         $v1, 0x839($s1)
    ctx->pc = 0x368e90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2105)));
    // 0x368e94: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x368e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x368e98: 0x90630038  lbu         $v1, 0x38($v1)
    ctx->pc = 0x368e98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x368e9c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x368e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_368ea0:
    // 0x368ea0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x368ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368ea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x368ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x368ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368eac: 0x3e00008  jr          $ra
    ctx->pc = 0x368EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368EACu;
        // 0x368eb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368EB4u;
}
