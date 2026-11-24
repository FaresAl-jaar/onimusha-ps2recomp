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

// Function: sub_003DCCD0
// Address: 0x3dccd0 - 0x3dce38
void sub_003DCCD0_0x3dccd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCCD0_0x3dccd0");
#endif

    switch (ctx->pc) {
        case 0x3dcd48u: goto label_3dcd48;
        case 0x3dcd98u: goto label_3dcd98;
        case 0x3dcdc8u: goto label_3dcdc8;
        case 0x3dcdf8u: goto label_3dcdf8;
        default: break;
    }

    ctx->pc = 0x3dccd0u;

    // 0x3dccd0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x3dccd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3dccd4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dccd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dccd8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3dccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3dccdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dccdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dcce0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3dcce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3dcce4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dcce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dcce8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3dcce8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3dccec: 0xa080001b  sb          $zero, 0x1B($a0)
    ctx->pc = 0x3dccecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dccf0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x3dccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x3dccf4: 0xa0870018  sb          $a3, 0x18($a0)
    ctx->pc = 0x3dccf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 7));
    // 0x3dccf8: 0xa0880019  sb          $t0, 0x19($a0)
    ctx->pc = 0x3dccf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 8));
    // 0x3dccfc: 0x90850019  lbu         $a1, 0x19($a0)
    ctx->pc = 0x3dccfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x3dcd00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dcd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dcd04: 0x90830018  lbu         $v1, 0x18($a0)
    ctx->pc = 0x3dcd04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3dcd08: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3dcd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3dcd0c: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x3dcd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3dcd10: 0xa083001a  sb          $v1, 0x1A($a0)
    ctx->pc = 0x3dcd10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dcd14: 0x1810  mfhi        $v1
    ctx->pc = 0x3dcd14u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3dcd18: 0xa086001c  sb          $a2, 0x1C($a0)
    ctx->pc = 0x3dcd18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 6));
    // 0x3dcd1c: 0xa083001d  sb          $v1, 0x1D($a0)
    ctx->pc = 0x3dcd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dcd20: 0xa089001e  sb          $t1, 0x1E($a0)
    ctx->pc = 0x3dcd20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 9));
    // 0x3dcd24: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3dcd24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3dcd28: 0x90850018  lbu         $a1, 0x18($a0)
    ctx->pc = 0x3dcd28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3dcd2c: 0x90820019  lbu         $v0, 0x19($a0)
    ctx->pc = 0x3dcd2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x3dcd30: 0x45082b  sltu        $at, $v0, $a1
    ctx->pc = 0x3dcd30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3dcd34: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3DCD34u;
    {
        const bool branch_taken_0x3dcd34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DCD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCD34u;
        // 0x3dcd38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcd34) {
            ctx->pc = 0x3DCD78u;
            goto label_3dcd78;
        }
    }
    ctx->pc = 0x3DCD3Cu;
    // 0x3dcd3c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x3dcd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3dcd40: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3dcd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3dcd44: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x3dcd44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_3dcd48:
    // 0x3dcd48: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3dcd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3dcd4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dcd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dcd50: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x3dcd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x3dcd54: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x3dcd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dcd58: 0x946200c6  lhu         $v0, 0xC6($v1)
    ctx->pc = 0x3dcd58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 198)));
    // 0x3dcd5c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3dcd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3dcd60: 0xa46200c6  sh          $v0, 0xC6($v1)
    ctx->pc = 0x3dcd60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 198), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dcd64: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x3dcd64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x3dcd68: 0x45082b  sltu        $at, $v0, $a1
    ctx->pc = 0x3dcd68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3dcd6c: 0x1020fff6  beqz        $at, . + 4 + (-0xA << 2)
    ctx->pc = 0x3DCD6Cu;
    {
        const bool branch_taken_0x3dcd6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCD6Cu;
        // 0x3dcd70: 0x248400e0  addiu       $a0, $a0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcd6c) {
            ctx->pc = 0x3DCD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dcd48;
        }
    }
    ctx->pc = 0x3DCD74u;
    // 0x3dcd74: 0x0  nop
    ctx->pc = 0x3dcd74u;
    // NOP
label_3dcd78:
    // 0x3dcd78: 0x9203001a  lbu         $v1, 0x1A($s0)
    ctx->pc = 0x3dcd78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x3dcd7c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x3dcd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x3dcd80: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3dcd80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3dcd84: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x3dcd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x3dcd88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3dcd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3dcd8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3dcd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dcd90: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x3DCD90u;
    SET_GPR_U32(ctx, 31, 0x3DCD98u);
    ctx->pc = 0x3DCD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCD90u;
    // 0x3dcd94: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x3DCD90u, 0x3DCD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCD98u;
label_3dcd98:
    // 0x3dcd98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3dcd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3dcd9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3dcd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dcda0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3DCDA0u;
    {
        const bool branch_taken_0x3dcda0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dcda0) {
            ctx->pc = 0x3DCE28u;
            goto label_3dce28;
        }
    }
    ctx->pc = 0x3DCDA8u;
    // 0x3dcda8: 0x9203001e  lbu         $v1, 0x1E($s0)
    ctx->pc = 0x3dcda8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x3dcdac: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x3dcdacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x3dcdb0: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x3dcdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x3dcdb4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3dcdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3dcdb8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3dcdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3dcdbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3dcdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dcdc0: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x3DCDC0u;
    SET_GPR_U32(ctx, 31, 0x3DCDC8u);
    ctx->pc = 0x3DCDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCDC0u;
    // 0x3dcdc4: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x3DCDC0u, 0x3DCDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCDC8u;
label_3dcdc8:
    // 0x3dcdc8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3dcdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3dcdcc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3dcdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3dcdd0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3DCDD0u;
    {
        const bool branch_taken_0x3dcdd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dcdd0) {
            ctx->pc = 0x3DCE28u;
            goto label_3dce28;
        }
    }
    ctx->pc = 0x3DCDD8u;
    // 0x3dcdd8: 0x9203001b  lbu         $v1, 0x1B($s0)
    ctx->pc = 0x3dcdd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27)));
    // 0x3dcddc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3dcddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3dcde0: 0xa203001b  sb          $v1, 0x1B($s0)
    ctx->pc = 0x3dcde0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dcde4: 0x9203001a  lbu         $v1, 0x1A($s0)
    ctx->pc = 0x3dcde4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x3dcde8: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x3dcde8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dcdec: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x3DCDECu;
    {
        const bool branch_taken_0x3dcdec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCDECu;
        // 0x3dcdf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcdec) {
            ctx->pc = 0x3DCE18u;
            goto label_3dce18;
        }
    }
    ctx->pc = 0x3DCDF4u;
    // 0x3dcdf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3dcdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dcdf8:
    // 0x3dcdf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3dcdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dcdfc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dcdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dce00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3dce00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dce04: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x3dce04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x3dce08: 0x9203001a  lbu         $v1, 0x1A($s0)
    ctx->pc = 0x3dce08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x3dce0c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x3dce0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dce10: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3DCE10u;
    {
        const bool branch_taken_0x3dce10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DCE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE10u;
        // 0x3dce14: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dce10) {
            ctx->pc = 0x3DCDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dcdf8;
        }
    }
    ctx->pc = 0x3DCE18u;
label_3dce18:
    // 0x3dce18: 0x9203001b  lbu         $v1, 0x1B($s0)
    ctx->pc = 0x3dce18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27)));
    // 0x3dce1c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3dce1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3dce20: 0xa203001b  sb          $v1, 0x1B($s0)
    ctx->pc = 0x3dce20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dce24: 0x0  nop
    ctx->pc = 0x3dce24u;
    // NOP
label_3dce28:
    // 0x3dce28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dce28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dce2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dce2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dce30: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE30u;
        // 0x3dce34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCE38u;
}
