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

// Function: sub_00326880
// Address: 0x326880 - 0x326920
void sub_00326880_0x326880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326880_0x326880");
#endif

    ctx->pc = 0x326880u;

    // 0x326880: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x326880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x326884: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x326884u;
    {
        const bool branch_taken_0x326884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326884u;
        // 0x326888: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326884) {
            ctx->pc = 0x326898u;
            goto label_326898;
        }
    }
    ctx->pc = 0x32688Cu;
    // 0x32688c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x32688Cu;
    {
        const bool branch_taken_0x32688c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32688Cu;
        // 0x326890: 0xac206c48  sw          $zero, 0x6C48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 27720), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32688c) {
            ctx->pc = 0x3268A8u;
            goto label_3268a8;
        }
    }
    ctx->pc = 0x326894u;
    // 0x326894: 0x0  nop
    ctx->pc = 0x326894u;
    // NOP
label_326898:
    // 0x326898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32689c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x32689cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3268a0: 0xac226c48  sw          $v0, 0x6C48($at)
    ctx->pc = 0x3268a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6C48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C48u, _value); } while (0);
    // 0x3268a4: 0x0  nop
    ctx->pc = 0x3268a4u;
    // NOP
label_3268a8:
    // 0x3268a8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3268a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3268ac: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x3268acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x3268b0: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x3268b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3268b4: 0xa027ada7  sb          $a3, -0x5259($at)
    ctx->pc = 0x3268b4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946215), (uint8_t)GPR_U32(ctx, 7));
    // 0x3268b8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3268b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3268bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3268bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3268c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3268c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3268c4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x3268c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x3268c8: 0xa028ad8c  sb          $t0, -0x5274($at)
    ctx->pc = 0x3268c8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946188), (uint8_t)GPR_U32(ctx, 8));
    // 0x3268cc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3268ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3268d0: 0xac266c4c  sw          $a2, 0x6C4C($at)
    ctx->pc = 0x3268d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7E6C4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C4Cu, _value); } while (0);
    // 0x3268d4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3268d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3268d8: 0xac226c54  sw          $v0, 0x6C54($at)
    ctx->pc = 0x3268d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6C54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C54u, _value); } while (0);
    // 0x3268dc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3268dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3268e0: 0xac226c50  sw          $v0, 0x6C50($at)
    ctx->pc = 0x3268e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6C50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C50u, _value); } while (0);
    // 0x3268e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3268e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3268e8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3268e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3268ec: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3268ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3268f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3268F0u;
    {
        const bool branch_taken_0x3268f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3268F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268F0u;
        // 0x3268f4: 0xac236c48  sw          $v1, 0x6C48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 27720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3268f0) {
            ctx->pc = 0x326908u;
            goto label_326908;
        }
    }
    ctx->pc = 0x3268F8u;
    // 0x3268f8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3268f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3268fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3268FCu;
    {
        const bool branch_taken_0x3268fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268FCu;
        // 0x326900: 0xac206c58  sw          $zero, 0x6C58($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 27736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3268fc) {
            ctx->pc = 0x326910u;
            goto label_326910;
        }
    }
    ctx->pc = 0x326904u;
    // 0x326904: 0x0  nop
    ctx->pc = 0x326904u;
    // NOP
label_326908:
    // 0x326908: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x326908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x32690c: 0xac236c58  sw          $v1, 0x6C58($at)
    ctx->pc = 0x32690cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6C58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C58u, _value); } while (0);
label_326910:
    // 0x326910: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x326910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x326914: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x326914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x326918: 0x8054738  j           func_151CE0
    ctx->pc = 0x326918u;
    ctx->pc = 0x32691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326918u;
    // 0x32691c: 0x24a56c40  addiu       $a1, $a1, 0x6C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151CE0u;
    sub_00151CE0_0x151ce0(rdram, ctx, runtime); return;
    ctx->pc = 0x326920u;
}
