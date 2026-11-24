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

// Function: sub_00178AE0
// Address: 0x178ae0 - 0x178c84
void sub_00178AE0_0x178ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178AE0_0x178ae0");
#endif

    switch (ctx->pc) {
        case 0x178b2cu: goto label_178b2c;
        case 0x178c08u: goto label_178c08;
        case 0x178c4cu: goto label_178c4c;
        case 0x178c58u: goto label_178c58;
        default: break;
    }

    ctx->pc = 0x178ae0u;

    // 0x178ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178ae4: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x178ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x178ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178aec: 0x8c241000  lw          $a0, 0x1000($at)
    ctx->pc = 0x178aecu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x12001000u)); // MMIO: 0x12001000
    // 0x178af0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x178af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x178af4: 0x8c23ceb4  lw          $v1, -0x314C($at)
    ctx->pc = 0x178af4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB4u));
    // 0x178af8: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x178af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x178afc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x178afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x178b00: 0x9022c621  lbu         $v0, -0x39DF($at)
    ctx->pc = 0x178b00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x86C621u));
    // 0x178b04: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x178b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x178b08: 0xac24ceac  sw          $a0, -0x3154($at)
    ctx->pc = 0x178b08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEACu, _value); } while (0);
    // 0x178b0c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x178b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x178b10: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x178B10u;
    {
        const bool branch_taken_0x178b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B10u;
        // 0x178b14: 0xac23ceb4  sw          $v1, -0x314C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954676), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b10) {
            ctx->pc = 0x178C28u;
            goto label_178c28;
        }
    }
    ctx->pc = 0x178B18u;
    // 0x178b18: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x178b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x178b1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b20: 0x34449000  ori         $a0, $v0, 0x9000
    ctx->pc = 0x178b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x178b24: 0xc04121a  jal         func_104868
    ctx->pc = 0x178B24u;
    SET_GPR_U32(ctx, 31, 0x178B2Cu);
    ctx->pc = 0x178B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B24u;
    // 0x178b28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104868u, 0x178B24u, 0x178B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B2Cu;
label_178b2c:
    // 0x178b2c: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x178b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x178b30: 0x3c020082  lui         $v0, 0x82
    ctx->pc = 0x178b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)130 << 16));
    // 0x178b34: 0x9023c623  lbu         $v1, -0x39DD($at)
    ctx->pc = 0x178b34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x86C623u));
    // 0x178b38: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x178b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x178b3c: 0x2442cea0  addiu       $v0, $v0, -0x3160
    ctx->pc = 0x178b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954656));
    // 0x178b40: 0x24849600  addiu       $a0, $a0, -0x6A00
    ctx->pc = 0x178b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940160));
    // 0x178b44: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x178b44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x178b48: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x178b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x178b4c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x178b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x178b50: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x178b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x178b54: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x178b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178b58: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x178b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178b5c: 0xdc632860  ld          $v1, 0x2860($v1)
    ctx->pc = 0x178b5cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 10336)));
    // 0x178b60: 0xfc230000  sd          $v1, 0x0($at)
    ctx->pc = 0x178b60u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 0), GPR_U64(ctx, 3));
    // 0x178b64: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x178b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x178b68: 0x9023c623  lbu         $v1, -0x39DD($at)
    ctx->pc = 0x178b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x86C623u));
    // 0x178b6c: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x178b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x178b70: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x178b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x178b74: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x178b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x178b78: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x178b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x178b7c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x178b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178b80: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x178b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178b84: 0xdc632890  ld          $v1, 0x2890($v1)
    ctx->pc = 0x178b84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 10384)));
    // 0x178b88: 0xfc230080  sd          $v1, 0x80($at)
    ctx->pc = 0x178b88u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 128), GPR_U64(ctx, 3));
    // 0x178b8c: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x178b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x178b90: 0x9023c623  lbu         $v1, -0x39DD($at)
    ctx->pc = 0x178b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x86C623u));
    // 0x178b94: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x178b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x178b98: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x178b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x178b9c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x178b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x178ba0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x178ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x178ba4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x178ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178ba8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x178ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178bac: 0xdc632878  ld          $v1, 0x2878($v1)
    ctx->pc = 0x178bacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 10360)));
    // 0x178bb0: 0xfc2300a0  sd          $v1, 0xA0($at)
    ctx->pc = 0x178bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 160), GPR_U64(ctx, 3));
    // 0x178bb4: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x178bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x178bb8: 0x9023c623  lbu         $v1, -0x39DD($at)
    ctx->pc = 0x178bb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x86C623u));
    // 0x178bbc: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x178bbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x178bc0: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x178bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x178bc4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x178bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x178bc8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x178bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x178bcc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x178bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178bd0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x178bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178bd4: 0xdc632888  ld          $v1, 0x2888($v1)
    ctx->pc = 0x178bd4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 10376)));
    // 0x178bd8: 0xfc230070  sd          $v1, 0x70($at)
    ctx->pc = 0x178bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 112), GPR_U64(ctx, 3));
    // 0x178bdc: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x178bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x178be0: 0x9023c623  lbu         $v1, -0x39DD($at)
    ctx->pc = 0x178be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x86C623u));
    // 0x178be4: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x178be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x178be8: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x178be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x178bec: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x178becu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x178bf0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x178bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x178bf4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x178bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178bf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x178bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178bfc: 0xdc422870  ld          $v0, 0x2870($v0)
    ctx->pc = 0x178bfcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 10352)));
    // 0x178c00: 0xc07405c  jal         func_1D0170
    ctx->pc = 0x178C00u;
    SET_GPR_U32(ctx, 31, 0x178C08u);
    ctx->pc = 0x178C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C00u;
    // 0x178c04: 0xfc220090  sd          $v0, 0x90($at) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 1), 144), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0170u, 0x178C00u, 0x178C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C08u;
label_178c08:
    // 0x178c08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x178c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x178c0c: 0x9022cea5  lbu         $v0, -0x315B($at)
    ctx->pc = 0x178c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CEA5u));
    // 0x178c10: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x178C10u;
    {
        const bool branch_taken_0x178c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C10u;
        // 0x178c14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c10) {
            ctx->pc = 0x178C50u;
            goto label_178c50;
        }
    }
    ctx->pc = 0x178C18u;
    // 0x178c18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x178c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x178c1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x178C1Cu;
    {
        const bool branch_taken_0x178c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C1Cu;
        // 0x178c20: 0xa022cea5  sb          $v0, -0x315B($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294954661), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c1c) {
            ctx->pc = 0x178C50u;
            goto label_178c50;
        }
    }
    ctx->pc = 0x178C24u;
    // 0x178c24: 0x0  nop
    ctx->pc = 0x178c24u;
    // NOP
label_178c28:
    // 0x178c28: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x178c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x178c2c: 0x9022cea5  lbu         $v0, -0x315B($at)
    ctx->pc = 0x178c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CEA5u));
    // 0x178c30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x178C30u;
    {
        const bool branch_taken_0x178c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C30u;
        // 0x178c34: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c30) {
            ctx->pc = 0x178C50u;
            goto label_178c50;
        }
    }
    ctx->pc = 0x178C38u;
    // 0x178c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178c3c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x178c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x178c40: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x178c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x178c44: 0xc05e0c8  jal         func_178320
    ctx->pc = 0x178C44u;
    SET_GPR_U32(ctx, 31, 0x178C4Cu);
    ctx->pc = 0x178C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C44u;
    // 0x178c48: 0xa022cea5  sb          $v0, -0x315B($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294954661), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178320u, 0x178C44u, 0x178C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C4Cu;
label_178c4c:
    // 0x178c4c: 0x0  nop
    ctx->pc = 0x178c4cu;
    // NOP
label_178c50:
    // 0x178c50: 0xc08d250  jal         func_234940
    ctx->pc = 0x178C50u;
    SET_GPR_U32(ctx, 31, 0x178C58u);
    ctx->pc = 0x178C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C50u;
    // 0x178c54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234940u, 0x178C50u, 0x178C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C58u;
label_178c58:
    // 0x178c58: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x178c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x178c5c: 0x8c22cea0  lw          $v0, -0x3160($at)
    ctx->pc = 0x178c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEA0u));
    // 0x178c60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x178c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x178c64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x178c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x178c68: 0xac22cea0  sw          $v0, -0x3160($at)
    ctx->pc = 0x178c68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEA0u, _value); } while (0);
    // 0x178c6c: 0xf  sync
    ctx->pc = 0x178c6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x178c70: 0x42000038  ei
    ctx->pc = 0x178c70u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x178c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178c78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x178c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x178C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C7Cu;
        // 0x178c80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178C84u;
}
