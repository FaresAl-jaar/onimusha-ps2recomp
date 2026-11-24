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

// Function: sub_0031DB00
// Address: 0x31db00 - 0x31dc58
void sub_0031DB00_0x31db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DB00_0x31db00");
#endif

    switch (ctx->pc) {
        case 0x31db38u: goto label_31db38;
        default: break;
    }

    ctx->pc = 0x31db00u;

    // 0x31db00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31db04: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x31db04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x31db08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31db08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31db0c: 0x2442f380  addiu       $v0, $v0, -0xC80
    ctx->pc = 0x31db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964096));
    // 0x31db10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31db10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31db14: 0x3c06c47a  lui         $a2, 0xC47A
    ctx->pc = 0x31db14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50298 << 16));
    // 0x31db18: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x31db18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31db1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31db1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31db20: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x31db20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x31db24: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31db24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31db28: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x31db28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x31db2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31db30: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x31DB30u;
    SET_GPR_U32(ctx, 31, 0x31DB38u);
    ctx->pc = 0x31DB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DB30u;
    // 0x31db34: 0xac460004  sw          $a2, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x31DB30u, 0x31DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DB38u;
label_31db38:
    // 0x31db38: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x31db38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x31db3c: 0x24030b40  addiu       $v1, $zero, 0xB40
    ctx->pc = 0x31db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2880));
    // 0x31db40: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x31db40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x31db44: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x31DB44u;
    {
        const bool branch_taken_0x31db44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31db44) {
            ctx->pc = 0x31DC18u;
            goto label_31dc18;
        }
    }
    ctx->pc = 0x31DB4Cu;
    // 0x31db4c: 0x24030a44  addiu       $v1, $zero, 0xA44
    ctx->pc = 0x31db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2628));
    // 0x31db50: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x31DB50u;
    {
        const bool branch_taken_0x31db50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31db50) {
            ctx->pc = 0x31DC08u;
            goto label_31dc08;
        }
    }
    ctx->pc = 0x31DB58u;
    // 0x31db58: 0x2403078a  addiu       $v1, $zero, 0x78A
    ctx->pc = 0x31db58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1930));
    // 0x31db5c: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x31DB5Cu;
    {
        const bool branch_taken_0x31db5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31db5c) {
            ctx->pc = 0x31DBF8u;
            goto label_31dbf8;
        }
    }
    ctx->pc = 0x31DB64u;
    // 0x31db64: 0x24030789  addiu       $v1, $zero, 0x789
    ctx->pc = 0x31db64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1929));
    // 0x31db68: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x31DB68u;
    {
        const bool branch_taken_0x31db68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31db68) {
            ctx->pc = 0x31DBE8u;
            goto label_31dbe8;
        }
    }
    ctx->pc = 0x31DB70u;
    // 0x31db70: 0x24030784  addiu       $v1, $zero, 0x784
    ctx->pc = 0x31db70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1924));
    // 0x31db74: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x31DB74u;
    {
        const bool branch_taken_0x31db74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31db74) {
            ctx->pc = 0x31DBD8u;
            goto label_31dbd8;
        }
    }
    ctx->pc = 0x31DB7Cu;
    // 0x31db7c: 0x24030783  addiu       $v1, $zero, 0x783
    ctx->pc = 0x31db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1923));
    // 0x31db80: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x31DB80u;
    {
        const bool branch_taken_0x31db80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31db80) {
            ctx->pc = 0x31DBC8u;
            goto label_31dbc8;
        }
    }
    ctx->pc = 0x31DB88u;
    // 0x31db88: 0x24030345  addiu       $v1, $zero, 0x345
    ctx->pc = 0x31db88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 837));
    // 0x31db8c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31DB8Cu;
    {
        const bool branch_taken_0x31db8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31db8c) {
            ctx->pc = 0x31DBB8u;
            goto label_31dbb8;
        }
    }
    ctx->pc = 0x31DB94u;
    // 0x31db94: 0x240302c6  addiu       $v1, $zero, 0x2C6
    ctx->pc = 0x31db94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 710));
    // 0x31db98: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DB98u;
    {
        const bool branch_taken_0x31db98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31db98) {
            ctx->pc = 0x31DBA8u;
            goto label_31dba8;
        }
    }
    ctx->pc = 0x31DBA0u;
    // 0x31dba0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31DBA0u;
    {
        const bool branch_taken_0x31dba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dba0) {
            ctx->pc = 0x31DC28u;
            goto label_31dc28;
        }
    }
    ctx->pc = 0x31DBA8u;
label_31dba8:
    // 0x31dba8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x31dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x31dbac: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x31DBACu;
    {
        const bool branch_taken_0x31dbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBACu;
        // 0x31dbb0: 0xae0306c4  sw          $v1, 0x6C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbac) {
            ctx->pc = 0x31DC30u;
            goto label_31dc30;
        }
    }
    ctx->pc = 0x31DBB4u;
    // 0x31dbb4: 0x0  nop
    ctx->pc = 0x31dbb4u;
    // NOP
label_31dbb8:
    // 0x31dbb8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31dbbc: 0x34631100  ori         $v1, $v1, 0x1100
    ctx->pc = 0x31dbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4352);
    // 0x31dbc0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x31DBC0u;
    {
        const bool branch_taken_0x31dbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBC0u;
        // 0x31dbc4: 0xae0306c4  sw          $v1, 0x6C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbc0) {
            ctx->pc = 0x31DC30u;
            goto label_31dc30;
        }
    }
    ctx->pc = 0x31DBC8u;
label_31dbc8:
    // 0x31dbc8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x31dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x31dbcc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x31DBCCu;
    {
        const bool branch_taken_0x31dbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBCCu;
        // 0x31dbd0: 0xae0306c4  sw          $v1, 0x6C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbcc) {
            ctx->pc = 0x31DC30u;
            goto label_31dc30;
        }
    }
    ctx->pc = 0x31DBD4u;
    // 0x31dbd4: 0x0  nop
    ctx->pc = 0x31dbd4u;
    // NOP
label_31dbd8:
    // 0x31dbd8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x31dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x31dbdc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31DBDCu;
    {
        const bool branch_taken_0x31dbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBDCu;
        // 0x31dbe0: 0xae0306c4  sw          $v1, 0x6C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbdc) {
            ctx->pc = 0x31DC30u;
            goto label_31dc30;
        }
    }
    ctx->pc = 0x31DBE4u;
    // 0x31dbe4: 0x0  nop
    ctx->pc = 0x31dbe4u;
    // NOP
label_31dbe8:
    // 0x31dbe8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31dbec: 0x34631100  ori         $v1, $v1, 0x1100
    ctx->pc = 0x31dbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4352);
    // 0x31dbf0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x31DBF0u;
    {
        const bool branch_taken_0x31dbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBF0u;
        // 0x31dbf4: 0xae0306c4  sw          $v1, 0x6C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbf0) {
            ctx->pc = 0x31DC30u;
            goto label_31dc30;
        }
    }
    ctx->pc = 0x31DBF8u;
label_31dbf8:
    // 0x31dbf8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31dbfc: 0x34631100  ori         $v1, $v1, 0x1100
    ctx->pc = 0x31dbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4352);
    // 0x31dc00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31DC00u;
    {
        const bool branch_taken_0x31dc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC00u;
        // 0x31dc04: 0xae0306c4  sw          $v1, 0x6C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc00) {
            ctx->pc = 0x31DC30u;
            goto label_31dc30;
        }
    }
    ctx->pc = 0x31DC08u;
label_31dc08:
    // 0x31dc08: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31dc0c: 0x34631100  ori         $v1, $v1, 0x1100
    ctx->pc = 0x31dc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4352);
    // 0x31dc10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31DC10u;
    {
        const bool branch_taken_0x31dc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC10u;
        // 0x31dc14: 0xae0306c4  sw          $v1, 0x6C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc10) {
            ctx->pc = 0x31DC30u;
            goto label_31dc30;
        }
    }
    ctx->pc = 0x31DC18u;
label_31dc18:
    // 0x31dc18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31dc1c: 0x34631100  ori         $v1, $v1, 0x1100
    ctx->pc = 0x31dc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4352);
    // 0x31dc20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31DC20u;
    {
        const bool branch_taken_0x31dc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC20u;
        // 0x31dc24: 0xae0306c4  sw          $v1, 0x6C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc20) {
            ctx->pc = 0x31DC30u;
            goto label_31dc30;
        }
    }
    ctx->pc = 0x31DC28u;
label_31dc28:
    // 0x31dc28: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x31dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x31dc2c: 0xae0306c4  sw          $v1, 0x6C4($s0)
    ctx->pc = 0x31dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1732), GPR_U32(ctx, 3));
label_31dc30:
    // 0x31dc30: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x31dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x31dc34: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x31dc34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x31dc38: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x31dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x31dc3c: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x31dc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x31dc40: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x31dc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31dc44: 0xe6002b50  swc1        $f0, 0x2B50($s0)
    ctx->pc = 0x31dc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11088), bits); }
    // 0x31dc48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31dc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31dc4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31dc4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31dc50: 0x3e00008  jr          $ra
    ctx->pc = 0x31DC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC50u;
        // 0x31dc54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DC58u;
}
