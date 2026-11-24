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

// Function: sub_0034CCF0
// Address: 0x34ccf0 - 0x34d094
void sub_0034CCF0_0x34ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CCF0_0x34ccf0");
#endif

    switch (ctx->pc) {
        case 0x34cd60u: goto label_34cd60;
        case 0x34cd70u: goto label_34cd70;
        case 0x34cdf8u: goto label_34cdf8;
        case 0x34ced4u: goto label_34ced4;
        case 0x34ceecu: goto label_34ceec;
        case 0x34cf24u: goto label_34cf24;
        case 0x34cf58u: goto label_34cf58;
        case 0x34cf68u: goto label_34cf68;
        case 0x34cfd4u: goto label_34cfd4;
        case 0x34d080u: goto label_34d080;
        default: break;
    }

    ctx->pc = 0x34ccf0u;

    // 0x34ccf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x34ccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x34ccf4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34ccf8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34ccf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34ccfc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x34ccfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x34cd00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x34cd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x34cd04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34cd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cd08: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x34cd08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x34cd0c: 0x10a3008e  beq         $a1, $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x34CD0Cu;
    {
        const bool branch_taken_0x34cd0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD0Cu;
        // 0x34cd10: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cd0c) {
            ctx->pc = 0x34CF48u;
            goto label_34cf48;
        }
    }
    ctx->pc = 0x34CD14u;
    // 0x34cd14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34cd18: 0x10a30069  beq         $a1, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x34CD18u;
    {
        const bool branch_taken_0x34cd18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD18u;
        // 0x34cd1c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cd18) {
            ctx->pc = 0x34CEC0u;
            goto label_34cec0;
        }
    }
    ctx->pc = 0x34CD20u;
    // 0x34cd20: 0x10a3001f  beq         $a1, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x34CD20u;
    {
        const bool branch_taken_0x34cd20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34cd20) {
            ctx->pc = 0x34CDA0u;
            goto label_34cda0;
        }
    }
    ctx->pc = 0x34CD28u;
    // 0x34cd28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cd2c: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x34CD2Cu;
    {
        const bool branch_taken_0x34cd2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34cd2c) {
            ctx->pc = 0x34CD80u;
            goto label_34cd80;
        }
    }
    ctx->pc = 0x34CD34u;
    // 0x34cd34: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34CD34u;
    {
        const bool branch_taken_0x34cd34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cd34) {
            ctx->pc = 0x34CD48u;
            goto label_34cd48;
        }
    }
    ctx->pc = 0x34CD3Cu;
    // 0x34cd3c: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x34CD3Cu;
    {
        const bool branch_taken_0x34cd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cd3c) {
            ctx->pc = 0x34D080u;
            goto label_34d080;
        }
    }
    ctx->pc = 0x34CD44u;
    // 0x34cd44: 0x0  nop
    ctx->pc = 0x34cd44u;
    // NOP
label_34cd48:
    // 0x34cd48: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34CD48u;
    {
        const bool branch_taken_0x34cd48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cd48) {
            ctx->pc = 0x34CD68u;
            goto label_34cd68;
        }
    }
    ctx->pc = 0x34CD50u;
    // 0x34cd50: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x34cd50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x34cd54: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x34cd54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x34cd58: 0xc0a927c  jal         func_2A49F0
    ctx->pc = 0x34CD58u;
    SET_GPR_U32(ctx, 31, 0x34CD60u);
    ctx->pc = 0x34CD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CD58u;
    // 0x34cd5c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A49F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A49F0u, 0x34CD58u, 0x34CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD60u;
label_34cd60:
    // 0x34cd60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34CD60u;
    {
        const bool branch_taken_0x34cd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD60u;
        // 0x34cd64: 0xae220550  sw          $v0, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cd60) {
            ctx->pc = 0x34CD70u;
            goto label_34cd70;
        }
    }
    ctx->pc = 0x34CD68u;
label_34cd68:
    // 0x34cd68: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34CD68u;
    SET_GPR_U32(ctx, 31, 0x34CD70u);
    ctx->pc = 0x34CD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CD68u;
    // 0x34cd6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34CD68u, 0x34CD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD70u;
label_34cd70:
    // 0x34cd70: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x34cd70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x34cd74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34cd78: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x34CD78u;
    {
        const bool branch_taken_0x34cd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD78u;
        // 0x34cd7c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cd78) {
            ctx->pc = 0x34D080u;
            goto label_34d080;
        }
    }
    ctx->pc = 0x34CD80u;
label_34cd80:
    // 0x34cd80: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x34cd80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x34cd84: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x34cd84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x34cd88: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x34cd88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x34cd8c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x34cd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cd90: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x34cd90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cd94: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x34cd94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x34cd98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34cd9c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x34cd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_34cda0:
    // 0x34cda0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34cda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34cda4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x34cda4u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x34cda8: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x34cda8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34cdac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34cdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cdb0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x34cdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34cdb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34cdb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cdb8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34cdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34cdbc: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x34cdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x34cdc0: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x34cdc0u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x34cdc4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34cdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34cdc8: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x34cdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x34cdcc: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x34cdccu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x34cdd0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34cdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34cdd4: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x34cdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x34cdd8: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x34cdd8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x34cddc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x34cddcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x34cde0: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x34cde0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x34cde4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x34cde4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x34cde8: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x34cde8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x34cdec: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x34cdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34cdf0: 0xc0c0900  jal         func_302400
    ctx->pc = 0x34CDF0u;
    SET_GPR_U32(ctx, 31, 0x34CDF8u);
    ctx->pc = 0x34CDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CDF0u;
    // 0x34cdf4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x34CDF0u, 0x34CDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CDF8u;
label_34cdf8:
    // 0x34cdf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34CDF8u;
    {
        const bool branch_taken_0x34cdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cdf8) {
            ctx->pc = 0x34CE10u;
            goto label_34ce10;
        }
    }
    ctx->pc = 0x34CE00u;
    // 0x34ce00: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x34ce00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x34ce04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34ce08: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x34CE08u;
    {
        const bool branch_taken_0x34ce08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CE08u;
        // 0x34ce0c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ce08) {
            ctx->pc = 0x34D080u;
            goto label_34d080;
        }
    }
    ctx->pc = 0x34CE10u;
label_34ce10:
    // 0x34ce10: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x34ce10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x34ce14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34CE14u;
    {
        const bool branch_taken_0x34ce14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CE14u;
        // 0x34ce18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ce14) {
            ctx->pc = 0x34CE28u;
            goto label_34ce28;
        }
    }
    ctx->pc = 0x34CE1Cu;
    // 0x34ce1c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x34CE1Cu;
    {
        const bool branch_taken_0x34ce1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ce1c) {
            ctx->pc = 0x34CEA8u;
            goto label_34cea8;
        }
    }
    ctx->pc = 0x34CE24u;
    // 0x34ce24: 0x0  nop
    ctx->pc = 0x34ce24u;
    // NOP
label_34ce28:
    // 0x34ce28: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x34ce28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34ce2c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x34ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x34ce30: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34ce30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34ce34: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34ce34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34ce38: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x34ce38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x34ce3c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34CE3Cu;
    {
        const bool branch_taken_0x34ce3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34ce3c) {
            ctx->pc = 0x34CE78u;
            goto label_34ce78;
        }
    }
    ctx->pc = 0x34CE44u;
    // 0x34ce44: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x34ce44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34ce48: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x34ce48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x34ce4c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x34CE4Cu;
    {
        const bool branch_taken_0x34ce4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CE4Cu;
        // 0x34ce50: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ce4c) {
            ctx->pc = 0x34CEA0u;
            goto label_34cea0;
        }
    }
    ctx->pc = 0x34CE54u;
    // 0x34ce54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34ce54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ce58: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x34ce58u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34ce5c: 0x0  nop
    ctx->pc = 0x34ce5cu;
    // NOP
    // 0x34ce60: 0x0  nop
    ctx->pc = 0x34ce60u;
    // NOP
    // 0x34ce64: 0x2010  mfhi        $a0
    ctx->pc = 0x34ce64u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34ce68: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34ce68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34ce6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34CE6Cu;
    {
        const bool branch_taken_0x34ce6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CE6Cu;
        // 0x34ce70: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ce6c) {
            ctx->pc = 0x34CEA0u;
            goto label_34cea0;
        }
    }
    ctx->pc = 0x34CE74u;
    // 0x34ce74: 0x0  nop
    ctx->pc = 0x34ce74u;
    // NOP
label_34ce78:
    // 0x34ce78: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x34ce78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34ce7c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x34ce7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34ce80: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34CE80u;
    {
        const bool branch_taken_0x34ce80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ce80) {
            ctx->pc = 0x34CEA0u;
            goto label_34cea0;
        }
    }
    ctx->pc = 0x34CE88u;
    // 0x34ce88: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34ce88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34ce8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34ce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ce90: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x34ce90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ce94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34CE94u;
    {
        const bool branch_taken_0x34ce94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CE94u;
        // 0x34ce98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ce94) {
            ctx->pc = 0x34CEA8u;
            goto label_34cea8;
        }
    }
    ctx->pc = 0x34CE9Cu;
    // 0x34ce9c: 0x0  nop
    ctx->pc = 0x34ce9cu;
    // NOP
label_34cea0:
    // 0x34cea0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cea4: 0x0  nop
    ctx->pc = 0x34cea4u;
    // NOP
label_34cea8:
    // 0x34cea8: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x34CEA8u;
    {
        const bool branch_taken_0x34cea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34cea8) {
            ctx->pc = 0x34D080u;
            goto label_34d080;
        }
    }
    ctx->pc = 0x34CEB0u;
    // 0x34ceb0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x34ceb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x34ceb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34ceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34ceb8: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x34CEB8u;
    {
        const bool branch_taken_0x34ceb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CEB8u;
        // 0x34cebc: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ceb8) {
            ctx->pc = 0x34D080u;
            goto label_34d080;
        }
    }
    ctx->pc = 0x34CEC0u;
label_34cec0:
    // 0x34cec0: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x34cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x34cec4: 0xa2220558  sb          $v0, 0x558($s1)
    ctx->pc = 0x34cec4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1368), (uint8_t)GPR_U32(ctx, 2));
    // 0x34cec8: 0xa620053c  sh          $zero, 0x53C($s1)
    ctx->pc = 0x34cec8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1340), (uint16_t)GPR_U32(ctx, 0));
    // 0x34cecc: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x34CECCu;
    SET_GPR_U32(ctx, 31, 0x34CED4u);
    ctx->pc = 0x34CED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CECCu;
    // 0x34ced0: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x34CECCu, 0x34CED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CED4u;
label_34ced4:
    // 0x34ced4: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x34CED4u;
    {
        const bool branch_taken_0x34ced4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CED4u;
        // 0x34ced8: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ced4) {
            ctx->pc = 0x34CF28u;
            goto label_34cf28;
        }
    }
    ctx->pc = 0x34CEDCu;
    // 0x34cedc: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x34cedcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x34cee0: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x34cee0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x34cee4: 0xc0a99e8  jal         func_2A67A0
    ctx->pc = 0x34CEE4u;
    SET_GPR_U32(ctx, 31, 0x34CEECu);
    ctx->pc = 0x34CEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CEE4u;
    // 0x34cee8: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A67A0u, 0x34CEE4u, 0x34CEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CEECu;
label_34ceec:
    // 0x34ceec: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x34ceecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x34cef0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x34cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x34cef4: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x34cef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x34cef8: 0x3c021300  lui         $v0, 0x1300
    ctx->pc = 0x34cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4864 << 16));
    // 0x34cefc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x34cefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x34cf00: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x34cf00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x34cf04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34cf04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cf08: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x34cf08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x34cf0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34cf0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cf10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34cf10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cf14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x34cf14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cf18: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x34cf18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cf1c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x34CF1Cu;
    SET_GPR_U32(ctx, 31, 0x34CF24u);
    ctx->pc = 0x34CF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CF1Cu;
    // 0x34cf20: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x34CF1Cu, 0x34CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CF24u;
label_34cf24:
    // 0x34cf24: 0x0  nop
    ctx->pc = 0x34cf24u;
    // NOP
label_34cf28:
    // 0x34cf28: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x34cf28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x34cf2c: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x34cf2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x34cf30: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x34cf30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x34cf34: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x34cf34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cf38: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x34cf38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cf3c: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x34cf3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x34cf40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34cf44: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x34cf44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_34cf48:
    // 0x34cf48: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x34cf48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x34cf4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34cf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cf50: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x34CF50u;
    SET_GPR_U32(ctx, 31, 0x34CF58u);
    ctx->pc = 0x34CF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CF50u;
    // 0x34cf54: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x34CF50u, 0x34CF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CF58u;
label_34cf58:
    // 0x34cf58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34CF58u;
    {
        const bool branch_taken_0x34cf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF58u;
        // 0x34cf5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cf58) {
            ctx->pc = 0x34CF68u;
            goto label_34cf68;
        }
    }
    ctx->pc = 0x34CF60u;
    // 0x34cf60: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34CF60u;
    SET_GPR_U32(ctx, 31, 0x34CF68u);
    ctx->pc = 0x34CF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CF60u;
    // 0x34cf64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34CF60u, 0x34CF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CF68u;
label_34cf68:
    // 0x34cf68: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x34cf68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34cf6c: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x34CF6Cu;
    {
        const bool branch_taken_0x34cf6c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x34CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF6Cu;
        // 0x34cf70: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cf6c) {
            ctx->pc = 0x34CFD8u;
            goto label_34cfd8;
        }
    }
    ctx->pc = 0x34CF74u;
    // 0x34cf74: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x34CF74u;
    {
        const bool branch_taken_0x34cf74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cf74) {
            ctx->pc = 0x34CFD8u;
            goto label_34cfd8;
        }
    }
    ctx->pc = 0x34CF7Cu;
    // 0x34cf7c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34cf7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34cf80: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x34cf80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34cf84: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x34cf84u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x34cf88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34cf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cf8c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x34cf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34cf90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34cf90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cf94: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34cf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34cf98: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x34cf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x34cf9c: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x34cf9cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x34cfa0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34cfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34cfa4: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x34cfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x34cfa8: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x34cfa8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x34cfac: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34cfacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34cfb0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x34cfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x34cfb4: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x34cfb4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x34cfb8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x34cfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x34cfbc: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x34cfbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x34cfc0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x34cfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x34cfc4: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x34cfc4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x34cfc8: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x34cfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34cfcc: 0xc0c0900  jal         func_302400
    ctx->pc = 0x34CFCCu;
    SET_GPR_U32(ctx, 31, 0x34CFD4u);
    ctx->pc = 0x34CFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CFCCu;
    // 0x34cfd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x34CFCCu, 0x34CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CFD4u;
label_34cfd4:
    // 0x34cfd4: 0x0  nop
    ctx->pc = 0x34cfd4u;
    // NOP
label_34cfd8:
    // 0x34cfd8: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x34cfd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x34cfdc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34CFDCu;
    {
        const bool branch_taken_0x34cfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CFDCu;
        // 0x34cfe0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cfdc) {
            ctx->pc = 0x34CFF0u;
            goto label_34cff0;
        }
    }
    ctx->pc = 0x34CFE4u;
    // 0x34cfe4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x34CFE4u;
    {
        const bool branch_taken_0x34cfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cfe4) {
            ctx->pc = 0x34D070u;
            goto label_34d070;
        }
    }
    ctx->pc = 0x34CFECu;
    // 0x34cfec: 0x0  nop
    ctx->pc = 0x34cfecu;
    // NOP
label_34cff0:
    // 0x34cff0: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x34cff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34cff4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x34cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x34cff8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34cffc: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34cffcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34d000: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x34d000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x34d004: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34D004u;
    {
        const bool branch_taken_0x34d004 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34d004) {
            ctx->pc = 0x34D040u;
            goto label_34d040;
        }
    }
    ctx->pc = 0x34D00Cu;
    // 0x34d00c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x34d00cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34d010: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x34d010u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x34d014: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x34D014u;
    {
        const bool branch_taken_0x34d014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D014u;
        // 0x34d018: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d014) {
            ctx->pc = 0x34D068u;
            goto label_34d068;
        }
    }
    ctx->pc = 0x34D01Cu;
    // 0x34d01c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d020: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x34d020u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34d024: 0x0  nop
    ctx->pc = 0x34d024u;
    // NOP
    // 0x34d028: 0x0  nop
    ctx->pc = 0x34d028u;
    // NOP
    // 0x34d02c: 0x2010  mfhi        $a0
    ctx->pc = 0x34d02cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34d030: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34d030u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34d034: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34D034u;
    {
        const bool branch_taken_0x34d034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D034u;
        // 0x34d038: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d034) {
            ctx->pc = 0x34D068u;
            goto label_34d068;
        }
    }
    ctx->pc = 0x34D03Cu;
    // 0x34d03c: 0x0  nop
    ctx->pc = 0x34d03cu;
    // NOP
label_34d040:
    // 0x34d040: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x34d040u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34d044: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x34d044u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34d048: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34D048u;
    {
        const bool branch_taken_0x34d048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d048) {
            ctx->pc = 0x34D068u;
            goto label_34d068;
        }
    }
    ctx->pc = 0x34D050u;
    // 0x34d050: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34d050u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34d054: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34d054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d058: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x34d058u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d05c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34D05Cu;
    {
        const bool branch_taken_0x34d05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D05Cu;
        // 0x34d060: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d05c) {
            ctx->pc = 0x34D070u;
            goto label_34d070;
        }
    }
    ctx->pc = 0x34D064u;
    // 0x34d064: 0x0  nop
    ctx->pc = 0x34d064u;
    // NOP
label_34d068:
    // 0x34d068: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34d068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d06c: 0x0  nop
    ctx->pc = 0x34d06cu;
    // NOP
label_34d070:
    // 0x34d070: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D070u;
    {
        const bool branch_taken_0x34d070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D070u;
        // 0x34d074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d070) {
            ctx->pc = 0x34D080u;
            goto label_34d080;
        }
    }
    ctx->pc = 0x34D078u;
    // 0x34d078: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34D078u;
    SET_GPR_U32(ctx, 31, 0x34D080u);
    ctx->pc = 0x34D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D078u;
    // 0x34d07c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34D078u, 0x34D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D080u;
label_34d080:
    // 0x34d080: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34d080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34d084: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34d084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d088: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34d088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d08c: 0x3e00008  jr          $ra
    ctx->pc = 0x34D08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D08Cu;
        // 0x34d090: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D094u;
}
